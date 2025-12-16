// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReimportGroomCacheFactory.h"

#ifdef HAIRSTRANDSEDITOR_ReimportGroomCacheFactory_generated_h
#error "ReimportGroomCacheFactory.generated.h already included, missing '#pragma once' in ReimportGroomCacheFactory.h"
#endif
#define HAIRSTRANDSEDITOR_ReimportGroomCacheFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UReimportGroomCacheFactory ***********************************************
struct Z_Construct_UClass_UReimportGroomCacheFactory_Statics;
HAIRSTRANDSEDITOR_API UClass* Z_Construct_UClass_UReimportGroomCacheFactory_NoRegister();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_ReimportGroomCacheFactory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUReimportGroomCacheFactory(); \
	friend struct ::Z_Construct_UClass_UReimportGroomCacheFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIRSTRANDSEDITOR_API UClass* ::Z_Construct_UClass_UReimportGroomCacheFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UReimportGroomCacheFactory, UHairStrandsFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairStrandsEditor"), Z_Construct_UClass_UReimportGroomCacheFactory_NoRegister) \
	DECLARE_SERIALIZER(UReimportGroomCacheFactory)


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_ReimportGroomCacheFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReimportGroomCacheFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReimportGroomCacheFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReimportGroomCacheFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReimportGroomCacheFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReimportGroomCacheFactory(UReimportGroomCacheFactory&&) = delete; \
	UReimportGroomCacheFactory(const UReimportGroomCacheFactory&) = delete; \
	NO_API virtual ~UReimportGroomCacheFactory();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_ReimportGroomCacheFactory_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_ReimportGroomCacheFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_ReimportGroomCacheFactory_h_13_INCLASS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_ReimportGroomCacheFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReimportGroomCacheFactory;

// ********** End Class UReimportGroomCacheFactory *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_ReimportGroomCacheFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
