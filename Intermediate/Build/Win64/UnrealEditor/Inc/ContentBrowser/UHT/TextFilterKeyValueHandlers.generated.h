// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TextFilterKeyValueHandlers.h"

#ifdef CONTENTBROWSER_TextFilterKeyValueHandlers_generated_h
#error "TextFilterKeyValueHandlers.generated.h already included, missing '#pragma once' in TextFilterKeyValueHandlers.h"
#endif
#define CONTENTBROWSER_TextFilterKeyValueHandlers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTextFilterKeyValueHandlerEntry ***********************************
struct Z_Construct_UScriptStruct_FTextFilterKeyValueHandlerEntry_Statics;
#define FID_Engine_Source_Editor_ContentBrowser_Private_TextFilterKeyValueHandlers_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTextFilterKeyValueHandlerEntry_Statics; \
	CONTENTBROWSER_API static class UScriptStruct* StaticStruct();


struct FTextFilterKeyValueHandlerEntry;
// ********** End ScriptStruct FTextFilterKeyValueHandlerEntry *************************************

// ********** Begin Class UTextFilterKeyValueHandlers **********************************************
struct Z_Construct_UClass_UTextFilterKeyValueHandlers_Statics;
CONTENTBROWSER_API UClass* Z_Construct_UClass_UTextFilterKeyValueHandlers_NoRegister();

#define FID_Engine_Source_Editor_ContentBrowser_Private_TextFilterKeyValueHandlers_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextFilterKeyValueHandlers(); \
	friend struct ::Z_Construct_UClass_UTextFilterKeyValueHandlers_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTENTBROWSER_API UClass* ::Z_Construct_UClass_UTextFilterKeyValueHandlers_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextFilterKeyValueHandlers, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ContentBrowser"), Z_Construct_UClass_UTextFilterKeyValueHandlers_NoRegister) \
	DECLARE_SERIALIZER(UTextFilterKeyValueHandlers) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_ContentBrowser_Private_TextFilterKeyValueHandlers_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextFilterKeyValueHandlers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextFilterKeyValueHandlers(UTextFilterKeyValueHandlers&&) = delete; \
	UTextFilterKeyValueHandlers(const UTextFilterKeyValueHandlers&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextFilterKeyValueHandlers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextFilterKeyValueHandlers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextFilterKeyValueHandlers) \
	NO_API virtual ~UTextFilterKeyValueHandlers();


#define FID_Engine_Source_Editor_ContentBrowser_Private_TextFilterKeyValueHandlers_h_33_PROLOG
#define FID_Engine_Source_Editor_ContentBrowser_Private_TextFilterKeyValueHandlers_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ContentBrowser_Private_TextFilterKeyValueHandlers_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ContentBrowser_Private_TextFilterKeyValueHandlers_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextFilterKeyValueHandlers;

// ********** End Class UTextFilterKeyValueHandlers ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ContentBrowser_Private_TextFilterKeyValueHandlers_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
