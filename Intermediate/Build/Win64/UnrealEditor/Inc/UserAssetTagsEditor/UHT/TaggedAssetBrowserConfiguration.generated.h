// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Assets/TaggedAssetBrowserConfiguration.h"

#ifdef USERASSETTAGSEDITOR_TaggedAssetBrowserConfiguration_generated_h
#error "TaggedAssetBrowserConfiguration.generated.h already included, missing '#pragma once' in TaggedAssetBrowserConfiguration.h"
#endif
#define USERASSETTAGSEDITOR_TaggedAssetBrowserConfiguration_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTaggedAssetBrowserConfigurationDataBase **************************
struct Z_Construct_UScriptStruct_FTaggedAssetBrowserConfigurationDataBase_Statics;
#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Assets_TaggedAssetBrowserConfiguration_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTaggedAssetBrowserConfigurationDataBase_Statics; \
	USERASSETTAGSEDITOR_API static class UScriptStruct* StaticStruct();


struct FTaggedAssetBrowserConfigurationDataBase;
// ********** End ScriptStruct FTaggedAssetBrowserConfigurationDataBase ****************************

// ********** Begin ScriptStruct FTaggedAssetBrowserConfigurationData_Standalone *******************
struct Z_Construct_UScriptStruct_FTaggedAssetBrowserConfigurationData_Standalone_Statics;
#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Assets_TaggedAssetBrowserConfiguration_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTaggedAssetBrowserConfigurationData_Standalone_Statics; \
	USERASSETTAGSEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FTaggedAssetBrowserConfigurationDataBase Super;


struct FTaggedAssetBrowserConfigurationData_Standalone;
// ********** End ScriptStruct FTaggedAssetBrowserConfigurationData_Standalone *********************

// ********** Begin ScriptStruct FTaggedAssetBrowserConfigurationData_Extension ********************
struct Z_Construct_UScriptStruct_FTaggedAssetBrowserConfigurationData_Extension_Statics;
#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Assets_TaggedAssetBrowserConfiguration_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTaggedAssetBrowserConfigurationData_Extension_Statics; \
	USERASSETTAGSEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FTaggedAssetBrowserConfigurationDataBase Super;


struct FTaggedAssetBrowserConfigurationData_Extension;
// ********** End ScriptStruct FTaggedAssetBrowserConfigurationData_Extension **********************

// ********** Begin Class UTaggedAssetBrowserConfiguration *****************************************
struct Z_Construct_UClass_UTaggedAssetBrowserConfiguration_Statics;
USERASSETTAGSEDITOR_API UClass* Z_Construct_UClass_UTaggedAssetBrowserConfiguration_NoRegister();

#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Assets_TaggedAssetBrowserConfiguration_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTaggedAssetBrowserConfiguration(); \
	friend struct ::Z_Construct_UClass_UTaggedAssetBrowserConfiguration_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERASSETTAGSEDITOR_API UClass* ::Z_Construct_UClass_UTaggedAssetBrowserConfiguration_NoRegister(); \
public: \
	DECLARE_CLASS2(UTaggedAssetBrowserConfiguration, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserAssetTagsEditor"), Z_Construct_UClass_UTaggedAssetBrowserConfiguration_NoRegister) \
	DECLARE_SERIALIZER(UTaggedAssetBrowserConfiguration)


#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Assets_TaggedAssetBrowserConfiguration_h_47_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTaggedAssetBrowserConfiguration(UTaggedAssetBrowserConfiguration&&) = delete; \
	UTaggedAssetBrowserConfiguration(const UTaggedAssetBrowserConfiguration&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTaggedAssetBrowserConfiguration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTaggedAssetBrowserConfiguration); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTaggedAssetBrowserConfiguration) \
	NO_API virtual ~UTaggedAssetBrowserConfiguration();


#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Assets_TaggedAssetBrowserConfiguration_h_44_PROLOG
#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Assets_TaggedAssetBrowserConfiguration_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Assets_TaggedAssetBrowserConfiguration_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Assets_TaggedAssetBrowserConfiguration_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTaggedAssetBrowserConfiguration;

// ********** End Class UTaggedAssetBrowserConfiguration *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Assets_TaggedAssetBrowserConfiguration_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
