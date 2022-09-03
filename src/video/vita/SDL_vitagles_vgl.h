/*
  Simple DirectMedia Layer
  Copyright (C) 1997-2017 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/
#include "../../SDL_internal.h"

#ifndef _SDL_vitagles_vgl_h
#define _SDL_vitagles_vgl_h

#if SDL_VIDEO_DRIVER_VITA && SDL_VIDEO_VITA_VGL

#include <vitaGL.h>
#include "SDL_vitavideo.h"

typedef struct SDL_GLDriverData
{
    uint32_t swapinterval;
} SDL_GLDriverData;

extern void * VITA_GLES_GetProcAddress(_THIS, const char *proc);
extern int VITA_GLES_MakeCurrent(_THIS,SDL_Window * window, SDL_GLContext context);
extern void VITA_GLES_SwapBuffers(_THIS);
extern int VITA_GLES_SwapWindow(_THIS, SDL_Window * window);
extern SDL_GLContext VITA_GLES_CreateContext(_THIS, SDL_Window * window);
extern int VITA_GLES_LoadLibrary(_THIS, const char *path);
extern void VITA_GLES_UnloadLibrary(_THIS);
extern int VITA_GLES_SetSwapInterval(_THIS, int interval);
extern int VITA_GLES_GetSwapInterval(_THIS);
extern void VITA_GLES_DefaultProfileConfig(_THIS, int *mask, int *major, int *minor);

#endif /* SDL_VIDEO_DRIVER_VITA && SDL_VIDEO_VITA_VGL */

#endif /* _SDL_vitagles_vgl_h */
