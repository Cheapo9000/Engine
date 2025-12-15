// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DetailsViewConfig.h"

#ifdef PROPERTYEDITOR_DetailsViewConfig_generated_h
#error "DetailsViewConfig.generated.h already included, missing '#pragma once' in DetailsViewConfig.h"
#endif
#define PROPERTYEDITOR_DetailsViewConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDetailsSectionSelection ******************************************
struct Z_Construct_UScriptStruct_FDetailsSectionSelection_Statics;
#define FID_Engine_Source_Editor_PropertyEditor_Private_DetailsViewConfig_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDetailsSectionSelection_Statics; \
	PROPERTYEDITOR_API static class UScriptStruct* StaticStruct();


struct FDetailsSectionSelection;
// ********** End ScriptStruct FDetailsSectionSelection ********************************************

// ********** Begin ScriptStruct FDetailsViewConfig ************************************************
struct Z_Construct_UScriptStruct_FDetailsViewConfig_Statics;
#define FID_Engine_Source_Editor_PropertyEditor_Private_DetailsViewConfig_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDetailsViewConfig_Statics; \
	PROPERTYEDITOR_API static class UScriptStruct* StaticStruct();


struct FDetailsViewConfig;
// ********** End ScriptStruct FDetailsViewConfig **************************************************

// ********** Begin Class UDetailsConfig ***********************************************************
struct Z_Construct_UClass_UDetailsConfig_Statics;
PROPERTYEDITOR_API UClass* Z_Construct_UClass_UDetailsConfig_NoRegister();

#define FID_Engine_Source_Editor_PropertyEditor_Private_DetailsViewConfig_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDetailsConfig(); \
	friend struct ::Z_Construct_UClass_UDetailsConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYEDITOR_API UClass* ::Z_Construct_UClass_UDetailsConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UDetailsConfig, UEditorConfigBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PropertyEditor"), Z_Construct_UClass_UDetailsConfig_NoRegister) \
	DECLARE_SERIALIZER(UDetailsConfig)


#define FID_Engine_Source_Editor_PropertyEditor_Private_DetailsViewConfig_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDetailsConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDetailsConfig(UDetailsConfig&&) = delete; \
	UDetailsConfig(const UDetailsConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDetailsConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDetailsConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDetailsConfig) \
	NO_API virtual ~UDetailsConfig();


#define FID_Engine_Source_Editor_PropertyEditor_Private_DetailsViewConfig_h_75_PROLOG
#define FID_Engine_Source_Editor_PropertyEditor_Private_DetailsViewConfig_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_PropertyEditor_Private_DetailsViewConfig_h_78_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_PropertyEditor_Private_DetailsViewConfig_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDetailsConfig;

// ********** End Class UDetailsConfig *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_PropertyEditor_Private_DetailsViewConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
