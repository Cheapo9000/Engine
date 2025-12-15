// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/LightComponent.h"

#ifdef ENGINE_LightComponent_generated_h
#error "LightComponent.generated.h already included, missing '#pragma once' in LightComponent.h"
#endif
#define ENGINE_LightComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UTextureLightProfile;
struct FColor;
struct FLinearColor;

// ********** Begin Class ULightComponent **********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_47_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetMaxDistanceFadeRange); \
	DECLARE_FUNCTION(execSetMaxDrawDistance); \
	DECLARE_FUNCTION(execSetUseRayTracedDistanceFieldShadows); \
	DECLARE_FUNCTION(execSetLightingChannels); \
	DECLARE_FUNCTION(execSetForceCachedShadowsForMovablePrimitives); \
	DECLARE_FUNCTION(execSetDiffuseScale); \
	DECLARE_FUNCTION(execSetSpecularScale); \
	DECLARE_FUNCTION(execSetShadowSlopeBias); \
	DECLARE_FUNCTION(execSetShadowBias); \
	DECLARE_FUNCTION(execSetIESBrightnessScale); \
	DECLARE_FUNCTION(execSetUseIESBrightness); \
	DECLARE_FUNCTION(execSetIESTexture); \
	DECLARE_FUNCTION(execSetBloomTint); \
	DECLARE_FUNCTION(execSetBloomMaxBrightness); \
	DECLARE_FUNCTION(execSetBloomThreshold); \
	DECLARE_FUNCTION(execSetBloomScale); \
	DECLARE_FUNCTION(execSetEnableLightShaftBloom); \
	DECLARE_FUNCTION(execSetTransmission); \
	DECLARE_FUNCTION(execSetAffectTranslucentLighting); \
	DECLARE_FUNCTION(execSetLightFunctionDisabledBrightness); \
	DECLARE_FUNCTION(execSetLightFunctionFadeDistance); \
	DECLARE_FUNCTION(execSetLightFunctionScale); \
	DECLARE_FUNCTION(execSetLightFunctionMaterial); \
	DECLARE_FUNCTION(execSetUseTemperature); \
	DECLARE_FUNCTION(execSetTemperature); \
	DECLARE_FUNCTION(execSetLightFColor); \
	DECLARE_FUNCTION(execSetLightColor); \
	DECLARE_FUNCTION(execSetVolumetricScatteringIntensity); \
	DECLARE_FUNCTION(execSetIndirectLightingIntensity); \
	DECLARE_FUNCTION(execSetIntensity);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_47_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULightComponent, ENGINE_API)


struct Z_Construct_UClass_ULightComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_ULightComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_47_INCLASS \
private: \
	static void StaticRegisterNativesULightComponent(); \
	friend struct ::Z_Construct_UClass_ULightComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ULightComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(ULightComponent, ULightComponentBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ULightComponent_NoRegister) \
	DECLARE_SERIALIZER(ULightComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_47_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULightComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULightComponent(ULightComponent&&) = delete; \
	ULightComponent(const ULightComponent&) = delete; \
	ENGINE_API virtual ~ULightComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_44_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_47_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_47_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULightComponent;

// ********** End Class ULightComponent ************************************************************

// ********** Begin ScriptStruct FPrecomputedLightInstanceData *************************************
struct Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_561_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSceneComponentInstanceData Super;


struct FPrecomputedLightInstanceData;
// ********** End ScriptStruct FPrecomputedLightInstanceData ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
