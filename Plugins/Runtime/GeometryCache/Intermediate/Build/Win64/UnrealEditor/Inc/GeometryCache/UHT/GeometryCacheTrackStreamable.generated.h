// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCacheTrackStreamable.h"

#ifdef GEOMETRYCACHE_GeometryCacheTrackStreamable_generated_h
#error "GeometryCacheTrackStreamable.generated.h already included, missing '#pragma once' in GeometryCacheTrackStreamable.h"
#endif
#define GEOMETRYCACHE_GeometryCacheTrackStreamable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGeometryCacheTrackStreamable ********************************************
#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackStreamable_h_97_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UGeometryCacheTrackStreamable, GEOMETRYCACHE_API)


struct Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics;
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrackStreamable_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackStreamable_h_97_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryCacheTrackStreamable(); \
	friend struct ::Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYCACHE_API UClass* ::Z_Construct_UClass_UGeometryCacheTrackStreamable_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryCacheTrackStreamable, UGeometryCacheTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryCache"), Z_Construct_UClass_UGeometryCacheTrackStreamable_NoRegister) \
	DECLARE_SERIALIZER(UGeometryCacheTrackStreamable) \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackStreamable_h_97_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackStreamable_h_97_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYCACHE_API UGeometryCacheTrackStreamable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCacheTrackStreamable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCACHE_API, UGeometryCacheTrackStreamable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCacheTrackStreamable); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryCacheTrackStreamable(UGeometryCacheTrackStreamable&&) = delete; \
	UGeometryCacheTrackStreamable(const UGeometryCacheTrackStreamable&) = delete;


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackStreamable_h_94_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackStreamable_h_97_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackStreamable_h_97_INCLASS \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackStreamable_h_97_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryCacheTrackStreamable;

// ********** End Class UGeometryCacheTrackStreamable **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackStreamable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
