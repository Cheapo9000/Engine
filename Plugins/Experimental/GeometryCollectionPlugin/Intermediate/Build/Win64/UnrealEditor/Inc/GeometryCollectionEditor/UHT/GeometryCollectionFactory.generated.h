// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCollection/GeometryCollectionFactory.h"

#ifdef GEOMETRYCOLLECTIONEDITOR_GeometryCollectionFactory_generated_h
#error "GeometryCollectionFactory.generated.h already included, missing '#pragma once' in GeometryCollectionFactory.h"
#endif
#define GEOMETRYCOLLECTIONEDITOR_GeometryCollectionFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGeometryCollectionFactory ***********************************************
struct Z_Construct_UClass_UGeometryCollectionFactory_Statics;
GEOMETRYCOLLECTIONEDITOR_API UClass* Z_Construct_UClass_UGeometryCollectionFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Public_GeometryCollection_GeometryCollectionFactory_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryCollectionFactory(); \
	friend struct ::Z_Construct_UClass_UGeometryCollectionFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYCOLLECTIONEDITOR_API UClass* ::Z_Construct_UClass_UGeometryCollectionFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryCollectionFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryCollectionEditor"), Z_Construct_UClass_UGeometryCollectionFactory_NoRegister) \
	DECLARE_SERIALIZER(UGeometryCollectionFactory)


#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Public_GeometryCollection_GeometryCollectionFactory_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYCOLLECTIONEDITOR_API UGeometryCollectionFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCollectionFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCOLLECTIONEDITOR_API, UGeometryCollectionFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCollectionFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryCollectionFactory(UGeometryCollectionFactory&&) = delete; \
	UGeometryCollectionFactory(const UGeometryCollectionFactory&) = delete; \
	GEOMETRYCOLLECTIONEDITOR_API virtual ~UGeometryCollectionFactory();


#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Public_GeometryCollection_GeometryCollectionFactory_h_25_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Public_GeometryCollection_GeometryCollectionFactory_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Public_GeometryCollection_GeometryCollectionFactory_h_28_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Public_GeometryCollection_GeometryCollectionFactory_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryCollectionFactory;

// ********** End Class UGeometryCollectionFactory *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Public_GeometryCollection_GeometryCollectionFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
