// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpatialReadinessVolumeComponent.h"

#ifdef SPATIALREADINESS_SpatialReadinessVolumeComponent_generated_h
#error "SpatialReadinessVolumeComponent.generated.h already included, missing '#pragma once' in SpatialReadinessVolumeComponent.h"
#endif
#define SPATIALREADINESS_SpatialReadinessVolumeComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USpatialReadinessVolumeComponent *****************************************
#define FID_Engine_Plugins_Experimental_SpatialReadiness_Source_SpatialReadiness_Public_SpatialReadinessVolumeComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetBounds); \
	DECLARE_FUNCTION(execSetDescription); \
	DECLARE_FUNCTION(execSetReadiness); \
	DECLARE_FUNCTION(execMarkUnready); \
	DECLARE_FUNCTION(execMarkReady); \
	DECLARE_FUNCTION(execIsReady);


struct Z_Construct_UClass_USpatialReadinessVolumeComponent_Statics;
SPATIALREADINESS_API UClass* Z_Construct_UClass_USpatialReadinessVolumeComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_SpatialReadiness_Source_SpatialReadiness_Public_SpatialReadinessVolumeComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpatialReadinessVolumeComponent(); \
	friend struct ::Z_Construct_UClass_USpatialReadinessVolumeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPATIALREADINESS_API UClass* ::Z_Construct_UClass_USpatialReadinessVolumeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USpatialReadinessVolumeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpatialReadiness"), Z_Construct_UClass_USpatialReadinessVolumeComponent_NoRegister) \
	DECLARE_SERIALIZER(USpatialReadinessVolumeComponent)


#define FID_Engine_Plugins_Experimental_SpatialReadiness_Source_SpatialReadiness_Public_SpatialReadinessVolumeComponent_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SPATIALREADINESS_API USpatialReadinessVolumeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpatialReadinessVolumeComponent(USpatialReadinessVolumeComponent&&) = delete; \
	USpatialReadinessVolumeComponent(const USpatialReadinessVolumeComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SPATIALREADINESS_API, USpatialReadinessVolumeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpatialReadinessVolumeComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpatialReadinessVolumeComponent) \
	SPATIALREADINESS_API virtual ~USpatialReadinessVolumeComponent();


#define FID_Engine_Plugins_Experimental_SpatialReadiness_Source_SpatialReadiness_Public_SpatialReadinessVolumeComponent_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_SpatialReadiness_Source_SpatialReadiness_Public_SpatialReadinessVolumeComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_SpatialReadiness_Source_SpatialReadiness_Public_SpatialReadinessVolumeComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_SpatialReadiness_Source_SpatialReadiness_Public_SpatialReadinessVolumeComponent_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_SpatialReadiness_Source_SpatialReadiness_Public_SpatialReadinessVolumeComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpatialReadinessVolumeComponent;

// ********** End Class USpatialReadinessVolumeComponent *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_SpatialReadiness_Source_SpatialReadiness_Public_SpatialReadinessVolumeComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
