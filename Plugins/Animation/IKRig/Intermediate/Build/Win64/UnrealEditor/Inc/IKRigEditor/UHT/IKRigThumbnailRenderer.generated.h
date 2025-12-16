// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigEditor/IKRigThumbnailRenderer.h"

#ifdef IKRIGEDITOR_IKRigThumbnailRenderer_generated_h
#error "IKRigThumbnailRenderer.generated.h already included, missing '#pragma once' in IKRigThumbnailRenderer.h"
#endif
#define IKRIGEDITOR_IKRigThumbnailRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UIKRigThumbnailRenderer **************************************************
struct Z_Construct_UClass_UIKRigThumbnailRenderer_Statics;
IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRigThumbnailRenderer_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigThumbnailRenderer_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRigThumbnailRenderer(); \
	friend struct ::Z_Construct_UClass_UIKRigThumbnailRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIGEDITOR_API UClass* ::Z_Construct_UClass_UIKRigThumbnailRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRigThumbnailRenderer, USkeletalMeshThumbnailRenderer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IKRigEditor"), Z_Construct_UClass_UIKRigThumbnailRenderer_NoRegister) \
	DECLARE_SERIALIZER(UIKRigThumbnailRenderer)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigThumbnailRenderer_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIGEDITOR_API UIKRigThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRigThumbnailRenderer(UIKRigThumbnailRenderer&&) = delete; \
	UIKRigThumbnailRenderer(const UIKRigThumbnailRenderer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIGEDITOR_API, UIKRigThumbnailRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRigThumbnailRenderer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRigThumbnailRenderer) \
	IKRIGEDITOR_API virtual ~UIKRigThumbnailRenderer();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigThumbnailRenderer_h_13_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigThumbnailRenderer_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigThumbnailRenderer_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigThumbnailRenderer_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRigThumbnailRenderer;

// ********** End Class UIKRigThumbnailRenderer ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigThumbnailRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
