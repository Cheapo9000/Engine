// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosMover/Character/Modes/ChaosSwimmingMode.h"

#ifdef CHAOSMOVER_ChaosSwimmingMode_generated_h
#error "ChaosSwimmingMode.generated.h already included, missing '#pragma once' in ChaosSwimmingMode.h"
#endif
#define CHAOSMOVER_ChaosSwimmingMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSwimmingSettings *************************************************
struct Z_Construct_UScriptStruct_FSwimmingSettings_Statics;
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosSwimmingMode_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSwimmingSettings_Statics; \
	CHAOSMOVER_API static class UScriptStruct* StaticStruct();


struct FSwimmingSettings;
// ********** End ScriptStruct FSwimmingSettings ***************************************************

// ********** Begin Class UChaosSwimmingMode *******************************************************
struct Z_Construct_UClass_UChaosSwimmingMode_Statics;
CHAOSMOVER_API UClass* Z_Construct_UClass_UChaosSwimmingMode_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosSwimmingMode_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosSwimmingMode(); \
	friend struct ::Z_Construct_UClass_UChaosSwimmingMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMOVER_API UClass* ::Z_Construct_UClass_UChaosSwimmingMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosSwimmingMode, UChaosCharacterMovementMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosMover"), Z_Construct_UClass_UChaosSwimmingMode_NoRegister) \
	DECLARE_SERIALIZER(UChaosSwimmingMode)


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosSwimmingMode_h_92_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosSwimmingMode(UChaosSwimmingMode&&) = delete; \
	UChaosSwimmingMode(const UChaosSwimmingMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSMOVER_API, UChaosSwimmingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosSwimmingMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosSwimmingMode) \
	CHAOSMOVER_API virtual ~UChaosSwimmingMode();


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosSwimmingMode_h_89_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosSwimmingMode_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosSwimmingMode_h_92_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosSwimmingMode_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosSwimmingMode;

// ********** End Class UChaosSwimmingMode *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosSwimmingMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
