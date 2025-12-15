// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/BookMark.h"

#ifdef ENGINE_BookMark_generated_h
#error "BookMark.generated.h already included, missing '#pragma once' in BookMark.h"
#endif
#define ENGINE_BookMark_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBookmarkJumpToSettings *******************************************
struct Z_Construct_UScriptStruct_FBookmarkJumpToSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBookmarkJumpToSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FBookmarkBaseJumpToSettings Super;


struct FBookmarkJumpToSettings;
// ********** End ScriptStruct FBookmarkJumpToSettings *********************************************

// ********** Begin Class UBookMark ****************************************************************
struct Z_Construct_UClass_UBookMark_Statics;
ENGINE_API UClass* Z_Construct_UClass_UBookMark_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUBookMark(); \
	friend struct ::Z_Construct_UClass_UBookMark_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UBookMark_NoRegister(); \
public: \
	DECLARE_CLASS2(UBookMark, UBookmarkBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UBookMark_NoRegister) \
	DECLARE_SERIALIZER(UBookMark)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBookMark(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBookMark) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBookMark); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBookMark); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBookMark(UBookMark&&) = delete; \
	UBookMark(const UBookMark&) = delete; \
	ENGINE_API virtual ~UBookMark();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_23_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBookMark;

// ********** End Class UBookMark ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
