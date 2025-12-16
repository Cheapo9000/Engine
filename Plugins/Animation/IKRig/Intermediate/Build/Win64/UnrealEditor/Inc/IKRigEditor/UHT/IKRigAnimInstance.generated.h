// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigEditor/IKRigAnimInstance.h"

#ifdef IKRIGEDITOR_IKRigAnimInstance_generated_h
#error "IKRigAnimInstance.generated.h already included, missing '#pragma once' in IKRigAnimInstance.h"
#endif
#define IKRIGEDITOR_IKRigAnimInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UIKRigAnimInstance *******************************************************
struct Z_Construct_UClass_UIKRigAnimInstance_Statics;
IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRigAnimInstance_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigAnimInstance_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUIKRigAnimInstance(); \
	friend struct ::Z_Construct_UClass_UIKRigAnimInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIGEDITOR_API UClass* ::Z_Construct_UClass_UIKRigAnimInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRigAnimInstance, UAnimPreviewInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IKRigEditor"), Z_Construct_UClass_UIKRigAnimInstance_NoRegister) \
	DECLARE_SERIALIZER(UIKRigAnimInstance)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigAnimInstance_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIKRigAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRigAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKRigAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRigAnimInstance); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRigAnimInstance(UIKRigAnimInstance&&) = delete; \
	UIKRigAnimInstance(const UIKRigAnimInstance&) = delete; \
	NO_API virtual ~UIKRigAnimInstance();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigAnimInstance_h_13_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigAnimInstance_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigAnimInstance_h_16_INCLASS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigAnimInstance_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRigAnimInstance;

// ********** End Class UIKRigAnimInstance *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigAnimInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
