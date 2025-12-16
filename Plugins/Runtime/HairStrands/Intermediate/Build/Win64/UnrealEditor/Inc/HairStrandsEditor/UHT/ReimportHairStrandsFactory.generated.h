// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReimportHairStrandsFactory.h"

#ifdef HAIRSTRANDSEDITOR_ReimportHairStrandsFactory_generated_h
#error "ReimportHairStrandsFactory.generated.h already included, missing '#pragma once' in ReimportHairStrandsFactory.h"
#endif
#define HAIRSTRANDSEDITOR_ReimportHairStrandsFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UReimportHairStrandsFactory **********************************************
struct Z_Construct_UClass_UReimportHairStrandsFactory_Statics;
HAIRSTRANDSEDITOR_API UClass* Z_Construct_UClass_UReimportHairStrandsFactory_NoRegister();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_ReimportHairStrandsFactory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUReimportHairStrandsFactory(); \
	friend struct ::Z_Construct_UClass_UReimportHairStrandsFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIRSTRANDSEDITOR_API UClass* ::Z_Construct_UClass_UReimportHairStrandsFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UReimportHairStrandsFactory, UHairStrandsFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairStrandsEditor"), Z_Construct_UClass_UReimportHairStrandsFactory_NoRegister) \
	DECLARE_SERIALIZER(UReimportHairStrandsFactory)


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_ReimportHairStrandsFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReimportHairStrandsFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReimportHairStrandsFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReimportHairStrandsFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReimportHairStrandsFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReimportHairStrandsFactory(UReimportHairStrandsFactory&&) = delete; \
	UReimportHairStrandsFactory(const UReimportHairStrandsFactory&) = delete; \
	NO_API virtual ~UReimportHairStrandsFactory();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_ReimportHairStrandsFactory_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_ReimportHairStrandsFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_ReimportHairStrandsFactory_h_13_INCLASS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_ReimportHairStrandsFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReimportHairStrandsFactory;

// ********** End Class UReimportHairStrandsFactory ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_ReimportHairStrandsFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
