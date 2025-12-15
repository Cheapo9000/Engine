// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialEditor/DEditorVectorParameterValue.h"

#ifdef UNREALED_DEditorVectorParameterValue_generated_h
#error "DEditorVectorParameterValue.generated.h already included, missing '#pragma once' in DEditorVectorParameterValue.h"
#endif
#define UNREALED_DEditorVectorParameterValue_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDEditorVectorParameterValue *********************************************
struct Z_Construct_UClass_UDEditorVectorParameterValue_Statics;
UNREALED_API UClass* Z_Construct_UClass_UDEditorVectorParameterValue_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorVectorParameterValue_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDEditorVectorParameterValue(); \
	friend struct ::Z_Construct_UClass_UDEditorVectorParameterValue_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UDEditorVectorParameterValue_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEditorVectorParameterValue, UDEditorParameterValue, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UDEditorVectorParameterValue_NoRegister) \
	DECLARE_SERIALIZER(UDEditorVectorParameterValue)


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorVectorParameterValue_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UDEditorVectorParameterValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEditorVectorParameterValue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UDEditorVectorParameterValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEditorVectorParameterValue); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEditorVectorParameterValue(UDEditorVectorParameterValue&&) = delete; \
	UDEditorVectorParameterValue(const UDEditorVectorParameterValue&) = delete; \
	UNREALED_API virtual ~UDEditorVectorParameterValue();


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorVectorParameterValue_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorVectorParameterValue_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorVectorParameterValue_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorVectorParameterValue_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEditorVectorParameterValue;

// ********** End Class UDEditorVectorParameterValue ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorVectorParameterValue_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
