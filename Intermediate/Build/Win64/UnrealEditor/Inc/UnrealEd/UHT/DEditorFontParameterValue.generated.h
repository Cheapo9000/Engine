// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialEditor/DEditorFontParameterValue.h"

#ifdef UNREALED_DEditorFontParameterValue_generated_h
#error "DEditorFontParameterValue.generated.h already included, missing '#pragma once' in DEditorFontParameterValue.h"
#endif
#define UNREALED_DEditorFontParameterValue_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDFontParameters **************************************************
struct Z_Construct_UScriptStruct_FDFontParameters_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorFontParameterValue_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDFontParameters_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FDFontParameters;
// ********** End ScriptStruct FDFontParameters ****************************************************

// ********** Begin Class UDEditorFontParameterValue ***********************************************
struct Z_Construct_UClass_UDEditorFontParameterValue_Statics;
UNREALED_API UClass* Z_Construct_UClass_UDEditorFontParameterValue_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorFontParameterValue_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUDEditorFontParameterValue(); \
	friend struct ::Z_Construct_UClass_UDEditorFontParameterValue_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UDEditorFontParameterValue_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEditorFontParameterValue, UDEditorParameterValue, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UDEditorFontParameterValue_NoRegister) \
	DECLARE_SERIALIZER(UDEditorFontParameterValue)


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorFontParameterValue_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UDEditorFontParameterValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEditorFontParameterValue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UDEditorFontParameterValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEditorFontParameterValue); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEditorFontParameterValue(UDEditorFontParameterValue&&) = delete; \
	UDEditorFontParameterValue(const UDEditorFontParameterValue&) = delete; \
	UNREALED_API virtual ~UDEditorFontParameterValue();


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorFontParameterValue_h_23_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorFontParameterValue_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorFontParameterValue_h_26_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorFontParameterValue_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEditorFontParameterValue;

// ********** End Class UDEditorFontParameterValue *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorFontParameterValue_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
