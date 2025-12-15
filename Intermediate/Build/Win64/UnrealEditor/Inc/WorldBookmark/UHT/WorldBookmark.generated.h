// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldBookmark/WorldBookmark.h"

#ifdef WORLDBOOKMARK_WorldBookmark_generated_h
#error "WorldBookmark.generated.h already included, missing '#pragma once' in WorldBookmark.h"
#endif
#define WORLDBOOKMARK_WorldBookmark_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWorldBookmarkCategory ********************************************
struct Z_Construct_UScriptStruct_FWorldBookmarkCategory_Statics;
#define FID_Engine_Source_Editor_WorldBookmark_Public_WorldBookmark_WorldBookmark_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWorldBookmarkCategory_Statics; \
	WORLDBOOKMARK_API static class UScriptStruct* StaticStruct();


struct FWorldBookmarkCategory;
// ********** End ScriptStruct FWorldBookmarkCategory **********************************************

// ********** Begin Class UWorldBookmark ***********************************************************
struct Z_Construct_UClass_UWorldBookmark_Statics;
WORLDBOOKMARK_API UClass* Z_Construct_UClass_UWorldBookmark_NoRegister();

#define FID_Engine_Source_Editor_WorldBookmark_Public_WorldBookmark_WorldBookmark_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUWorldBookmark(); \
	friend struct ::Z_Construct_UClass_UWorldBookmark_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORLDBOOKMARK_API UClass* ::Z_Construct_UClass_UWorldBookmark_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldBookmark, UBookmarkBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WorldBookmark"), Z_Construct_UClass_UWorldBookmark_NoRegister) \
	DECLARE_SERIALIZER(UWorldBookmark) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("UserWorldBookmarks");} \



#define FID_Engine_Source_Editor_WorldBookmark_Public_WorldBookmark_WorldBookmark_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WORLDBOOKMARK_API UWorldBookmark(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldBookmark) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WORLDBOOKMARK_API, UWorldBookmark); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldBookmark); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldBookmark(UWorldBookmark&&) = delete; \
	UWorldBookmark(const UWorldBookmark&) = delete; \
	WORLDBOOKMARK_API virtual ~UWorldBookmark();


#define FID_Engine_Source_Editor_WorldBookmark_Public_WorldBookmark_WorldBookmark_h_41_PROLOG
#define FID_Engine_Source_Editor_WorldBookmark_Public_WorldBookmark_WorldBookmark_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_WorldBookmark_Public_WorldBookmark_WorldBookmark_h_44_INCLASS \
	FID_Engine_Source_Editor_WorldBookmark_Public_WorldBookmark_WorldBookmark_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldBookmark;

// ********** End Class UWorldBookmark *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_WorldBookmark_Public_WorldBookmark_WorldBookmark_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
