// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_ControlRigAnimInstance_generated_h
#error "ControlRigAnimInstance.generated.h already included, missing '#pragma once' in ControlRigAnimInstance.h"
#endif
#define CONTROLRIG_ControlRigAnimInstance_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FControlRigAnimInstanceProxy_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimInstanceProxy Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FControlRigAnimInstanceProxy>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUControlRigAnimInstance(); \
	friend struct Z_Construct_UClass_UControlRigAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UControlRigAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ControlRig"), NO_API) \
	DECLARE_SERIALIZER(UControlRigAnimInstance)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UControlRigAnimInstance(UControlRigAnimInstance&&); \
	UControlRigAnimInstance(const UControlRigAnimInstance&); \
public: \
	NO_API virtual ~UControlRigAnimInstance();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h_39_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h_42_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIG_API UClass* StaticClass<class UControlRigAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
