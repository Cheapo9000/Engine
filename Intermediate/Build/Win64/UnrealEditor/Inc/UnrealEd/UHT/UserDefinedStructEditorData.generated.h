// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserDefinedStructure/UserDefinedStructEditorData.h"

#ifdef UNREALED_UserDefinedStructEditorData_generated_h
#error "UserDefinedStructEditorData.generated.h already included, missing '#pragma once' in UserDefinedStructEditorData.h"
#endif
#define UNREALED_UserDefinedStructEditorData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FStructVariableDescription ****************************************
struct Z_Construct_UScriptStruct_FStructVariableDescription_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStructVariableDescription_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FStructVariableDescription;
// ********** End ScriptStruct FStructVariableDescription ******************************************

// ********** Begin Class UUserDefinedStructEditorData *********************************************
#define FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_135_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UUserDefinedStructEditorData, UNREALED_API)


struct Z_Construct_UClass_UUserDefinedStructEditorData_Statics;
UNREALED_API UClass* Z_Construct_UClass_UUserDefinedStructEditorData_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_135_INCLASS \
private: \
	static void StaticRegisterNativesUUserDefinedStructEditorData(); \
	friend struct ::Z_Construct_UClass_UUserDefinedStructEditorData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UUserDefinedStructEditorData_NoRegister(); \
public: \
	DECLARE_CLASS2(UUserDefinedStructEditorData, UUserDefinedStructEditorDataBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UUserDefinedStructEditorData_NoRegister) \
	DECLARE_SERIALIZER(UUserDefinedStructEditorData) \
	FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_135_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_135_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UUserDefinedStructEditorData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserDefinedStructEditorData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UUserDefinedStructEditorData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserDefinedStructEditorData); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUserDefinedStructEditorData(UUserDefinedStructEditorData&&) = delete; \
	UUserDefinedStructEditorData(const UUserDefinedStructEditorData&) = delete; \
	UNREALED_API virtual ~UUserDefinedStructEditorData();


#define FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_132_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_135_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_135_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_135_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUserDefinedStructEditorData;

// ********** End Class UUserDefinedStructEditorData ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
