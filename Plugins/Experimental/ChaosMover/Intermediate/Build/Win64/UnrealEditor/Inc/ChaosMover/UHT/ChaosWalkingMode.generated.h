// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosMover/Character/Modes/ChaosWalkingMode.h"

#ifdef CHAOSMOVER_ChaosWalkingMode_generated_h
#error "ChaosWalkingMode.generated.h already included, missing '#pragma once' in ChaosWalkingMode.h"
#endif
#define CHAOSMOVER_ChaosWalkingMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosWalkingMode ********************************************************
struct Z_Construct_UClass_UChaosWalkingMode_Statics;
CHAOSMOVER_API UClass* Z_Construct_UClass_UChaosWalkingMode_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosWalkingMode_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosWalkingMode(); \
	friend struct ::Z_Construct_UClass_UChaosWalkingMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMOVER_API UClass* ::Z_Construct_UClass_UChaosWalkingMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosWalkingMode, UChaosCharacterMovementMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosMover"), Z_Construct_UClass_UChaosWalkingMode_NoRegister) \
	DECLARE_SERIALIZER(UChaosWalkingMode)


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosWalkingMode_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosWalkingMode(UChaosWalkingMode&&) = delete; \
	UChaosWalkingMode(const UChaosWalkingMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSMOVER_API, UChaosWalkingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosWalkingMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosWalkingMode) \
	CHAOSMOVER_API virtual ~UChaosWalkingMode();


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosWalkingMode_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosWalkingMode_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosWalkingMode_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosWalkingMode_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosWalkingMode;

// ********** End Class UChaosWalkingMode **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosWalkingMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
