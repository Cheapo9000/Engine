// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactoryGeometryCache.h"

#ifdef GEOMETRYCACHEED_ActorFactoryGeometryCache_generated_h
#error "ActorFactoryGeometryCache.generated.h already included, missing '#pragma once' in ActorFactoryGeometryCache.h"
#endif
#define GEOMETRYCACHEED_ActorFactoryGeometryCache_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryGeometryCache ***********************************************
struct Z_Construct_UClass_UActorFactoryGeometryCache_Statics;
GEOMETRYCACHEED_API UClass* Z_Construct_UClass_UActorFactoryGeometryCache_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheEd_Classes_ActorFactoryGeometryCache_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryGeometryCache(); \
	friend struct ::Z_Construct_UClass_UActorFactoryGeometryCache_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYCACHEED_API UClass* ::Z_Construct_UClass_UActorFactoryGeometryCache_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryGeometryCache, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCacheEd"), Z_Construct_UClass_UActorFactoryGeometryCache_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryGeometryCache)


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheEd_Classes_ActorFactoryGeometryCache_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYCACHEED_API UActorFactoryGeometryCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryGeometryCache) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCACHEED_API, UActorFactoryGeometryCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryGeometryCache); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryGeometryCache(UActorFactoryGeometryCache&&) = delete; \
	UActorFactoryGeometryCache(const UActorFactoryGeometryCache&) = delete; \
	GEOMETRYCACHEED_API virtual ~UActorFactoryGeometryCache();


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheEd_Classes_ActorFactoryGeometryCache_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheEd_Classes_ActorFactoryGeometryCache_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheEd_Classes_ActorFactoryGeometryCache_h_15_INCLASS \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheEd_Classes_ActorFactoryGeometryCache_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryGeometryCache;

// ********** End Class UActorFactoryGeometryCache *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheEd_Classes_ActorFactoryGeometryCache_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
