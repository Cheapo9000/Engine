// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigThumbnailRenderer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIGEDITOR_ControlRigThumbnailRenderer_generated_h
#error "ControlRigThumbnailRenderer.generated.h already included, missing '#pragma once' in ControlRigThumbnailRenderer.h"
#endif
#define CONTROLRIGEDITOR_ControlRigThumbnailRenderer_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigThumbnailRenderer_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUControlRigThumbnailRenderer(); \
	friend struct Z_Construct_UClass_UControlRigThumbnailRenderer_Statics; \
public: \
	DECLARE_CLASS(UControlRigThumbnailRenderer, USkeletalMeshThumbnailRenderer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), CONTROLRIGEDITOR_API) \
	DECLARE_SERIALIZER(UControlRigThumbnailRenderer)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigThumbnailRenderer_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIGEDITOR_API UControlRigThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigThumbnailRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIGEDITOR_API, UControlRigThumbnailRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigThumbnailRenderer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UControlRigThumbnailRenderer(UControlRigThumbnailRenderer&&); \
	UControlRigThumbnailRenderer(const UControlRigThumbnailRenderer&); \
public: \
	CONTROLRIGEDITOR_API virtual ~UControlRigThumbnailRenderer();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigThumbnailRenderer_h_20_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigThumbnailRenderer_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigThumbnailRenderer_h_23_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigThumbnailRenderer_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIGEDITOR_API UClass* StaticClass<class UControlRigThumbnailRenderer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigThumbnailRenderer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
