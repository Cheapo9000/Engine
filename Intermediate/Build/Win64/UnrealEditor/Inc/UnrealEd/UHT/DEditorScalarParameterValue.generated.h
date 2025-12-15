// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialEditor/DEditorScalarParameterValue.h"

#ifdef UNREALED_DEditorScalarParameterValue_generated_h
#error "DEditorScalarParameterValue.generated.h already included, missing '#pragma once' in DEditorScalarParameterValue.h"
#endif
#define UNREALED_DEditorScalarParameterValue_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FScalarParameterAtlasData *****************************************
struct Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorScalarParameterValue_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FScalarParameterAtlasData;
// ********** End ScriptStruct FScalarParameterAtlasData *******************************************

// ********** Begin Class UDEditorScalarParameterValue *********************************************
struct Z_Construct_UClass_UDEditorScalarParameterValue_Statics;
UNREALED_API UClass* Z_Construct_UClass_UDEditorScalarParameterValue_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorScalarParameterValue_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUDEditorScalarParameterValue(); \
	friend struct ::Z_Construct_UClass_UDEditorScalarParameterValue_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UDEditorScalarParameterValue_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEditorScalarParameterValue, UDEditorParameterValue, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UDEditorScalarParameterValue_NoRegister) \
	DECLARE_SERIALIZER(UDEditorScalarParameterValue)


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorScalarParameterValue_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UDEditorScalarParameterValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEditorScalarParameterValue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UDEditorScalarParameterValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEditorScalarParameterValue); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEditorScalarParameterValue(UDEditorScalarParameterValue&&) = delete; \
	UDEditorScalarParameterValue(const UDEditorScalarParameterValue&) = delete; \
	UNREALED_API virtual ~UDEditorScalarParameterValue();


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorScalarParameterValue_h_26_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorScalarParameterValue_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorScalarParameterValue_h_29_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorScalarParameterValue_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEditorScalarParameterValue;

// ********** End Class UDEditorScalarParameterValue ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorScalarParameterValue_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
