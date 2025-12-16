// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCacheCodecRaw.h"

#ifdef GEOMETRYCACHE_GeometryCacheCodecRaw_generated_h
#error "GeometryCacheCodecRaw.generated.h already included, missing '#pragma once' in GeometryCacheCodecRaw.h"
#endif
#define GEOMETRYCACHE_GeometryCacheCodecRaw_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGeometryCacheCodecRaw ***************************************************
struct Z_Construct_UClass_UGeometryCacheCodecRaw_Statics;
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheCodecRaw_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecRaw_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryCacheCodecRaw(); \
	friend struct ::Z_Construct_UClass_UGeometryCacheCodecRaw_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYCACHE_API UClass* ::Z_Construct_UClass_UGeometryCacheCodecRaw_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryCacheCodecRaw, UGeometryCacheCodecBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryCache"), Z_Construct_UClass_UGeometryCacheCodecRaw_NoRegister) \
	DECLARE_SERIALIZER(UGeometryCacheCodecRaw)


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecRaw_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYCACHE_API UGeometryCacheCodecRaw(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCacheCodecRaw) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCACHE_API, UGeometryCacheCodecRaw); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCacheCodecRaw); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryCacheCodecRaw(UGeometryCacheCodecRaw&&) = delete; \
	UGeometryCacheCodecRaw(const UGeometryCacheCodecRaw&) = delete; \
	GEOMETRYCACHE_API virtual ~UGeometryCacheCodecRaw();


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecRaw_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecRaw_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecRaw_h_21_INCLASS \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecRaw_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryCacheCodecRaw;

// ********** End Class UGeometryCacheCodecRaw *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecRaw_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
