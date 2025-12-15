// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCollection/GeometryCollectionCache.h"

#ifdef GEOMETRYCOLLECTIONENGINE_GeometryCollectionCache_generated_h
#error "GeometryCollectionCache.generated.h already included, missing '#pragma once' in GeometryCollectionCache.h"
#endif
#define GEOMETRYCOLLECTIONENGINE_GeometryCollectionCache_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGeometryCollectionCache *************************************************
struct Z_Construct_UClass_UGeometryCollectionCache_Statics;
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionCache_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionCache_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryCollectionCache(); \
	friend struct ::Z_Construct_UClass_UGeometryCollectionCache_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYCOLLECTIONENGINE_API UClass* ::Z_Construct_UClass_UGeometryCollectionCache_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryCollectionCache, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryCollectionEngine"), Z_Construct_UClass_UGeometryCollectionCache_NoRegister) \
	DECLARE_SERIALIZER(UGeometryCollectionCache)


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionCache_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYCOLLECTIONENGINE_API UGeometryCollectionCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryCollectionCache(UGeometryCollectionCache&&) = delete; \
	UGeometryCollectionCache(const UGeometryCollectionCache&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCOLLECTIONENGINE_API, UGeometryCollectionCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCollectionCache); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCollectionCache) \
	GEOMETRYCOLLECTIONENGINE_API virtual ~UGeometryCollectionCache();


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionCache_h_14_PROLOG
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionCache_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionCache_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionCache_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryCollectionCache;

// ********** End Class UGeometryCollectionCache ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionCache_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
