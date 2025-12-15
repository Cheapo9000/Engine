// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintEditorSettings.h"

#ifdef BLUEPRINTGRAPH_BlueprintEditorSettings_generated_h
#error "BlueprintEditorSettings.generated.h already included, missing '#pragma once' in BlueprintEditorSettings.h"
#endif
#define BLUEPRINTGRAPH_BlueprintEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPerBlueprintSettings *********************************************
struct Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics;
#define FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics; \
	BLUEPRINTGRAPH_API static class UScriptStruct* StaticStruct();


struct FPerBlueprintSettings;
// ********** End ScriptStruct FPerBlueprintSettings ***********************************************

// ********** Begin ScriptStruct FAdditionalBlueprintCategory **************************************
struct Z_Construct_UScriptStruct_FAdditionalBlueprintCategory_Statics;
#define FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_80_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAdditionalBlueprintCategory_Statics; \
	BLUEPRINTGRAPH_API static class UScriptStruct* StaticStruct();


struct FAdditionalBlueprintCategory;
// ********** End ScriptStruct FAdditionalBlueprintCategory ****************************************

// ********** Begin Class UBlueprintEditorSettings *************************************************
struct Z_Construct_UClass_UBlueprintEditorSettings_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintEditorSettings_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_92_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintEditorSettings(); \
	friend struct ::Z_Construct_UClass_UBlueprintEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UBlueprintEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UBlueprintEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_92_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UBlueprintEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UBlueprintEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintEditorSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintEditorSettings(UBlueprintEditorSettings&&) = delete; \
	UBlueprintEditorSettings(const UBlueprintEditorSettings&) = delete; \
	BLUEPRINTGRAPH_API virtual ~UBlueprintEditorSettings();


#define FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_89_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_92_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_92_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_92_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintEditorSettings;

// ********** End Class UBlueprintEditorSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h

// ********** Begin Enum ESaveOnCompile ************************************************************
#define FOREACH_ENUM_ESAVEONCOMPILE(op) \
	op(SoC_Never) \
	op(SoC_SuccessOnly) \
	op(SoC_Always) 

enum ESaveOnCompile : int;
template<> BLUEPRINTGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<ESaveOnCompile>();
// ********** End Enum ESaveOnCompile **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
