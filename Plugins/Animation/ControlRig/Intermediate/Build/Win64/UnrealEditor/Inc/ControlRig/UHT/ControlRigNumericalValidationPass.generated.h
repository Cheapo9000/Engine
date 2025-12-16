// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Validation/ControlRigNumericalValidationPass.h"

#ifdef CONTROLRIG_ControlRigNumericalValidationPass_generated_h
#error "ControlRigNumericalValidationPass.generated.h already included, missing '#pragma once' in ControlRigNumericalValidationPass.h"
#endif
#define CONTROLRIG_ControlRigNumericalValidationPass_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UControlRigNumericalValidationPass ***************************************
struct Z_Construct_UClass_UControlRigNumericalValidationPass_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigNumericalValidationPass_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Validation_ControlRigNumericalValidationPass_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUControlRigNumericalValidationPass(); \
	friend struct ::Z_Construct_UClass_UControlRigNumericalValidationPass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_UControlRigNumericalValidationPass_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigNumericalValidationPass, UControlRigValidationPass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_UControlRigNumericalValidationPass_NoRegister) \
	DECLARE_SERIALIZER(UControlRigNumericalValidationPass)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Validation_ControlRigNumericalValidationPass_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIG_API UControlRigNumericalValidationPass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigNumericalValidationPass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, UControlRigNumericalValidationPass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigNumericalValidationPass); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigNumericalValidationPass(UControlRigNumericalValidationPass&&) = delete; \
	UControlRigNumericalValidationPass(const UControlRigNumericalValidationPass&) = delete; \
	CONTROLRIG_API virtual ~UControlRigNumericalValidationPass();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Validation_ControlRigNumericalValidationPass_h_12_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Validation_ControlRigNumericalValidationPass_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Validation_ControlRigNumericalValidationPass_h_15_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Validation_ControlRigNumericalValidationPass_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigNumericalValidationPass;

// ********** End Class UControlRigNumericalValidationPass *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Validation_ControlRigNumericalValidationPass_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
