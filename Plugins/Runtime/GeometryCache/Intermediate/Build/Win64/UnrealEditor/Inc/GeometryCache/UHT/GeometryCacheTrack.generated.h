// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCacheTrack.h"

#ifdef GEOMETRYCACHE_GeometryCacheTrack_generated_h
#error "GeometryCacheTrack.generated.h already included, missing '#pragma once' in GeometryCacheTrack.h"
#endif
#define GEOMETRYCACHE_GeometryCacheTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGeometryCacheTrack ******************************************************
#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrack_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UGeometryCacheTrack, GEOMETRYCACHE_API)


struct Z_Construct_UClass_UGeometryCacheTrack_Statics;
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrack_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrack_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryCacheTrack(); \
	friend struct ::Z_Construct_UClass_UGeometryCacheTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYCACHE_API UClass* ::Z_Construct_UClass_UGeometryCacheTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryCacheTrack, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryCache"), Z_Construct_UClass_UGeometryCacheTrack_NoRegister) \
	DECLARE_SERIALIZER(UGeometryCacheTrack) \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrack_h_19_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrack_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYCACHE_API UGeometryCacheTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCacheTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCACHE_API, UGeometryCacheTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCacheTrack); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryCacheTrack(UGeometryCacheTrack&&) = delete; \
	UGeometryCacheTrack(const UGeometryCacheTrack&) = delete;


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrack_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrack_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrack_h_19_INCLASS \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrack_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryCacheTrack;

// ********** End Class UGeometryCacheTrack ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
