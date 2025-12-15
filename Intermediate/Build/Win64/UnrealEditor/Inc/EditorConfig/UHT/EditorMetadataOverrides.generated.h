// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorMetadataOverrides.h"

#ifdef EDITORCONFIG_EditorMetadataOverrides_generated_h
#error "EditorMetadataOverrides.generated.h already included, missing '#pragma once' in EditorMetadataOverrides.h"
#endif
#define EDITORCONFIG_EditorMetadataOverrides_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMetadataSet ******************************************************
struct Z_Construct_UScriptStruct_FMetadataSet_Statics;
#define FID_Engine_Source_Editor_EditorConfig_Public_EditorMetadataOverrides_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetadataSet_Statics; \
	EDITORCONFIG_API static class UScriptStruct* StaticStruct();


struct FMetadataSet;
// ********** End ScriptStruct FMetadataSet ********************************************************

// ********** Begin ScriptStruct FStructMetadata ***************************************************
struct Z_Construct_UScriptStruct_FStructMetadata_Statics;
#define FID_Engine_Source_Editor_EditorConfig_Public_EditorMetadataOverrides_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStructMetadata_Statics; \
	EDITORCONFIG_API static class UScriptStruct* StaticStruct();


struct FStructMetadata;
// ********** End ScriptStruct FStructMetadata *****************************************************

// ********** Begin ScriptStruct FMetadataConfig ***************************************************
struct Z_Construct_UScriptStruct_FMetadataConfig_Statics;
#define FID_Engine_Source_Editor_EditorConfig_Public_EditorMetadataOverrides_h_65_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetadataConfig_Statics; \
	EDITORCONFIG_API static class UScriptStruct* StaticStruct();


struct FMetadataConfig;
// ********** End ScriptStruct FMetadataConfig *****************************************************

// ********** Begin Class UEditorMetadataOverrides *************************************************
struct Z_Construct_UClass_UEditorMetadataOverrides_Statics;
EDITORCONFIG_API UClass* Z_Construct_UClass_UEditorMetadataOverrides_NoRegister();

#define FID_Engine_Source_Editor_EditorConfig_Public_EditorMetadataOverrides_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorMetadataOverrides(); \
	friend struct ::Z_Construct_UClass_UEditorMetadataOverrides_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORCONFIG_API UClass* ::Z_Construct_UClass_UEditorMetadataOverrides_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorMetadataOverrides, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorConfig"), Z_Construct_UClass_UEditorMetadataOverrides_NoRegister) \
	DECLARE_SERIALIZER(UEditorMetadataOverrides)


#define FID_Engine_Source_Editor_EditorConfig_Public_EditorMetadataOverrides_h_86_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorMetadataOverrides(UEditorMetadataOverrides&&) = delete; \
	UEditorMetadataOverrides(const UEditorMetadataOverrides&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORCONFIG_API, UEditorMetadataOverrides); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorMetadataOverrides); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorMetadataOverrides)


#define FID_Engine_Source_Editor_EditorConfig_Public_EditorMetadataOverrides_h_82_PROLOG
#define FID_Engine_Source_Editor_EditorConfig_Public_EditorMetadataOverrides_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_EditorConfig_Public_EditorMetadataOverrides_h_86_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_EditorConfig_Public_EditorMetadataOverrides_h_86_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorMetadataOverrides;

// ********** End Class UEditorMetadataOverrides ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_EditorConfig_Public_EditorMetadataOverrides_h

// ********** Begin Enum EMetadataType *************************************************************
#define FOREACH_ENUM_EMETADATATYPE(op) \
	op(EMetadataType::None) \
	op(EMetadataType::Bool) \
	op(EMetadataType::Int) \
	op(EMetadataType::Float) \
	op(EMetadataType::String) 

enum class EMetadataType;
template<> struct TIsUEnumClass<EMetadataType> { enum { Value = true }; };
template<> EDITORCONFIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetadataType>();
// ********** End Enum EMetadataType ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
