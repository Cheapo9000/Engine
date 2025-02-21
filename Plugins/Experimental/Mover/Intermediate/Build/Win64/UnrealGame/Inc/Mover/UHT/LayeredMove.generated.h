// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LayeredMove.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVER_LayeredMove_generated_h
#error "LayeredMove.generated.h already included, missing '#pragma once' in LayeredMove.h"
#endif
#define MOVER_LayeredMove_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMove_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLayeredMoveFinishVelocitySettings_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FLayeredMoveFinishVelocitySettings>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMove_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLayeredMoveBase_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FLayeredMoveBase>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMove_h_158_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLayeredMoveGroup_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FLayeredMoveGroup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMove_h


#define FOREACH_ENUM_ELAYEREDMOVEFINISHVELOCITYMODE(op) \
	op(ELayeredMoveFinishVelocityMode::MaintainLastRootMotionVelocity) \
	op(ELayeredMoveFinishVelocityMode::SetVelocity) \
	op(ELayeredMoveFinishVelocityMode::ClampVelocity) 

enum class ELayeredMoveFinishVelocityMode : uint8;
template<> struct TIsUEnumClass<ELayeredMoveFinishVelocityMode> { enum { Value = true }; };
template<> MOVER_API UEnum* StaticEnum<ELayeredMoveFinishVelocityMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
