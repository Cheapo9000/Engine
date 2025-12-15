// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialEditor/MaterialEditorPreviewParameters.h"

#ifdef UNREALED_MaterialEditorPreviewParameters_generated_h
#error "MaterialEditorPreviewParameters.generated.h already included, missing '#pragma once' in MaterialEditorPreviewParameters.h"
#endif
#define UNREALED_MaterialEditorPreviewParameters_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialEditorPreviewParameters *****************************************
struct Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics;
UNREALED_API UClass* Z_Construct_UClass_UMaterialEditorPreviewParameters_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorPreviewParameters_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialEditorPreviewParameters(); \
	friend struct ::Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UMaterialEditorPreviewParameters_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialEditorPreviewParameters, UMaterialEditorParameters, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UMaterialEditorPreviewParameters_NoRegister) \
	DECLARE_SERIALIZER(UMaterialEditorPreviewParameters)


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorPreviewParameters_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UMaterialEditorPreviewParameters(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialEditorPreviewParameters(UMaterialEditorPreviewParameters&&) = delete; \
	UMaterialEditorPreviewParameters(const UMaterialEditorPreviewParameters&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UMaterialEditorPreviewParameters); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialEditorPreviewParameters); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialEditorPreviewParameters) \
	UNREALED_API virtual ~UMaterialEditorPreviewParameters();


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorPreviewParameters_h_25_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorPreviewParameters_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorPreviewParameters_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorPreviewParameters_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialEditorPreviewParameters;

// ********** End Class UMaterialEditorPreviewParameters *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorPreviewParameters_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
