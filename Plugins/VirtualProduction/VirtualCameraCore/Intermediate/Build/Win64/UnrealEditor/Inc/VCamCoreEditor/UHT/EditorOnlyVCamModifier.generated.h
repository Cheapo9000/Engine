// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorOnlyVCamModifier.h"

#ifdef VCAMCOREEDITOR_EditorOnlyVCamModifier_generated_h
#error "EditorOnlyVCamModifier.generated.h already included, missing '#pragma once' in EditorOnlyVCamModifier.h"
#endif
#define VCAMCOREEDITOR_EditorOnlyVCamModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorOnlyVCamModifier **************************************************
struct Z_Construct_UClass_UEditorOnlyVCamModifier_Statics;
VCAMCOREEDITOR_API UClass* Z_Construct_UClass_UEditorOnlyVCamModifier_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Public_EditorOnlyVCamModifier_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorOnlyVCamModifier(); \
	friend struct ::Z_Construct_UClass_UEditorOnlyVCamModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCOREEDITOR_API UClass* ::Z_Construct_UClass_UEditorOnlyVCamModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorOnlyVCamModifier, UVCamBlueprintModifier, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VCamCoreEditor"), Z_Construct_UClass_UEditorOnlyVCamModifier_NoRegister) \
	DECLARE_SERIALIZER(UEditorOnlyVCamModifier)


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Public_EditorOnlyVCamModifier_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorOnlyVCamModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorOnlyVCamModifier(UEditorOnlyVCamModifier&&) = delete; \
	UEditorOnlyVCamModifier(const UEditorOnlyVCamModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorOnlyVCamModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorOnlyVCamModifier); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorOnlyVCamModifier) \
	NO_API virtual ~UEditorOnlyVCamModifier();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Public_EditorOnlyVCamModifier_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Public_EditorOnlyVCamModifier_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Public_EditorOnlyVCamModifier_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Public_EditorOnlyVCamModifier_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorOnlyVCamModifier;

// ********** End Class UEditorOnlyVCamModifier ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Public_EditorOnlyVCamModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
