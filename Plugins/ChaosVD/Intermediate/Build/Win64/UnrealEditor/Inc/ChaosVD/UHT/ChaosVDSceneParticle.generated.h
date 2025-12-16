// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosVDSceneParticle.h"

#ifdef CHAOSVD_ChaosVDSceneParticle_generated_h
#error "ChaosVDSceneParticle.generated.h already included, missing '#pragma once' in ChaosVDSceneParticle.h"
#endif
#define CHAOSVD_ChaosVDSceneParticle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChaosVDSceneParticle *********************************************
struct Z_Construct_UScriptStruct_FChaosVDSceneParticle_Statics;
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDSceneParticle_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosVDSceneParticle_Statics; \
	CHAOSVD_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDBaseSceneObject Super;


struct FChaosVDSceneParticle;
// ********** End ScriptStruct FChaosVDSceneParticle ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDSceneParticle_h

// ********** Begin Enum EChaosVDParticleVisibilityUpdateFlags *************************************
#define FOREACH_ENUM_ECHAOSVDPARTICLEVISIBILITYUPDATEFLAGS(op) \
	op(EChaosVDParticleVisibilityUpdateFlags::None) \
	op(EChaosVDParticleVisibilityUpdateFlags::DirtyScene) 

enum class EChaosVDParticleVisibilityUpdateFlags;
template<> struct TIsUEnumClass<EChaosVDParticleVisibilityUpdateFlags> { enum { Value = true }; };
template<> CHAOSVD_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDParticleVisibilityUpdateFlags>();
// ********** End Enum EChaosVDParticleVisibilityUpdateFlags ***************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
