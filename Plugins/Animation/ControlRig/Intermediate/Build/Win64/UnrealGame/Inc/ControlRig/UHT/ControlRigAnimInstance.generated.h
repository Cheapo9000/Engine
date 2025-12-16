// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigAnimInstance.h"

#ifdef CONTROLRIG_ControlRigAnimInstance_generated_h
#error "ControlRigAnimInstance.generated.h already included, missing '#pragma once' in ControlRigAnimInstance.h"
#endif
#define CONTROLRIG_ControlRigAnimInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FControlRigAnimInstanceProxy **************************************
struct Z_Construct_UScriptStruct_FControlRigAnimInstanceProxy_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FControlRigAnimInstanceProxy_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimInstanceProxy Super;


struct FControlRigAnimInstanceProxy;
// ********** End ScriptStruct FControlRigAnimInstanceProxy ****************************************

// ********** Begin Class UControlRigAnimInstance **************************************************
struct Z_Construct_UClass_UControlRigAnimInstance_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigAnimInstance_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUControlRigAnimInstance(); \
	friend struct ::Z_Construct_UClass_UControlRigAnimInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_UControlRigAnimInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_UControlRigAnimInstance_NoRegister) \
	DECLARE_SERIALIZER(UControlRigAnimInstance)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIG_API UControlRigAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, UControlRigAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigAnimInstance); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigAnimInstance(UControlRigAnimInstance&&) = delete; \
	UControlRigAnimInstance(const UControlRigAnimInstance&) = delete; \
	CONTROLRIG_API virtual ~UControlRigAnimInstance();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h_42_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h_45_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigAnimInstance;

// ********** End Class UControlRigAnimInstance ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
