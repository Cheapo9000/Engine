// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialEditor/DEditorStaticComponentMaskParameterValue.h"

#ifdef UNREALED_DEditorStaticComponentMaskParameterValue_generated_h
#error "DEditorStaticComponentMaskParameterValue.generated.h already included, missing '#pragma once' in DEditorStaticComponentMaskParameterValue.h"
#endif
#define UNREALED_DEditorStaticComponentMaskParameterValue_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDComponentMaskParameter ******************************************
struct Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorStaticComponentMaskParameterValue_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FDComponentMaskParameter;
// ********** End ScriptStruct FDComponentMaskParameter ********************************************

// ********** Begin Class UDEditorStaticComponentMaskParameterValue ********************************
struct Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics;
UNREALED_API UClass* Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorStaticComponentMaskParameterValue_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUDEditorStaticComponentMaskParameterValue(); \
	friend struct ::Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEditorStaticComponentMaskParameterValue, UDEditorParameterValue, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_NoRegister) \
	DECLARE_SERIALIZER(UDEditorStaticComponentMaskParameterValue)


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorStaticComponentMaskParameterValue_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UDEditorStaticComponentMaskParameterValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEditorStaticComponentMaskParameterValue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UDEditorStaticComponentMaskParameterValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEditorStaticComponentMaskParameterValue); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEditorStaticComponentMaskParameterValue(UDEditorStaticComponentMaskParameterValue&&) = delete; \
	UDEditorStaticComponentMaskParameterValue(const UDEditorStaticComponentMaskParameterValue&) = delete; \
	UNREALED_API virtual ~UDEditorStaticComponentMaskParameterValue();


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorStaticComponentMaskParameterValue_h_48_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorStaticComponentMaskParameterValue_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorStaticComponentMaskParameterValue_h_51_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorStaticComponentMaskParameterValue_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEditorStaticComponentMaskParameterValue;

// ********** End Class UDEditorStaticComponentMaskParameterValue **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorStaticComponentMaskParameterValue_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
