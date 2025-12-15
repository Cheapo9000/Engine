// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialEditor/DEditorTextureParameterValue.h"

#ifdef UNREALED_DEditorTextureParameterValue_generated_h
#error "DEditorTextureParameterValue.generated.h already included, missing '#pragma once' in DEditorTextureParameterValue.h"
#endif
#define UNREALED_DEditorTextureParameterValue_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDEditorTextureParameterValue ********************************************
struct Z_Construct_UClass_UDEditorTextureParameterValue_Statics;
UNREALED_API UClass* Z_Construct_UClass_UDEditorTextureParameterValue_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorTextureParameterValue_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDEditorTextureParameterValue(); \
	friend struct ::Z_Construct_UClass_UDEditorTextureParameterValue_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UDEditorTextureParameterValue_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEditorTextureParameterValue, UDEditorParameterValue, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UDEditorTextureParameterValue_NoRegister) \
	DECLARE_SERIALIZER(UDEditorTextureParameterValue)


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorTextureParameterValue_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UDEditorTextureParameterValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEditorTextureParameterValue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UDEditorTextureParameterValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEditorTextureParameterValue); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEditorTextureParameterValue(UDEditorTextureParameterValue&&) = delete; \
	UDEditorTextureParameterValue(const UDEditorTextureParameterValue&) = delete; \
	UNREALED_API virtual ~UDEditorTextureParameterValue();


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorTextureParameterValue_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorTextureParameterValue_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorTextureParameterValue_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorTextureParameterValue_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEditorTextureParameterValue;

// ********** End Class UDEditorTextureParameterValue **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorTextureParameterValue_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
