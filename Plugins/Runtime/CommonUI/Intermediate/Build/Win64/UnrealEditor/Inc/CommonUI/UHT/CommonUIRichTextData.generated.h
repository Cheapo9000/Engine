// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonUIRichTextData.h"

#ifdef COMMONUI_CommonUIRichTextData_generated_h
#error "CommonUIRichTextData.generated.h already included, missing '#pragma once' in CommonUIRichTextData.h"
#endif
#define COMMONUI_CommonUIRichTextData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRichTextIconData *************************************************
struct Z_Construct_UScriptStruct_FRichTextIconData_Statics;
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUIRichTextData_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRichTextIconData_Statics; \
	COMMONUI_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FRichTextIconData;
// ********** End ScriptStruct FRichTextIconData ***************************************************

// ********** Begin Class UCommonUIRichTextData ****************************************************
struct Z_Construct_UClass_UCommonUIRichTextData_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonUIRichTextData_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUIRichTextData_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonUIRichTextData(); \
	friend struct ::Z_Construct_UClass_UCommonUIRichTextData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonUIRichTextData_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonUIRichTextData, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonUIRichTextData_NoRegister) \
	DECLARE_SERIALIZER(UCommonUIRichTextData)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUIRichTextData_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonUIRichTextData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonUIRichTextData(UCommonUIRichTextData&&) = delete; \
	UCommonUIRichTextData(const UCommonUIRichTextData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonUIRichTextData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUIRichTextData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonUIRichTextData) \
	COMMONUI_API virtual ~UCommonUIRichTextData();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUIRichTextData_h_30_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUIRichTextData_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUIRichTextData_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUIRichTextData_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonUIRichTextData;

// ********** End Class UCommonUIRichTextData ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUIRichTextData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
