// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContentBrowserFrontEndFilterExtension.h"

#ifdef CONTENTBROWSER_ContentBrowserFrontEndFilterExtension_generated_h
#error "ContentBrowserFrontEndFilterExtension.generated.h already included, missing '#pragma once' in ContentBrowserFrontEndFilterExtension.h"
#endif
#define CONTENTBROWSER_ContentBrowserFrontEndFilterExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UContentBrowserFrontEndFilterExtension ***********************************
struct Z_Construct_UClass_UContentBrowserFrontEndFilterExtension_Statics;
CONTENTBROWSER_API UClass* Z_Construct_UClass_UContentBrowserFrontEndFilterExtension_NoRegister();

#define FID_Engine_Source_Editor_ContentBrowser_Public_ContentBrowserFrontEndFilterExtension_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContentBrowserFrontEndFilterExtension(); \
	friend struct ::Z_Construct_UClass_UContentBrowserFrontEndFilterExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTENTBROWSER_API UClass* ::Z_Construct_UClass_UContentBrowserFrontEndFilterExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UContentBrowserFrontEndFilterExtension, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ContentBrowser"), Z_Construct_UClass_UContentBrowserFrontEndFilterExtension_NoRegister) \
	DECLARE_SERIALIZER(UContentBrowserFrontEndFilterExtension)


#define FID_Engine_Source_Editor_ContentBrowser_Public_ContentBrowserFrontEndFilterExtension_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTENTBROWSER_API UContentBrowserFrontEndFilterExtension(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UContentBrowserFrontEndFilterExtension(UContentBrowserFrontEndFilterExtension&&) = delete; \
	UContentBrowserFrontEndFilterExtension(const UContentBrowserFrontEndFilterExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTENTBROWSER_API, UContentBrowserFrontEndFilterExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentBrowserFrontEndFilterExtension); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContentBrowserFrontEndFilterExtension) \
	CONTENTBROWSER_API virtual ~UContentBrowserFrontEndFilterExtension();


#define FID_Engine_Source_Editor_ContentBrowser_Public_ContentBrowserFrontEndFilterExtension_h_12_PROLOG
#define FID_Engine_Source_Editor_ContentBrowser_Public_ContentBrowserFrontEndFilterExtension_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ContentBrowser_Public_ContentBrowserFrontEndFilterExtension_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ContentBrowser_Public_ContentBrowserFrontEndFilterExtension_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UContentBrowserFrontEndFilterExtension;

// ********** End Class UContentBrowserFrontEndFilterExtension *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ContentBrowser_Public_ContentBrowserFrontEndFilterExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
