// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/DataAsset.h"

#ifdef ENGINE_DataAsset_generated_h
#error "DataAsset.generated.h already included, missing '#pragma once' in DataAsset.h"
#endif
#define ENGINE_DataAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataAsset ***************************************************************
#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_22_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UDataAsset, ENGINE_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_22_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


struct Z_Construct_UClass_UDataAsset_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDataAsset_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUDataAsset(); \
	friend struct ::Z_Construct_UClass_UDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataAsset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UDataAsset) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_22_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataAsset); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataAsset(UDataAsset&&) = delete; \
	UDataAsset(const UDataAsset&) = delete; \
	ENGINE_API virtual ~UDataAsset();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataAsset;

// ********** End Class UDataAsset *****************************************************************

// ********** Begin Class UPrimaryDataAsset ********************************************************
struct Z_Construct_UClass_UPrimaryDataAsset_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPrimaryDataAsset(); \
	friend struct ::Z_Construct_UClass_UPrimaryDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPrimaryDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UPrimaryDataAsset, UDataAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPrimaryDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UPrimaryDataAsset)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPrimaryDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPrimaryDataAsset(UPrimaryDataAsset&&) = delete; \
	UPrimaryDataAsset(const UPrimaryDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPrimaryDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimaryDataAsset); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrimaryDataAsset) \
	ENGINE_API virtual ~UPrimaryDataAsset();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_45_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPrimaryDataAsset;

// ********** End Class UPrimaryDataAsset **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
