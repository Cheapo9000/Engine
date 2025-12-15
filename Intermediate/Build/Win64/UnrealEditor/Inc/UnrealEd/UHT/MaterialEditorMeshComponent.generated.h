// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialEditor/MaterialEditorMeshComponent.h"

#ifdef UNREALED_MaterialEditorMeshComponent_generated_h
#error "MaterialEditorMeshComponent.generated.h already included, missing '#pragma once' in MaterialEditorMeshComponent.h"
#endif
#define UNREALED_MaterialEditorMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialEditorMeshComponent *********************************************
struct Z_Construct_UClass_UMaterialEditorMeshComponent_Statics;
UNREALED_API UClass* Z_Construct_UClass_UMaterialEditorMeshComponent_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialEditorMeshComponent(); \
	friend struct ::Z_Construct_UClass_UMaterialEditorMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UMaterialEditorMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialEditorMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UMaterialEditorMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UMaterialEditorMeshComponent)


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UMaterialEditorMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialEditorMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UMaterialEditorMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialEditorMeshComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialEditorMeshComponent(UMaterialEditorMeshComponent&&) = delete; \
	UMaterialEditorMeshComponent(const UMaterialEditorMeshComponent&) = delete; \
	UNREALED_API virtual ~UMaterialEditorMeshComponent();


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialEditorMeshComponent;

// ********** End Class UMaterialEditorMeshComponent ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
