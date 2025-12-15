// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialEditor/PreviewMaterial.h"

#ifdef UNREALED_PreviewMaterial_generated_h
#error "PreviewMaterial.generated.h already included, missing '#pragma once' in PreviewMaterial.h"
#endif
#define UNREALED_PreviewMaterial_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPreviewMaterial *********************************************************
struct Z_Construct_UClass_UPreviewMaterial_Statics;
UNREALED_API UClass* Z_Construct_UClass_UPreviewMaterial_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_PreviewMaterial_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUPreviewMaterial(); \
	friend struct ::Z_Construct_UClass_UPreviewMaterial_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UPreviewMaterial_NoRegister(); \
public: \
	DECLARE_CLASS2(UPreviewMaterial, UMaterial, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UPreviewMaterial_NoRegister) \
	DECLARE_SERIALIZER(UPreviewMaterial)


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_PreviewMaterial_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UPreviewMaterial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPreviewMaterial) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UPreviewMaterial); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPreviewMaterial); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPreviewMaterial(UPreviewMaterial&&) = delete; \
	UPreviewMaterial(const UPreviewMaterial&) = delete; \
	UNREALED_API virtual ~UPreviewMaterial();


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_PreviewMaterial_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_PreviewMaterial_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_PreviewMaterial_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_PreviewMaterial_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPreviewMaterial;

// ********** End Class UPreviewMaterial ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_PreviewMaterial_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
