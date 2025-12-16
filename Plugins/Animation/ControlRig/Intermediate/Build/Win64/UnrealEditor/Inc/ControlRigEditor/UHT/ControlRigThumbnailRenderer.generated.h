// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigThumbnailRenderer.h"

#ifdef CONTROLRIGEDITOR_ControlRigThumbnailRenderer_generated_h
#error "ControlRigThumbnailRenderer.generated.h already included, missing '#pragma once' in ControlRigThumbnailRenderer.h"
#endif
#define CONTROLRIGEDITOR_ControlRigThumbnailRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UControlRigThumbnailRenderer *********************************************
struct Z_Construct_UClass_UControlRigThumbnailRenderer_Statics;
CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigThumbnailRenderer_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigThumbnailRenderer_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUControlRigThumbnailRenderer(); \
	friend struct ::Z_Construct_UClass_UControlRigThumbnailRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGEDITOR_API UClass* ::Z_Construct_UClass_UControlRigThumbnailRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigThumbnailRenderer, USkeletalMeshThumbnailRenderer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), Z_Construct_UClass_UControlRigThumbnailRenderer_NoRegister) \
	DECLARE_SERIALIZER(UControlRigThumbnailRenderer)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigThumbnailRenderer_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIGEDITOR_API UControlRigThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigThumbnailRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIGEDITOR_API, UControlRigThumbnailRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigThumbnailRenderer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigThumbnailRenderer(UControlRigThumbnailRenderer&&) = delete; \
	UControlRigThumbnailRenderer(const UControlRigThumbnailRenderer&) = delete; \
	CONTROLRIGEDITOR_API virtual ~UControlRigThumbnailRenderer();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigThumbnailRenderer_h_20_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigThumbnailRenderer_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigThumbnailRenderer_h_23_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigThumbnailRenderer_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigThumbnailRenderer;

// ********** End Class UControlRigThumbnailRenderer ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigThumbnailRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
