// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigValidationPass.h"

#ifdef CONTROLRIG_ControlRigValidationPass_generated_h
#error "ControlRigValidationPass.generated.h already included, missing '#pragma once' in ControlRigValidationPass.h"
#endif
#define CONTROLRIG_ControlRigValidationPass_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FControlRigValidationContext **************************************
struct Z_Construct_UScriptStruct_FControlRigValidationContext_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FControlRigValidationContext_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FControlRigValidationContext;
// ********** End ScriptStruct FControlRigValidationContext ****************************************

// ********** Begin Class UControlRigValidator *****************************************************
struct Z_Construct_UClass_UControlRigValidator_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigValidator_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUControlRigValidator(); \
	friend struct ::Z_Construct_UClass_UControlRigValidator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_UControlRigValidator_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigValidator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_UControlRigValidator_NoRegister) \
	DECLARE_SERIALIZER(UControlRigValidator)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIG_API UControlRigValidator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigValidator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, UControlRigValidator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigValidator); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigValidator(UControlRigValidator&&) = delete; \
	UControlRigValidator(const UControlRigValidator&) = delete; \
	CONTROLRIG_API virtual ~UControlRigValidator();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_49_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_52_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigValidator;

// ********** End Class UControlRigValidator *******************************************************

// ********** Begin Class UControlRigValidationPass ************************************************
struct Z_Construct_UClass_UControlRigValidationPass_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigValidationPass_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_83_INCLASS \
private: \
	static void StaticRegisterNativesUControlRigValidationPass(); \
	friend struct ::Z_Construct_UClass_UControlRigValidationPass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_UControlRigValidationPass_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigValidationPass, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_UControlRigValidationPass_NoRegister) \
	DECLARE_SERIALIZER(UControlRigValidationPass)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_83_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIG_API UControlRigValidationPass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigValidationPass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, UControlRigValidationPass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigValidationPass); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigValidationPass(UControlRigValidationPass&&) = delete; \
	UControlRigValidationPass(const UControlRigValidationPass&) = delete; \
	CONTROLRIG_API virtual ~UControlRigValidationPass();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_80_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_83_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_83_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_83_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigValidationPass;

// ********** End Class UControlRigValidationPass **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
