// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterZoneActor.h"

#ifdef WATER_WaterZoneActor_generated_h
#error "WaterZoneActor.generated.h already included, missing '#pragma once' in WaterZoneActor.h"
#endif
#define WATER_WaterZoneActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UTextureRenderTarget2DArray;

// ********** Begin Delegate FOnWaterInfoTextureArrayCreated ***************************************
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_32_DELEGATE \
WATER_API void FOnWaterInfoTextureArrayCreated_DelegateWrapper(const FMulticastScriptDelegate& OnWaterInfoTextureArrayCreated, const UTextureRenderTarget2DArray* WaterInfoTextureArray);


// ********** End Delegate FOnWaterInfoTextureArrayCreated *****************************************

// ********** Begin Class AWaterZone ***************************************************************
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_37_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetFarMeshMaterial); \
	DECLARE_FUNCTION(execGetWaterZoneIndex);


#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_37_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execForceUpdateWaterInfoTexture);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_37_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_AWaterZone_Statics;
WATER_API UClass* Z_Construct_UClass_AWaterZone_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_37_INCLASS \
private: \
	static void StaticRegisterNativesAWaterZone(); \
	friend struct ::Z_Construct_UClass_AWaterZone_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_AWaterZone_NoRegister(); \
public: \
	DECLARE_CLASS2(AWaterZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_AWaterZone_NoRegister) \
	DECLARE_SERIALIZER(AWaterZone)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API AWaterZone(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, AWaterZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterZone); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWaterZone(AWaterZone&&) = delete; \
	AWaterZone(const AWaterZone&) = delete; \
	WATER_API virtual ~AWaterZone();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_34_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_37_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_37_RPC_WRAPPERS_EOD \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_37_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWaterZone;

// ********** End Class AWaterZone *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
