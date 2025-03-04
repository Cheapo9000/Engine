// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosFlesh/Asset/FleshAssetFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSFLESHEDITOR_FleshAssetFactory_generated_h
#error "FleshAssetFactory.generated.h already included, missing '#pragma once' in FleshAssetFactory.h"
#endif
#define CHAOSFLESHEDITOR_FleshAssetFactory_generated_h

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEditor_Public_ChaosFlesh_Asset_FleshAssetFactory_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUFleshAssetFactory(); \
	friend struct Z_Construct_UClass_UFleshAssetFactory_Statics; \
public: \
	DECLARE_CLASS(UFleshAssetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosFleshEditor"), NO_API) \
	DECLARE_SERIALIZER(UFleshAssetFactory)


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEditor_Public_ChaosFlesh_Asset_FleshAssetFactory_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFleshAssetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFleshAssetFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFleshAssetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFleshAssetFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFleshAssetFactory(UFleshAssetFactory&&); \
	UFleshAssetFactory(const UFleshAssetFactory&); \
public: \
	NO_API virtual ~UFleshAssetFactory();


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEditor_Public_ChaosFlesh_Asset_FleshAssetFactory_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEditor_Public_ChaosFlesh_Asset_FleshAssetFactory_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEditor_Public_ChaosFlesh_Asset_FleshAssetFactory_h_22_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEditor_Public_ChaosFlesh_Asset_FleshAssetFactory_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSFLESHEDITOR_API UClass* StaticClass<class UFleshAssetFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEditor_Public_ChaosFlesh_Asset_FleshAssetFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
