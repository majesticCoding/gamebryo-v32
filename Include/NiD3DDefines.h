// EMERGENT GAME TECHNOLOGIES PROPRIETARY INFORMATION
//
// This software is supplied under the terms of a license agreement or
// nondisclosure agreement with Emergent Game Technologies and may not
// be copied or disclosed except in accordance with the terms of that
// agreement.
//
//      Copyright (c) 1996-2009 Emergent Game Technologies.
//      All Rights Reserved.
//
// Emergent Game Technologies, Calabasas, CA 91302
// http://www.emergent.net

#pragma once
#ifndef NID3DDEFINES_H
#define NID3DDEFINES_H

#include <NiOS.h>

#if defined(_XENON)
    #include "NiXenonDefines.h"
#elif defined(WIN32)
    #include "NiDX9Defines.h"
#else
    #error _XENON or WIN32 must be specified
#endif

#endif  //#ifndef NID3DDEFINES_H
