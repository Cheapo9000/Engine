// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RetargetEditor/IKRetargetAnimInstance.h"

#ifdef IKRIGEDITOR_IKRetargetAnimInstance_generated_h
#error "IKRetargetAnimInstance.generated.h already included, missing '#pragma once' in IKRetargetAnimInstance.h"
#endif
#define IKRIGEDITOR_IKRetargetAnimInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimNode_PreviewRetargetPose *************************************
struct Z_Construct_UScriptStruct_FAnimNode_PreviewRetargetPose_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetAnimInstance_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNode_PreviewRetargetPose_Statics; \
	IKRIGEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


struct FAnimNode_PreviewRetargetPose;
// ********** End ScriptStruct FAnimNode_PreviewRetargetPose ***************************************

// ********** Begin Class UIKRetargetAnimInstance **************************************************
struct Z_Construct_UClass_UIKRetargetAnimInstance_Statics;
IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRetargetAnimInstance_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetAnimInstance_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUIKRetargetAnimInstance(); \
	friend struct ::Z_Construct_UClass_UIKRetargetAnimInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIGEDITOR_API UClass* ::Z_Construct_UClass_UIKRetargetAnimInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargetAnimInstance, UAnimPreviewInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IKRigEditor"), Z_Construct_UClass_UIKRetargetAnimInstance_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargetAnimInstance)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetAnimInstance_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIKRetargetAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKRetargetAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetAnimInstance); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargetAnimInstance(UIKRetargetAnimInstance&&) = delete; \
	UIKRetargetAnimInstance(const UIKRetargetAnimInstance&) = delete; \
	NO_API virtual ~UIKRetargetAnimInstance();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetAnimInstance_h_47_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetAnimInstance_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetAnimInstance_h_50_INCLASS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetAnimInstance_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargetAnimInstance;

// ********** End Class UIKRetargetAnimInstance ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetAnimInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
