// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosVDSceneParticleFlags.h"

#ifdef CHAOSVD_ChaosVDSceneParticleFlags_generated_h
#error "ChaosVDSceneParticleFlags.generated.h already included, missing '#pragma once' in ChaosVDSceneParticleFlags.h"
#endif
#define CHAOSVD_ChaosVDSceneParticleFlags_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDSceneParticleFlags_h

// ********** Begin Enum EChaosVDActorGeometryUpdateFlags ******************************************
#define FOREACH_ENUM_ECHAOSVDACTORGEOMETRYUPDATEFLAGS(op) \
	op(EChaosVDActorGeometryUpdateFlags::None) \
	op(EChaosVDActorGeometryUpdateFlags::ForceUpdate) 

enum class EChaosVDActorGeometryUpdateFlags : uint8;
template<> struct TIsUEnumClass<EChaosVDActorGeometryUpdateFlags> { enum { Value = true }; };
template<> CHAOSVD_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDActorGeometryUpdateFlags>();
// ********** End Enum EChaosVDActorGeometryUpdateFlags ********************************************

// ********** Begin Enum EChaosVDHideParticleFlags *************************************************
#define FOREACH_ENUM_ECHAOSVDHIDEPARTICLEFLAGS(op) \
	op(EChaosVDHideParticleFlags::None) \
	op(EChaosVDHideParticleFlags::HiddenByVisualizationFlags) \
	op(EChaosVDHideParticleFlags::HiddenBySceneOutliner) \
	op(EChaosVDHideParticleFlags::HiddenByActiveState) \
	op(EChaosVDHideParticleFlags::HiddenBySolverVisibility) 

enum class EChaosVDHideParticleFlags : uint8;
template<> struct TIsUEnumClass<EChaosVDHideParticleFlags> { enum { Value = true }; };
template<> CHAOSVD_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDHideParticleFlags>();
// ********** End Enum EChaosVDHideParticleFlags ***************************************************

// ********** Begin Enum EChaosVDSceneParticleDirtyFlags *******************************************
#define FOREACH_ENUM_ECHAOSVDSCENEPARTICLEDIRTYFLAGS(op) \
	op(EChaosVDSceneParticleDirtyFlags::None) \
	op(EChaosVDSceneParticleDirtyFlags::Visibility) \
	op(EChaosVDSceneParticleDirtyFlags::Coloring) \
	op(EChaosVDSceneParticleDirtyFlags::Active) \
	op(EChaosVDSceneParticleDirtyFlags::Transform) \
	op(EChaosVDSceneParticleDirtyFlags::Parent) \
	op(EChaosVDSceneParticleDirtyFlags::Geometry) \
	op(EChaosVDSceneParticleDirtyFlags::CollisionData) \
	op(EChaosVDSceneParticleDirtyFlags::PreUpdatePass) \
	op(EChaosVDSceneParticleDirtyFlags::TEDS) \
	op(EChaosVDSceneParticleDirtyFlags::StreamingBounds) 

enum class EChaosVDSceneParticleDirtyFlags : uint16;
template<> struct TIsUEnumClass<EChaosVDSceneParticleDirtyFlags> { enum { Value = true }; };
template<> CHAOSVD_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDSceneParticleDirtyFlags>();
// ********** End Enum EChaosVDSceneParticleDirtyFlags *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
