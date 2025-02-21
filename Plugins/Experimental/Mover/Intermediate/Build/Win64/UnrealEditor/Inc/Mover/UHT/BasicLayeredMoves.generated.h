// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVER_BasicLayeredMoves_generated_h
#error "BasicLayeredMoves.generated.h already included, missing '#pragma once' in BasicLayeredMoves.h"
#endif
#define MOVER_BasicLayeredMoves_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_BasicLayeredMoves_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLayeredMove_LinearVelocity_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FLayeredMoveBase Super;


template<> MOVER_API UScriptStruct* StaticStruct<struct FLayeredMove_LinearVelocity>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_BasicLayeredMoves_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLayeredMove_JumpImpulseOverDuration_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FLayeredMoveBase Super;


template<> MOVER_API UScriptStruct* StaticStruct<struct FLayeredMove_JumpImpulseOverDuration>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_BasicLayeredMoves_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLayeredMove_JumpTo_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FLayeredMoveBase Super;


template<> MOVER_API UScriptStruct* StaticStruct<struct FLayeredMove_JumpTo>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_BasicLayeredMoves_h_184_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLayeredMove_MoveTo_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FLayeredMoveBase Super;


template<> MOVER_API UScriptStruct* StaticStruct<struct FLayeredMove_MoveTo>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_BasicLayeredMoves_h_247_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLayeredMove_MoveToDynamic_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FLayeredMove_MoveTo Super;


template<> MOVER_API UScriptStruct* StaticStruct<struct FLayeredMove_MoveToDynamic>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_BasicLayeredMoves_h_284_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FLayeredMoveBase Super;


template<> MOVER_API UScriptStruct* StaticStruct<struct FLayeredMove_RadialImpulse>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_BasicLayeredMoves_h


#define FOREACH_ENUM_ELAYEREDMOVE_CONSTANTVELOCITYSETTINGSFLAGS(op) \
	op(ELayeredMove_ConstantVelocitySettingsFlags::NoFlags) \
	op(ELayeredMove_ConstantVelocitySettingsFlags::VelocityStartRelative) \
	op(ELayeredMove_ConstantVelocitySettingsFlags::VelocityAlwaysRelative) 

enum class ELayeredMove_ConstantVelocitySettingsFlags : uint8;
template<> struct TIsUEnumClass<ELayeredMove_ConstantVelocitySettingsFlags> { enum { Value = true }; };
template<> MOVER_API UEnum* StaticEnum<ELayeredMove_ConstantVelocitySettingsFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
