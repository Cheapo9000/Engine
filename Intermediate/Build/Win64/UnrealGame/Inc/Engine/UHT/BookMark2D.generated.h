// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/BookMark2D.h"

#ifdef ENGINE_BookMark2D_generated_h
#error "BookMark2D.generated.h already included, missing '#pragma once' in BookMark2D.h"
#endif
#define ENGINE_BookMark2D_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBookmark2DJumpToSettings *****************************************
struct Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark2D_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBookmark2DJumpToSettings;
// ********** End ScriptStruct FBookmark2DJumpToSettings *******************************************

// ********** Begin Class UBookMark2D **************************************************************
struct Z_Construct_UClass_UBookMark2D_Statics;
ENGINE_API UClass* Z_Construct_UClass_UBookMark2D_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark2D_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUBookMark2D(); \
	friend struct ::Z_Construct_UClass_UBookMark2D_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UBookMark2D_NoRegister(); \
public: \
	DECLARE_CLASS2(UBookMark2D, UBookmarkBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UBookMark2D_NoRegister) \
	DECLARE_SERIALIZER(UBookMark2D)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark2D_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBookMark2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBookMark2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBookMark2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBookMark2D); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBookMark2D(UBookMark2D&&) = delete; \
	UBookMark2D(const UBookMark2D&) = delete; \
	ENGINE_API virtual ~UBookMark2D();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark2D_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark2D_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark2D_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark2D_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBookMark2D;

// ********** End Class UBookMark2D ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark2D_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
