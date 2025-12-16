// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCacheActor.h"

#ifdef GEOMETRYCACHE_GeometryCacheActor_generated_h
#error "GeometryCacheActor.generated.h already included, missing '#pragma once' in GeometryCacheActor.h"
#endif
#define GEOMETRYCACHE_GeometryCacheActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGeometryCacheComponent;

// ********** Begin Class AGeometryCacheActor ******************************************************
#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetGeometryCacheComponent);


struct Z_Construct_UClass_AGeometryCacheActor_Statics;
GEOMETRYCACHE_API UClass* Z_Construct_UClass_AGeometryCacheActor_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAGeometryCacheActor(); \
	friend struct ::Z_Construct_UClass_AGeometryCacheActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYCACHE_API UClass* ::Z_Construct_UClass_AGeometryCacheActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AGeometryCacheActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCache"), Z_Construct_UClass_AGeometryCacheActor_NoRegister) \
	DECLARE_SERIALIZER(AGeometryCacheActor)


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYCACHE_API AGeometryCacheActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGeometryCacheActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCACHE_API, AGeometryCacheActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeometryCacheActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGeometryCacheActor(AGeometryCacheActor&&) = delete; \
	AGeometryCacheActor(const AGeometryCacheActor&) = delete; \
	GEOMETRYCACHE_API virtual ~AGeometryCacheActor();


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_16_INCLASS \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGeometryCacheActor;

// ********** End Class AGeometryCacheActor ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
