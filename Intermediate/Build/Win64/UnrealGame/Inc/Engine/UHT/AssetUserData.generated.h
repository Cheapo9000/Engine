// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/AssetUserData.h"

#ifdef ENGINE_AssetUserData_generated_h
#error "AssetUserData.generated.h already included, missing '#pragma once' in AssetUserData.h"
#endif
#define ENGINE_AssetUserData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetUserData ***********************************************************
struct Z_Construct_UClass_UAssetUserData_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAssetUserData(); \
	friend struct ::Z_Construct_UClass_UAssetUserData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAssetUserData_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetUserData, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAssetUserData_NoRegister) \
	DECLARE_SERIALIZER(UAssetUserData)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAssetUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetUserData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAssetUserData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetUserData); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetUserData(UAssetUserData&&) = delete; \
	UAssetUserData(const UAssetUserData&) = delete; \
	ENGINE_API virtual ~UAssetUserData();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetUserData;

// ********** End Class UAssetUserData *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
