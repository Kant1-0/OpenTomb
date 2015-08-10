/*
 * Copyright 2002 - Florian Schulze <crow@icculus.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * This file is part of vt.
 *
 */

#include "l_main.h"

#include <iostream>

using namespace loader;

#define TR_AUDIO_MAP_SIZE_TR2  370

void TR2Level::load()
{
    // Version
    uint32_t file_version = m_reader.readU32();

    if (file_version != 0x0000002d)
        throw std::runtime_error("Wrong level version");

    m_palette = Palette::readTr1(m_reader);
    m_palette16 = Palette::readTr2(m_reader);

    auto numTextiles = m_reader.readU32();
    m_reader.readVector(m_textile8, numTextiles, &ByteTexture::read);
    m_reader.readVector(m_textile16, numTextiles, &WordTexture::read);

    // Unused
    if (m_reader.readU32() != 0)
        std::cerr << "Bad value for 'unused'\n";

    m_reader.readVector(m_rooms, m_reader.readU16(), Room::readTr2);
    m_reader.readVector(m_floorData, m_reader.readU32());

    readMeshData(m_reader);

    m_reader.readVector(m_animations, m_reader.readU32(), &Animation::readTr1);

    m_reader.readVector(m_stateChanges, m_reader.readU32(), &StateChange::read);

    m_reader.readVector(m_animDispatches, m_reader.readU32(), &AnimDispatch::read);

    m_reader.readVector(m_animCommands, m_reader.readU32());

    m_reader.readVector(m_meshTreeData, m_reader.readU32());

    readFrameMoveableData(m_reader);

    m_reader.readVector(m_staticMeshes, m_reader.readU32(), &StaticMesh::read);

    m_reader.readVector(m_objectTextures, m_reader.readU32(), &ObjectTexture::readTr1);

    m_reader.readVector(m_spriteTextures, m_reader.readU32(), &SpriteTexture::readTr1);

    m_reader.readVector(m_spriteSequences, m_reader.readU32(), &SpriteSequence::read);

    if (m_demoOrUb)
        m_lightmap = LightMap::read(m_reader);

    m_reader.readVector(m_cameras, m_reader.readU32(), &Camera::read);

    m_reader.readVector(m_soundSources, m_reader.readU32(), &SoundSource::read);

    m_reader.readVector(m_boxes, m_reader.readU32(), &Box::readTr2);

    m_reader.readVector(m_overlaps, m_reader.readU32());

    // Zones
    m_reader.skip(m_boxes.size() * 20);

    m_animatedTexturesUvCount = 0; // No UVRotate in TR2
    m_reader.readVector(m_animatedTextures, m_reader.readU32());

    m_reader.readVector(m_items, m_reader.readU32(), &Item::readTr2);

    if (!m_demoOrUb)
        m_lightmap = LightMap::read(m_reader);

    m_reader.readVector(m_cinematicFrames, m_reader.readU16(), &CinematicFrame::read);

    m_reader.readVector(m_demoData, m_reader.readU16());

    // Soundmap
    m_reader.readVector(m_soundmap, TR_AUDIO_MAP_SIZE_TR2);

    m_reader.readVector(m_soundDetails, m_reader.readU32(), &SoundDetails::readTr1);

    m_reader.readVector(m_sampleIndices, m_reader.readU32());

    // remap all sample indices here
    for(size_t i = 0; i < m_soundDetails.size(); i++)
    {
        if(m_soundDetails[i].sample < m_sampleIndices.size())
        {
            m_soundDetails[i].sample = m_sampleIndices[m_soundDetails[i].sample];
        }
    }

    // LOAD SAMPLES

    // In TR2, samples are stored in separate file called MAIN.SFX.
    // If there is no such files, no samples are loaded.

    io::SDLReader newsrc(m_sfxPath);
    if(!newsrc.isOpen())
    {
        std::cerr << "read_tr2_level: failed to open \"" << m_sfxPath << "\"! No samples loaded.\n";
    }
    else
    {
        m_samplesCount = 0;
        m_samplesData.resize( static_cast<size_t>(newsrc.size()) );
        for(size_t i = 0; i < m_samplesData.size(); i++)
        {
            m_samplesData[i] = newsrc.readU8();
            if((i >= 4) && (*reinterpret_cast<uint32_t*>(m_samplesData.data()+i-4) == 0x46464952))   /// RIFF
            {
                m_samplesCount++;
            }
        }
    }

    m_textile32.resize(m_textile16.size());
    for(size_t i = 0; i < m_textile16.size(); i++)
        convertTexture(m_textile16[i], m_textile32[i]);
}
