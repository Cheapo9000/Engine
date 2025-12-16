// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ParametricMovement.h"

#ifdef NETWORKPREDICTIONEXTRAS_ParametricMovement_generated_h
#error "ParametricMovement.generated.h already included, missing '#pragma once' in ParametricMovement.h"
#endif
#define NETWORKPREDICTIONEXTRAS_ParametricMovement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSimpleParametricMotion *******************************************
struct Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics;
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_ParametricMovement_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics; \
	NETWORKPREDICTIONEXTRAS_API static class UScriptStruct* StaticStruct();


struct FSimpleParametricMotion;
// ********** End ScriptStruct FSimpleParametricMotion *********************************************

// ********** Begin Class UParametricMovementComponent *********************************************
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_ParametricMovement_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEnableInterpolationMode);


struct Z_Construct_UClass_UParametricMovementComponent_Statics;
NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UParametricMovementComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_ParametricMovement_h_147_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParametricMovementComponent(); \
	friend struct ::Z_Construct_UClass_UParametricMovementComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETWORKPREDICTIONEXTRAS_API UClass* ::Z_Construct_UClass_UParametricMovementComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UParametricMovementComponent, UBaseMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPredictionExtras"), Z_Construct_UClass_UParametricMovementComponent_NoRegister) \
	DECLARE_SERIALIZER(UParametricMovementComponent)


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_ParametricMovement_h_147_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParametricMovementComponent(UParametricMovementComponent&&) = delete; \
	UParametricMovementComponent(const UParametricMovementComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParametricMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParametricMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UParametricMovementComponent) \
	NO_API virtual ~UParametricMovementComponent();


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_ParametricMovement_h_142_PROLOG
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_ParametricMovement_h_147_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_ParametricMovement_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_ParametricMovement_h_147_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_ParametricMovement_h_147_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParametricMovementComponent;

// ********** End Class UParametricMovementComponent ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_ParametricMovement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
