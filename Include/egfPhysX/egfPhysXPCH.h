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

#ifndef EE_EGFPHYSXPCH_H
#define EE_EGFPHYSXPCH_H

#if defined(EE_USE_PCH)

#include <efd/MessageService.h>
#include <efd/Asserts.h>
#include <efd/ILogger.h>
#include <efd/IDs.h>
#include <efd/MemoryDefines.h>
#include <efd/UniversalTypes.h>
#include <efd/utf8string.h>
#include <egf/Scheduler.h>
#include <egf/EntityChangeMessage.h>

#include <efdPhysX/PhysXSDKManager.h>

#include <NxScene.h>
#include <NxUserContactReport.h>

#endif // EE_USE_PCH

#endif // EE_EGFPHYSXPCH_H