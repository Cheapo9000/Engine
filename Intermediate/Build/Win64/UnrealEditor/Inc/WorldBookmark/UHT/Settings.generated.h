// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldBookmark/Browser/Settings.h"

#ifdef WORLDBOOKMARK_Settings_generated_h
#error "Settings.generated.h already included, missing '#pragma once' in Settings.h"
#endif
#define WORLDBOOKMARK_Settings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldBookmarkBrowserSettings ********************************************
struct Z_Construct_UClass_UWorldBookmarkBrowserSettings_Statics;
WORLDBOOKMARK_API UClass* Z_Construct_UClass_UWorldBookmarkBrowserSettings_NoRegister();

#define FID_Engine_Source_Editor_WorldBookmark_Private_WorldBookmark_Browser_Settings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldBookmarkBrowserSettings(); \
	friend struct ::Z_Construct_UClass_UWorldBookmarkBrowserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORLDBOOKMARK_API UClass* ::Z_Construct_UClass_UWorldBookmarkBrowserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldBookmarkBrowserSettings, UEditorConfigBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WorldBookmark"), Z_Construct_UClass_UWorldBookmarkBrowserSettings_NoRegister) \
	DECLARE_SERIALIZER(UWorldBookmarkBrowserSettings)


#define FID_Engine_Source_Editor_WorldBookmark_Private_WorldBookmark_Browser_Settings_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldBookmarkBrowserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldBookmarkBrowserSettings(UWorldBookmarkBrowserSettings&&) = delete; \
	UWorldBookmarkBrowserSettings(const UWorldBookmarkBrowserSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldBookmarkBrowserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldBookmarkBrowserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldBookmarkBrowserSettings) \
	NO_API virtual ~UWorldBookmarkBrowserSettings();


#define FID_Engine_Source_Editor_WorldBookmark_Private_WorldBookmark_Browser_Settings_h_15_PROLOG
#define FID_Engine_Source_Editor_WorldBookmark_Private_WorldBookmark_Browser_Settings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_WorldBookmark_Private_WorldBookmark_Browser_Settings_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_WorldBookmark_Private_WorldBookmark_Browser_Settings_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldBookmarkBrowserSettings;

// ********** End Class UWorldBookmarkBrowserSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_WorldBookmark_Private_WorldBookmark_Browser_Settings_h

// ********** Begin Enum EWorldBookmarkBrowserViewMode *********************************************
#define FOREACH_ENUM_EWORLDBOOKMARKBROWSERVIEWMODE(op) \
	op(EWorldBookmarkBrowserViewMode::ListView) \
	op(EWorldBookmarkBrowserViewMode::TreeView) 

enum class EWorldBookmarkBrowserViewMode : uint8;
template<> struct TIsUEnumClass<EWorldBookmarkBrowserViewMode> { enum { Value = true }; };
template<> WORLDBOOKMARK_NON_ATTRIBUTED_API UEnum* StaticEnum<EWorldBookmarkBrowserViewMode>();
// ********** End Enum EWorldBookmarkBrowserViewMode ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
