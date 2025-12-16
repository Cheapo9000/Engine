// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosMover/PathedMovement/ChaosPathedMovementMode.h"

#ifdef CHAOSMOVER_ChaosPathedMovementMode_generated_h
#error "ChaosPathedMovementMode.generated.h already included, missing '#pragma once' in ChaosPathedMovementMode.h"
#endif
#define CHAOSMOVER_ChaosPathedMovementMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UChaosPathedMovementPatternBase;
class UClass;

// ********** Begin Class UChaosPathedMovementMode *************************************************
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementMode_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetOneWayTripDuration_BeginPlayOnly); \
	DECLARE_FUNCTION(execBP_FindPattern);


struct Z_Construct_UClass_UChaosPathedMovementMode_Statics;
CHAOSMOVER_API UClass* Z_Construct_UClass_UChaosPathedMovementMode_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementMode_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosPathedMovementMode(); \
	friend struct ::Z_Construct_UClass_UChaosPathedMovementMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMOVER_API UClass* ::Z_Construct_UClass_UChaosPathedMovementMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosPathedMovementMode, UChaosMovementMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosMover"), Z_Construct_UClass_UChaosPathedMovementMode_NoRegister) \
	DECLARE_SERIALIZER(UChaosPathedMovementMode) \
	virtual UObject* _getUObject() const override { return const_cast<UChaosPathedMovementMode*>(this); }


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementMode_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosPathedMovementMode(UChaosPathedMovementMode&&) = delete; \
	UChaosPathedMovementMode(const UChaosPathedMovementMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosPathedMovementMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosPathedMovementMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosPathedMovementMode) \
	NO_API virtual ~UChaosPathedMovementMode();


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementMode_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementMode_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementMode_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementMode_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementMode_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosPathedMovementMode;

// ********** End Class UChaosPathedMovementMode ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
