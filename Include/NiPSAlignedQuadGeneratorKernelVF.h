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

#ifndef NIPSALIGNEDQUADGENERATORKERNELVF_H
#define NIPSALIGNEDQUADGENERATORKERNELVF_H

#include <NiParticleLibType.h>
#include <NiSPKernelMacros.h>
#include <NiPSKernelDefinitions.h>
#include <NiPSAlignedQuadGeneratorKernelStruct.h>

/**
    Generates aligned quads for a particle system in which the normal to the
    quads is aligned on a per-particle basis and the up direction is fixed.

    Each quad is composed of two triangles. Each vertex has a normal and
    optionally a color. Rotation angles, if available, are applied after
    the alignment.
*/
NiSPDeclareKernelLib(NiPSAlignedQuadGeneratorKernelVF, NIPARTICLE_ENTRY)

#endif  // #ifndef NIPSALIGNEDQUADGENERATORKERNELVF_H
