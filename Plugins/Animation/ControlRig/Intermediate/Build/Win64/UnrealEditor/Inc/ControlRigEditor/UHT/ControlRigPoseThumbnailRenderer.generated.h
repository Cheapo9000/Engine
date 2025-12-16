// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/ControlRigPoseThumbnailRenderer.h"

#ifdef CONTROLRIGEDITOR_ControlRigPoseThumbnailRenderer_generated_h
#error "ControlRigPoseThumbnailRenderer.generated.h already included, missing '#pragma once' in ControlRigPoseThumbnailRenderer.h"
#endif
#define CONTROLRIGEDITOR_ControlRigPoseThumbnailRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UControlRigPoseThumbnailRenderer *****************************************
struct Z_Construct_UClass_UControlRigPoseThumbnailRenderer_Statics;
CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigPoseThumbnailRenderer_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_ControlRigPoseThumbnailRenderer_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUControlRigPoseThumbnailRenderer(); \
	friend struct ::Z_Construct_UClass_UControlRigPoseThumbnailRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGEDITOR_API UClass* ::Z_Construct_UClass_UControlRigPoseThumbnailRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigPoseThumbnailRenderer, UDefaultSizedThumbnailRenderer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), Z_Construct_UClass_UControlRigPoseThumbnailRenderer_NoRegister) \
	DECLARE_SERIALIZER(UControlRigPoseThumbnailRenderer)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_ControlRigPoseThumbnailRenderer_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIGEDITOR_API UControlRigPoseThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigPoseThumbnailRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIGEDITOR_API, UControlRigPoseThumbnailRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigPoseThumbnailRenderer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigPoseThumbnailRenderer(UControlRigPoseThumbnailRenderer&&) = delete; \
	UControlRigPoseThumbnailRenderer(const UControlRigPoseThumbnailRenderer&) = delete; \
	CONTROLRIGEDITOR_API virtual ~UControlRigPoseThumbnailRenderer();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_ControlRigPoseThumbnailRenderer_h_19_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_ControlRigPoseThumbnailRenderer_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_ControlRigPoseThumbnailRenderer_h_22_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_ControlRigPoseThumbnailRenderer_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigPoseThumbnailRenderer;

// ********** End Class UControlRigPoseThumbnailRenderer *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_ControlRigPoseThumbnailRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
