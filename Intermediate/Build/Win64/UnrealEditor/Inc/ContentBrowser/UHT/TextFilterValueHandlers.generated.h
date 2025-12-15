// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TextFilterValueHandlers.h"

#ifdef CONTENTBROWSER_TextFilterValueHandlers_generated_h
#error "TextFilterValueHandlers.generated.h already included, missing '#pragma once' in TextFilterValueHandlers.h"
#endif
#define CONTENTBROWSER_TextFilterValueHandlers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTextFilterValueHandlers *************************************************
struct Z_Construct_UClass_UTextFilterValueHandlers_Statics;
CONTENTBROWSER_API UClass* Z_Construct_UClass_UTextFilterValueHandlers_NoRegister();

#define FID_Engine_Source_Editor_ContentBrowser_Private_TextFilterValueHandlers_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextFilterValueHandlers(); \
	friend struct ::Z_Construct_UClass_UTextFilterValueHandlers_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTENTBROWSER_API UClass* ::Z_Construct_UClass_UTextFilterValueHandlers_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextFilterValueHandlers, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ContentBrowser"), Z_Construct_UClass_UTextFilterValueHandlers_NoRegister) \
	DECLARE_SERIALIZER(UTextFilterValueHandlers) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_ContentBrowser_Private_TextFilterValueHandlers_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextFilterValueHandlers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextFilterValueHandlers(UTextFilterValueHandlers&&) = delete; \
	UTextFilterValueHandlers(const UTextFilterValueHandlers&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextFilterValueHandlers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextFilterValueHandlers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextFilterValueHandlers) \
	NO_API virtual ~UTextFilterValueHandlers();


#define FID_Engine_Source_Editor_ContentBrowser_Private_TextFilterValueHandlers_h_18_PROLOG
#define FID_Engine_Source_Editor_ContentBrowser_Private_TextFilterValueHandlers_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ContentBrowser_Private_TextFilterValueHandlers_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ContentBrowser_Private_TextFilterValueHandlers_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextFilterValueHandlers;

// ********** End Class UTextFilterValueHandlers ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ContentBrowser_Private_TextFilterValueHandlers_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
