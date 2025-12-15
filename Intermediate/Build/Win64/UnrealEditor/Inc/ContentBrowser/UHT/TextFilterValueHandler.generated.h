// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TextFilterValueHandler.h"

#ifdef CONTENTBROWSER_TextFilterValueHandler_generated_h
#error "TextFilterValueHandler.generated.h already included, missing '#pragma once' in TextFilterValueHandler.h"
#endif
#define CONTENTBROWSER_TextFilterValueHandler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTextFilterValueHandler **************************************************
struct Z_Construct_UClass_UTextFilterValueHandler_Statics;
CONTENTBROWSER_API UClass* Z_Construct_UClass_UTextFilterValueHandler_NoRegister();

#define FID_Engine_Source_Editor_ContentBrowser_Public_TextFilterValueHandler_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextFilterValueHandler(); \
	friend struct ::Z_Construct_UClass_UTextFilterValueHandler_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTENTBROWSER_API UClass* ::Z_Construct_UClass_UTextFilterValueHandler_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextFilterValueHandler, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ContentBrowser"), Z_Construct_UClass_UTextFilterValueHandler_NoRegister) \
	DECLARE_SERIALIZER(UTextFilterValueHandler)


#define FID_Engine_Source_Editor_ContentBrowser_Public_TextFilterValueHandler_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTENTBROWSER_API UTextFilterValueHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextFilterValueHandler(UTextFilterValueHandler&&) = delete; \
	UTextFilterValueHandler(const UTextFilterValueHandler&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTENTBROWSER_API, UTextFilterValueHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextFilterValueHandler); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextFilterValueHandler) \
	CONTENTBROWSER_API virtual ~UTextFilterValueHandler();


#define FID_Engine_Source_Editor_ContentBrowser_Public_TextFilterValueHandler_h_10_PROLOG
#define FID_Engine_Source_Editor_ContentBrowser_Public_TextFilterValueHandler_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ContentBrowser_Public_TextFilterValueHandler_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ContentBrowser_Public_TextFilterValueHandler_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextFilterValueHandler;

// ********** End Class UTextFilterValueHandler ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ContentBrowser_Public_TextFilterValueHandler_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
