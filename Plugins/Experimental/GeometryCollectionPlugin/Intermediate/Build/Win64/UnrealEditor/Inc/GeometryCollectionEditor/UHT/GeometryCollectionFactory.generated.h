// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCollection/GeometryCollectionFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYCOLLECTIONEDITOR_GeometryCollectionFactory_generated_h
#error "GeometryCollectionFactory.generated.h already included, missing '#pragma once' in GeometryCollectionFactory.h"
#endif
#define GEOMETRYCOLLECTIONEDITOR_GeometryCollectionFactory_generated_h

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Public_GeometryCollection_GeometryCollectionFactory_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryCollectionFactory(); \
	friend struct Z_Construct_UClass_UGeometryCollectionFactory_Statics; \
public: \
	DECLARE_CLASS(UGeometryCollectionFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryCollectionEditor"), NO_API) \
	DECLARE_SERIALIZER(UGeometryCollectionFactory)


#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Public_GeometryCollection_GeometryCollectionFactory_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryCollectionFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCollectionFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryCollectionFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCollectionFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGeometryCollectionFactory(UGeometryCollectionFactory&&); \
	UGeometryCollectionFactory(const UGeometryCollectionFactory&); \
public: \
	NO_API virtual ~UGeometryCollectionFactory();


#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Public_GeometryCollection_GeometryCollectionFactory_h_23_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Public_GeometryCollection_GeometryCollectionFactory_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Public_GeometryCollection_GeometryCollectionFactory_h_26_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Public_GeometryCollection_GeometryCollectionFactory_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYCOLLECTIONEDITOR_API UClass* StaticClass<class UGeometryCollectionFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Public_GeometryCollection_GeometryCollectionFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
