// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCache.h"

#ifdef GEOMETRYCACHE_GeometryCache_generated_h
#error "GeometryCache.generated.h already included, missing '#pragma once' in GeometryCache.h"
#endif
#define GEOMETRYCACHE_GeometryCache_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGeometryCache ***********************************************************
#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_25_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UGeometryCache, GEOMETRYCACHE_API)


struct Z_Construct_UClass_UGeometryCache_Statics;
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCache_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryCache(); \
	friend struct ::Z_Construct_UClass_UGeometryCache_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYCACHE_API UClass* ::Z_Construct_UClass_UGeometryCache_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryCache, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryCache"), Z_Construct_UClass_UGeometryCache_NoRegister) \
	DECLARE_SERIALIZER(UGeometryCache) \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_25_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UGeometryCache*>(this); }


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYCACHE_API UGeometryCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCache) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCACHE_API, UGeometryCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCache); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryCache(UGeometryCache&&) = delete; \
	UGeometryCache(const UGeometryCache&) = delete; \
	GEOMETRYCACHE_API virtual ~UGeometryCache();


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_22_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_25_INCLASS \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryCache;

// ********** End Class UGeometryCache *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
