// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/BookmarkBase.h"

#ifdef ENGINE_BookmarkBase_generated_h
#error "BookmarkBase.generated.h already included, missing '#pragma once' in BookmarkBase.h"
#endif
#define ENGINE_BookmarkBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBookmarkBaseJumpToSettings ***************************************
struct Z_Construct_UScriptStruct_FBookmarkBaseJumpToSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBookmarkBaseJumpToSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBookmarkBaseJumpToSettings;
// ********** End ScriptStruct FBookmarkBaseJumpToSettings *****************************************

// ********** Begin Class UBookmarkBase ************************************************************
struct Z_Construct_UClass_UBookmarkBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UBookmarkBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBookmarkBase(); \
	friend struct ::Z_Construct_UClass_UBookmarkBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UBookmarkBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UBookmarkBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UBookmarkBase_NoRegister) \
	DECLARE_SERIALIZER(UBookmarkBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBookmarkBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBookmarkBase(UBookmarkBase&&) = delete; \
	UBookmarkBase(const UBookmarkBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBookmarkBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBookmarkBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBookmarkBase) \
	ENGINE_API virtual ~UBookmarkBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h_24_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBookmarkBase;

// ********** End Class UBookmarkBase **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_BookmarkBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
