-- OPENTOMB LEVEL SCRIPT
-- FOR TOMB RAIDER 5, JOBY3

print("Level script loaded (JOBY3.lua)");

level_PostLoad = function()
    addCharacterHair(player, HAIR_TR5_OLD);
    playStream(121);
end;

level_PreLoad = function()
    -- STATIC COLLISION FLAGS ------------------------------------------------------
    --------------------------------------------------------------------------------
end;