// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCollection/ActorFactoryGeometryCollection.h"

#ifdef GEOMETRYCOLLECTIONEDITOR_ActorFactoryGeometryCollection_generated_h
#error "ActorFactoryGeometryCollection.generated.h already included, missing '#pragma once' in ActorFactoryGeometryCollection.h"
#endif
#define GEOMETRYCOLLECTIONEDITOR_ActorFactoryGeometryCollection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryGeometryCollection ******************************************
struct Z_Construct_UClass_UActorFactoryGeometryCollection_Statics;
GEOMETRYCOLLECTIONEDITOR_API UClass* Z_Construct_UClass_UActorFactoryGeometryCollection_NoRegister();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Private_GeometryCollection_ActorFactoryGeometryCollection_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryGeometryCollection(); \
	friend struct ::Z_Construct_UClass_UActorFactoryGeometryCollection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYCOLLECTIONEDITOR_API UClass* ::Z_Construct_UClass_UActorFactoryGeometryCollection_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryGeometryCollection, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCollectionEditor"), Z_Construct_UClass_UActorFactoryGeometryCollection_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryGeometryCollection)


#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Private_GeometryCollection_ActorFactoryGeometryCollection_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYCOLLECTIONEDITOR_API UActorFactoryGeometryCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryGeometryCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCOLLECTIONEDITOR_API, UActorFactoryGeometryCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryGeometryCollection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryGeometryCollection(UActorFactoryGeometryCollection&&) = delete; \
	UActorFactoryGeometryCollection(const UActorFactoryGeometryCollection&) = delete; \
	GEOMETRYCOLLECTIONEDITOR_API virtual ~UActorFactoryGeometryCollection();


#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Private_GeometryCollection_ActorFactoryGeometryCollection_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Private_GeometryCollection_ActorFactoryGeometryCollection_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Private_GeometryCollection_ActorFactoryGeometryCollection_h_17_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Private_GeometryCollection_ActorFactoryGeometryCollection_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryGeometryCollection;

// ********** End Class UActorFactoryGeometryCollection ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Private_GeometryCollection_ActorFactoryGeometryCollection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
