// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCacheCodecV1.h"

#ifdef GEOMETRYCACHE_GeometryCacheCodecV1_generated_h
#error "GeometryCacheCodecV1.generated.h already included, missing '#pragma once' in GeometryCacheCodecV1.h"
#endif
#define GEOMETRYCACHE_GeometryCacheCodecV1_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGeometryCacheCodecV1 ****************************************************
struct Z_Construct_UClass_UGeometryCacheCodecV1_Statics;
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheCodecV1_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecV1_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryCacheCodecV1(); \
	friend struct ::Z_Construct_UClass_UGeometryCacheCodecV1_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYCACHE_API UClass* ::Z_Construct_UClass_UGeometryCacheCodecV1_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryCacheCodecV1, UGeometryCacheCodecBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryCache"), Z_Construct_UClass_UGeometryCacheCodecV1_NoRegister) \
	DECLARE_SERIALIZER(UGeometryCacheCodecV1)


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecV1_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYCACHE_API UGeometryCacheCodecV1(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCacheCodecV1) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCACHE_API, UGeometryCacheCodecV1); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCacheCodecV1); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryCacheCodecV1(UGeometryCacheCodecV1&&) = delete; \
	UGeometryCacheCodecV1(const UGeometryCacheCodecV1&) = delete;


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecV1_h_22_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecV1_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecV1_h_25_INCLASS \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecV1_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryCacheCodecV1;

// ********** End Class UGeometryCacheCodecV1 ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecV1_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
