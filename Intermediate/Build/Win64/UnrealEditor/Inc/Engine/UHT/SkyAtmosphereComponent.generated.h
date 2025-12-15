// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SkyAtmosphereComponent.h"

#ifdef ENGINE_SkyAtmosphereComponent_generated_h
#error "SkyAtmosphereComponent.generated.h already included, missing '#pragma once' in SkyAtmosphereComponent.h"
#endif
#define ENGINE_SkyAtmosphereComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDirectionalLightComponent;
struct FColor;
struct FLinearColor;

// ********** Begin ScriptStruct FTentDistribution *************************************************
struct Z_Construct_UScriptStruct_FTentDistribution_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTentDistribution_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTentDistribution;
// ********** End ScriptStruct FTentDistribution ***************************************************

// ********** Begin Class USkyAtmosphereComponent **************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_49_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetAtmosphericLightToMatchIlluminanceOnGround); \
	DECLARE_FUNCTION(execGetAtmosphereTransmitanceOnGroundAtPlanetTop); \
	DECLARE_FUNCTION(execSetRenderInMainPass); \
	DECLARE_FUNCTION(execSetHoldout); \
	DECLARE_FUNCTION(execSetTransmittanceMinLightElevationAngle); \
	DECLARE_FUNCTION(execSetHeightFogContribution); \
	DECLARE_FUNCTION(execSetAerialPerspectiveStartDepth); \
	DECLARE_FUNCTION(execSetAerialPespectiveViewDistanceScale); \
	DECLARE_FUNCTION(execSetSkyAndAerialPerspectiveLuminanceFactor); \
	DECLARE_FUNCTION(execSetSkyLuminanceFactor); \
	DECLARE_FUNCTION(execSetOtherAbsorption); \
	DECLARE_FUNCTION(execSetOtherAbsorptionScale); \
	DECLARE_FUNCTION(execSetMieExponentialDistribution); \
	DECLARE_FUNCTION(execSetMieAnisotropy); \
	DECLARE_FUNCTION(execSetMieAbsorption); \
	DECLARE_FUNCTION(execSetMieAbsorptionScale); \
	DECLARE_FUNCTION(execSetMieScattering); \
	DECLARE_FUNCTION(execSetMieScatteringScale); \
	DECLARE_FUNCTION(execSetRayleighExponentialDistribution); \
	DECLARE_FUNCTION(execSetRayleighScattering); \
	DECLARE_FUNCTION(execSetRayleighScatteringScale); \
	DECLARE_FUNCTION(execSetMultiScatteringFactor); \
	DECLARE_FUNCTION(execSetAtmosphereHeight); \
	DECLARE_FUNCTION(execSetGroundAlbedo); \
	DECLARE_FUNCTION(execSetBottomRadius); \
	DECLARE_FUNCTION(execResetAtmosphereLightDirectionOverride); \
	DECLARE_FUNCTION(execGetOverridenAtmosphereLightDirection); \
	DECLARE_FUNCTION(execIsAtmosphereLightDirectionOverriden); \
	DECLARE_FUNCTION(execOverrideAtmosphereLightDirection);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_49_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USkyAtmosphereComponent, ENGINE_API)


struct Z_Construct_UClass_USkyAtmosphereComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_USkyAtmosphereComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUSkyAtmosphereComponent(); \
	friend struct ::Z_Construct_UClass_USkyAtmosphereComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USkyAtmosphereComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USkyAtmosphereComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USkyAtmosphereComponent_NoRegister) \
	DECLARE_SERIALIZER(USkyAtmosphereComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_49_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkyAtmosphereComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkyAtmosphereComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkyAtmosphereComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkyAtmosphereComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkyAtmosphereComponent(USkyAtmosphereComponent&&) = delete; \
	USkyAtmosphereComponent(const USkyAtmosphereComponent&) = delete;


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_46_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_49_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_49_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkyAtmosphereComponent;

// ********** End Class USkyAtmosphereComponent ****************************************************

// ********** Begin Class ASkyAtmosphere ***********************************************************
struct Z_Construct_UClass_ASkyAtmosphere_Statics;
ENGINE_API UClass* Z_Construct_UClass_ASkyAtmosphere_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_326_INCLASS \
private: \
	static void StaticRegisterNativesASkyAtmosphere(); \
	friend struct ::Z_Construct_UClass_ASkyAtmosphere_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ASkyAtmosphere_NoRegister(); \
public: \
	DECLARE_CLASS2(ASkyAtmosphere, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ASkyAtmosphere_NoRegister) \
	DECLARE_SERIALIZER(ASkyAtmosphere)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_326_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ASkyAtmosphere(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASkyAtmosphere) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ASkyAtmosphere); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASkyAtmosphere); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASkyAtmosphere(ASkyAtmosphere&&) = delete; \
	ASkyAtmosphere(const ASkyAtmosphere&) = delete; \
	ENGINE_API virtual ~ASkyAtmosphere();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_323_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_326_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_326_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_326_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASkyAtmosphere;

// ********** End Class ASkyAtmosphere *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h

// ********** Begin Enum ESkyAtmosphereTransformMode ***********************************************
#define FOREACH_ENUM_ESKYATMOSPHERETRANSFORMMODE(op) \
	op(ESkyAtmosphereTransformMode::PlanetTopAtAbsoluteWorldOrigin) \
	op(ESkyAtmosphereTransformMode::PlanetTopAtComponentTransform) \
	op(ESkyAtmosphereTransformMode::PlanetCenterAtComponentTransform) 

enum class ESkyAtmosphereTransformMode : uint8;
template<> struct TIsUEnumClass<ESkyAtmosphereTransformMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESkyAtmosphereTransformMode>();
// ********** End Enum ESkyAtmosphereTransformMode *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
