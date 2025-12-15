// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/VolumetricCloudComponent.h"

#ifdef ENGINE_VolumetricCloudComponent_generated_h
#error "VolumetricCloudComponent.generated.h already included, missing '#pragma once' in VolumetricCloudComponent.h"
#endif
#define ENGINE_VolumetricCloudComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
struct FColor;

// ********** Begin Class UVolumetricCloudComponent ************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_30_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetVisibleInRealTimeSkyCaptures); \
	DECLARE_FUNCTION(execSetRenderInMainPass); \
	DECLARE_FUNCTION(execSetHoldout); \
	DECLARE_FUNCTION(execSetShadowReflectionSampleCountScale); \
	DECLARE_FUNCTION(execSetReflectionSampleCountScale); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execSetStopTracingTransmittanceThreshold); \
	DECLARE_FUNCTION(execSetShadowTracingDistance); \
	DECLARE_FUNCTION(execSetShadowReflectionViewSampleCountScale); \
	DECLARE_FUNCTION(execSetShadowViewSampleCountScale); \
	DECLARE_FUNCTION(execSetReflectionViewSampleCountScale); \
	DECLARE_FUNCTION(execSetViewSampleCountScale); \
	DECLARE_FUNCTION(execSetSkyLightCloudBottomOcclusion); \
	DECLARE_FUNCTION(execSetbUsePerSampleAtmosphericLightTransmittance); \
	DECLARE_FUNCTION(execSetGroundAlbedo); \
	DECLARE_FUNCTION(execSetPlanetRadius); \
	DECLARE_FUNCTION(execSetTracingMaxDistance); \
	DECLARE_FUNCTION(execSetTracingStartDistanceFromCamera); \
	DECLARE_FUNCTION(execSetTracingStartMaxDistance); \
	DECLARE_FUNCTION(execSetLayerHeight); \
	DECLARE_FUNCTION(execSetLayerBottomAltitude);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_30_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVolumetricCloudComponent, ENGINE_API)


struct Z_Construct_UClass_UVolumetricCloudComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UVolumetricCloudComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUVolumetricCloudComponent(); \
	friend struct ::Z_Construct_UClass_UVolumetricCloudComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UVolumetricCloudComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UVolumetricCloudComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UVolumetricCloudComponent_NoRegister) \
	DECLARE_SERIALIZER(UVolumetricCloudComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_30_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVolumetricCloudComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVolumetricCloudComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVolumetricCloudComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVolumetricCloudComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVolumetricCloudComponent(UVolumetricCloudComponent&&) = delete; \
	UVolumetricCloudComponent(const UVolumetricCloudComponent&) = delete;


#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_27_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_30_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_30_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVolumetricCloudComponent;

// ********** End Class UVolumetricCloudComponent **************************************************

// ********** Begin Class AVolumetricCloud *********************************************************
struct Z_Construct_UClass_AVolumetricCloud_Statics;
ENGINE_API UClass* Z_Construct_UClass_AVolumetricCloud_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_259_INCLASS \
private: \
	static void StaticRegisterNativesAVolumetricCloud(); \
	friend struct ::Z_Construct_UClass_AVolumetricCloud_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_AVolumetricCloud_NoRegister(); \
public: \
	DECLARE_CLASS2(AVolumetricCloud, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_AVolumetricCloud_NoRegister) \
	DECLARE_SERIALIZER(AVolumetricCloud)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_259_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AVolumetricCloud(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVolumetricCloud) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AVolumetricCloud); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVolumetricCloud); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVolumetricCloud(AVolumetricCloud&&) = delete; \
	AVolumetricCloud(const AVolumetricCloud&) = delete; \
	ENGINE_API virtual ~AVolumetricCloud();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_256_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_259_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_259_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_259_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVolumetricCloud;

// ********** End Class AVolumetricCloud ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h

// ********** Begin Enum EVolumetricCloudTracingMaxDistanceMode ************************************
#define FOREACH_ENUM_EVOLUMETRICCLOUDTRACINGMAXDISTANCEMODE(op) \
	op(EVolumetricCloudTracingMaxDistanceMode::DistanceFromCloudLayerEntryPoint) \
	op(EVolumetricCloudTracingMaxDistanceMode::DistanceFromPointOfView) 

enum class EVolumetricCloudTracingMaxDistanceMode : uint8;
template<> struct TIsUEnumClass<EVolumetricCloudTracingMaxDistanceMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EVolumetricCloudTracingMaxDistanceMode>();
// ********** End Enum EVolumetricCloudTracingMaxDistanceMode **************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
