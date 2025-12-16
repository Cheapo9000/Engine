// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCacheComponent.h"

#ifdef GEOMETRYCACHE_GeometryCacheComponent_generated_h
#error "GeometryCacheComponent.generated.h already included, missing '#pragma once' in GeometryCacheComponent.h"
#endif
#define GEOMETRYCACHE_GeometryCacheComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGeometryCache;
struct FLinearColor;

// ********** Begin ScriptStruct FTrackRenderData **************************************************
struct Z_Construct_UScriptStruct_FTrackRenderData_Statics;
#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTrackRenderData_Statics; \
	GEOMETRYCACHE_API static class UScriptStruct* StaticStruct();


struct FTrackRenderData;
// ********** End ScriptStruct FTrackRenderData ****************************************************

// ********** Begin Class UGeometryCacheComponent **************************************************
#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_RPC_WRAPPERS \
	DECLARE_FUNCTION(execTickAtThisTime); \
	DECLARE_FUNCTION(execGetWireframeOverrideColor); \
	DECLARE_FUNCTION(execSetWireframeOverrideColor); \
	DECLARE_FUNCTION(execGetOverrideWireframeColor); \
	DECLARE_FUNCTION(execSetOverrideWireframeColor); \
	DECLARE_FUNCTION(execGetNumberOfTracks); \
	DECLARE_FUNCTION(execGetNumberOfFrames); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetPlaybackDirection); \
	DECLARE_FUNCTION(execGetElapsedTime); \
	DECLARE_FUNCTION(execGetAnimationTime); \
	DECLARE_FUNCTION(execSetStartTimeOffset); \
	DECLARE_FUNCTION(execGetStartTimeOffset); \
	DECLARE_FUNCTION(execSetGeometryCache); \
	DECLARE_FUNCTION(execSetMotionVectorScale); \
	DECLARE_FUNCTION(execGetMotionVectorScale); \
	DECLARE_FUNCTION(execSetPlaybackSpeed); \
	DECLARE_FUNCTION(execGetPlaybackSpeed); \
	DECLARE_FUNCTION(execSetExtrapolateFrames); \
	DECLARE_FUNCTION(execIsExtrapolatingFrames); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execIsPlayingReversed); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlayReversedFromEnd); \
	DECLARE_FUNCTION(execPlayReversed); \
	DECLARE_FUNCTION(execPlayFromStart); \
	DECLARE_FUNCTION(execPlay);


struct Z_Construct_UClass_UGeometryCacheComponent_Statics;
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryCacheComponent(); \
	friend struct ::Z_Construct_UClass_UGeometryCacheComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYCACHE_API UClass* ::Z_Construct_UClass_UGeometryCacheComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryCacheComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCache"), Z_Construct_UClass_UGeometryCacheComponent_NoRegister) \
	DECLARE_SERIALIZER(UGeometryCacheComponent)


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYCACHE_API UGeometryCacheComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCacheComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCACHE_API, UGeometryCacheComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCacheComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryCacheComponent(UGeometryCacheComponent&&) = delete; \
	UGeometryCacheComponent(const UGeometryCacheComponent&) = delete; \
	GEOMETRYCACHE_API virtual ~UGeometryCacheComponent();


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_36_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_INCLASS \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryCacheComponent;

// ********** End Class UGeometryCacheComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
