// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Slate/CheckboxStyleAsset.h"

#ifdef ENGINE_CheckboxStyleAsset_generated_h
#error "CheckboxStyleAsset.generated.h already included, missing '#pragma once' in CheckboxStyleAsset.h"
#endif
#define ENGINE_CheckboxStyleAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCheckBoxStyleAsset ******************************************************
struct Z_Construct_UClass_UCheckBoxStyleAsset_Statics;
ENGINE_API UClass* Z_Construct_UClass_UCheckBoxStyleAsset_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Slate_CheckboxStyleAsset_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCheckBoxStyleAsset(); \
	friend struct ::Z_Construct_UClass_UCheckBoxStyleAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UCheckBoxStyleAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UCheckBoxStyleAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UCheckBoxStyleAsset_NoRegister) \
	DECLARE_SERIALIZER(UCheckBoxStyleAsset)


#define FID_Engine_Source_Runtime_Engine_Classes_Slate_CheckboxStyleAsset_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCheckBoxStyleAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheckBoxStyleAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCheckBoxStyleAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckBoxStyleAsset); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCheckBoxStyleAsset(UCheckBoxStyleAsset&&) = delete; \
	UCheckBoxStyleAsset(const UCheckBoxStyleAsset&) = delete; \
	ENGINE_API virtual ~UCheckBoxStyleAsset();


#define FID_Engine_Source_Runtime_Engine_Classes_Slate_CheckboxStyleAsset_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Slate_CheckboxStyleAsset_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Slate_CheckboxStyleAsset_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Slate_CheckboxStyleAsset_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCheckBoxStyleAsset;

// ********** End Class UCheckBoxStyleAsset ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Slate_CheckboxStyleAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
