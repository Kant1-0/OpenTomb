#pragma once

/* -*- Mode: C++; tab-width: 3; indent-tabs-mode: t; c-basic-offset: 3 -*- */
/*================================================================
 * 
 * Project : OpenRaider
 * Author  : Terry 'Mongoose' Hendrix II
 * Website : http://www.westga.edu/~stu7440/
 * Email   : stu7440@westga.edu
 * Object  : gl_util
 * License : No use w/o permission (C) 2001 Mongoose
 * Comments: 
 *
 *
 *           This file was generated using Mongoose's C++ 
 *           template generator script.  <stu7440@westga.edu>
 * 
 *-- History ------------------------------------------------ 
 *
 * 2001.12.31:
 * Mongoose - Created
 * TeslaRus - modyfied
 ================================================================*/

#include <SDL2/SDL_platform.h>
#include <SDL2/SDL_opengl.h>    /* Header File For The OpenGL Library */

#ifdef __cplusplus
extern "C" {
#endif

//GLAPI char *engine_gl_ext_str;
#ifndef GL_GLEXT_PROTOTYPES
/*GLSL functions EXT*/
GLAPI PFNGLDELETEOBJECTARBPROC glDeleteObjectARB;
GLAPI PFNGLGETHANDLEARBPROC glGetHandleARB;
GLAPI PFNGLDETACHOBJECTARBPROC glDetachObjectARB;
GLAPI PFNGLCREATESHADEROBJECTARBPROC glCreateShaderObjectARB;
GLAPI PFNGLSHADERSOURCEARBPROC glShaderSourceARB;
GLAPI PFNGLCOMPILESHADERARBPROC glCompileShaderARB;
GLAPI PFNGLCREATEPROGRAMOBJECTARBPROC glCreateProgramObjectARB;
GLAPI PFNGLATTACHOBJECTARBPROC glAttachObjectARB;
GLAPI PFNGLLINKPROGRAMARBPROC glLinkProgramARB;
GLAPI PFNGLUSEPROGRAMOBJECTARBPROC glUseProgramObjectARB;
GLAPI PFNGLVALIDATEPROGRAMARBPROC glValidateProgramARB;
GLAPI PFNGLUNIFORM1FARBPROC glUniform1fARB;
GLAPI PFNGLUNIFORM2FARBPROC glUniform2fARB;
GLAPI PFNGLUNIFORM3FARBPROC glUniform3fARB;
GLAPI PFNGLUNIFORM4FARBPROC glUniform4fARB;
GLAPI PFNGLUNIFORM1IARBPROC glUniform1iARB;
GLAPI PFNGLUNIFORM2IARBPROC glUniform2iARB;
GLAPI PFNGLUNIFORM3IARBPROC glUniform3iARB;
GLAPI PFNGLUNIFORM4IARBPROC glUniform4iARB;
GLAPI PFNGLUNIFORM1FVARBPROC glUniform1fvARB;
GLAPI PFNGLUNIFORM2FVARBPROC glUniform2fvARB;
GLAPI PFNGLUNIFORM3FVARBPROC glUniform3fvARB;
GLAPI PFNGLUNIFORM4FVARBPROC glUniform4fvARB;
GLAPI PFNGLUNIFORM1IVARBPROC glUniform1ivARB;
GLAPI PFNGLUNIFORM2IVARBPROC glUniform2ivARB;
GLAPI PFNGLUNIFORM3IVARBPROC glUniform3ivARB;
GLAPI PFNGLUNIFORM4IVARBPROC glUniform4ivARB;
GLAPI PFNGLUNIFORMMATRIX2FVARBPROC glUniformMatrix2fvARB;
GLAPI PFNGLUNIFORMMATRIX3FVARBPROC glUniformMatrix3fvARB;
GLAPI PFNGLUNIFORMMATRIX4FVARBPROC glUniformMatrix4fvARB;
GLAPI PFNGLGETOBJECTPARAMETERFVARBPROC glGetObjectParameterfvARB;
GLAPI PFNGLGETOBJECTPARAMETERIVARBPROC glGetObjectParameterivARB;
GLAPI PFNGLGETINFOLOGARBPROC glGetInfoLogARB;
GLAPI PFNGLGETATTACHEDOBJECTSARBPROC glGetAttachedObjectsARB;
GLAPI PFNGLGETUNIFORMLOCATIONARBPROC glGetUniformLocationARB;
GLAPI PFNGLGETACTIVEUNIFORMARBPROC glGetActiveUniformARB;
GLAPI PFNGLGETUNIFORMFVARBPROC glGetUniformfvARB;
GLAPI PFNGLGETUNIFORMIVARBPROC glGetUniformivARB;
GLAPI PFNGLGETSHADERSOURCEARBPROC glGetShaderSourceARB;

GLAPI PFNGLBINDATTRIBLOCATIONARBPROC glBindAttribLocationARB;
GLAPI PFNGLGETACTIVEATTRIBARBPROC glGetActiveAttribARB;
GLAPI PFNGLGETATTRIBLOCATIONARBPROC glGetAttribLocationARB;
GLAPI PFNGLENABLEVERTEXATTRIBARRAYARBPROC glEnableVertexAttribArrayARB;
GLAPI PFNGLENABLEVERTEXATTRIBARRAYARBPROC glDisableVertexAttribArrayARB;
GLAPI PFNGLVERTEXATTRIBPOINTERARBPROC glVertexAttribPointerARB;


/*multitexture EXT*/
GLAPI PFNGLACTIVETEXTUREARBPROC glActiveTextureARB;
GLAPI PFNGLCLIENTACTIVETEXTUREARBPROC glClientActiveTextureARB;
GLAPI PFNGLMULTITEXCOORD1DARBPROC glMultiTexCoord1dARB;
GLAPI PFNGLMULTITEXCOORD1DVARBPROC glMultiTexCoord1dvARB;
GLAPI PFNGLMULTITEXCOORD1FARBPROC glMultiTexCoord1fARB;
GLAPI PFNGLMULTITEXCOORD1FVARBPROC glMultiTexCoord1fvARB;
GLAPI PFNGLMULTITEXCOORD1IARBPROC glMultiTexCoord1iARB;
GLAPI PFNGLMULTITEXCOORD1IVARBPROC glMultiTexCoord1ivARB;
GLAPI PFNGLMULTITEXCOORD1SARBPROC glMultiTexCoord1sARB;
GLAPI PFNGLMULTITEXCOORD1SVARBPROC glMultiTexCoord1svARB;
GLAPI PFNGLMULTITEXCOORD2DARBPROC glMultiTexCoord2dARB;
GLAPI PFNGLMULTITEXCOORD2DVARBPROC glMultiTexCoord2dvARB;
GLAPI PFNGLMULTITEXCOORD2FARBPROC glMultiTexCoord2fARB;
GLAPI PFNGLMULTITEXCOORD2FVARBPROC glMultiTexCoord2fvARB;
GLAPI PFNGLMULTITEXCOORD2IARBPROC glMultiTexCoord2iARB;
GLAPI PFNGLMULTITEXCOORD2IVARBPROC glMultiTexCoord2ivARB;
GLAPI PFNGLMULTITEXCOORD2SARBPROC glMultiTexCoord2sARB;
GLAPI PFNGLMULTITEXCOORD2SVARBPROC glMultiTexCoord2svARB;
GLAPI PFNGLMULTITEXCOORD3DARBPROC glMultiTexCoord3dARB;
GLAPI PFNGLMULTITEXCOORD3DVARBPROC glMultiTexCoord3dvARB;
GLAPI PFNGLMULTITEXCOORD3FARBPROC glMultiTexCoord3fARB;
GLAPI PFNGLMULTITEXCOORD3FVARBPROC glMultiTexCoord3fvARB;
GLAPI PFNGLMULTITEXCOORD3IARBPROC glMultiTexCoord3iARB;
GLAPI PFNGLMULTITEXCOORD3IVARBPROC glMultiTexCoord3ivARB;
GLAPI PFNGLMULTITEXCOORD3SARBPROC glMultiTexCoord3sARB;
GLAPI PFNGLMULTITEXCOORD3SVARBPROC glMultiTexCoord3svARB;
GLAPI PFNGLMULTITEXCOORD4DARBPROC glMultiTexCoord4dARB;
GLAPI PFNGLMULTITEXCOORD4DVARBPROC glMultiTexCoord4dvARB;
GLAPI PFNGLMULTITEXCOORD4FARBPROC glMultiTexCoord4fARB;
GLAPI PFNGLMULTITEXCOORD4FVARBPROC glMultiTexCoord4fvARB;
GLAPI PFNGLMULTITEXCOORD4IARBPROC glMultiTexCoord4iARB;
GLAPI PFNGLMULTITEXCOORD4IVARBPROC glMultiTexCoord4ivARB;
GLAPI PFNGLMULTITEXCOORD4SARBPROC glMultiTexCoord4sARB;
GLAPI PFNGLMULTITEXCOORD4SVARBPROC glMultiTexCoord4svARB;

/* VBO EXT */
GLAPI PFNGLBINDBUFFERARBPROC glBindBufferARB;
GLAPI PFNGLDELETEBUFFERSARBPROC glDeleteBuffersARB;
GLAPI PFNGLGENBUFFERSARBPROC glGenBuffersARB;
GLAPI PFNGLISBUFFERARBPROC glIsBufferARB;
GLAPI PFNGLBUFFERDATAARBPROC glBufferDataARB;
GLAPI PFNGLBUFFERSUBDATAARBPROC glBufferSubDataARB;
GLAPI PFNGLGETBUFFERSUBDATAARBPROC glGetBufferSubDataARB;
GLAPI PFNGLMAPBUFFERARBPROC glMapBufferARB;
GLAPI PFNGLUNMAPBUFFERARBPROC glUnmapBufferARB;
GLAPI PFNGLGETBUFFERPARAMETERIVARBPROC glGetBufferParameterivARB;
GLAPI PFNGLGETBUFFERPOINTERVARBPROC glGetBufferPointervARB;

/* VAO ext
 * Note: These functions do not have a ...ARB version, because they were first introduced in OpenGL 3 without suffix and then ported back as an extension.
 */
GLAPI PFNGLGENVERTEXARRAYSPROC glGenVertexArrays;
GLAPI PFNGLBINDVERTEXARRAYPROC glBindVertexArray;
GLAPI PFNGLDELETEVERTEXARRAYSPROC glDeleteVertexArrays;

GLAPI PFNGLGENERATEMIPMAPPROC glGenerateMipmap;
#endif

#ifdef __cplusplus
}
#endif

void InitGLExtFuncs();
int IsGLExtensionSupported(const char *ext);

int checkOpenGLError();
void printInfoLog (GLhandleARB object);
int loadShaderFromBuff(GLhandleARB ShaderObj, char * source);
int loadShaderFromFile(GLhandleARB ShaderObj, const char * fileName, const char *additionalDefines);