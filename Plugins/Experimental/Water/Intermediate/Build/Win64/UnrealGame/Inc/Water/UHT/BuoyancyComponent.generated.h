// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuoyancyComponent.h"

#ifdef WATER_BuoyancyComponent_generated_h
#error "BuoyancyComponent.generated.h already included, missing '#pragma once' in BuoyancyComponent.h"
#endif
#define WATER_BuoyancyComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWaterBodyComponent;
struct FSphericalPontoon;

// ********** Begin Delegate FOnPontoonEnteredWater ************************************************
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_14_DELEGATE \
WATER_API void FOnPontoonEnteredWater_DelegateWrapper(const FMulticastScriptDelegate& OnPontoonEnteredWater, FSphericalPontoon const& Pontoon);


// ********** End Delegate FOnPontoonEnteredWater **************************************************

// ********** Begin Delegate FOnPontoonExitedWater *************************************************
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_15_DELEGATE \
WATER_API void FOnPontoonExitedWater_DelegateWrapper(const FMulticastScriptDelegate& OnPontoonExitedWater, FSphericalPontoon const& Pontoon);


// ********** End Delegate FOnPontoonExitedWater ***************************************************

// ********** Begin Class UBuoyancyComponent *******************************************************
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLastWaterSurfaceInfo); \
	DECLARE_FUNCTION(execOnPontoonExitedWater); \
	DECLARE_FUNCTION(execOnPontoonEnteredWater); \
	DECLARE_FUNCTION(execIsInWaterBody); \
	DECLARE_FUNCTION(execIsOverlappingWaterBody); \
	DECLARE_FUNCTION(execGetCurrentWaterBodyComponents);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_20_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UBuoyancyComponent, WATER_API)


struct Z_Construct_UClass_UBuoyancyComponent_Statics;
WATER_API UClass* Z_Construct_UClass_UBuoyancyComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuoyancyComponent(); \
	friend struct ::Z_Construct_UClass_UBuoyancyComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UBuoyancyComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UBuoyancyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UBuoyancyComponent_NoRegister) \
	DECLARE_SERIALIZER(UBuoyancyComponent) \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_20_ARCHIVESERIALIZER \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBuoyancyComponent(UBuoyancyComponent&&) = delete; \
	UBuoyancyComponent(const UBuoyancyComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UBuoyancyComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuoyancyComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuoyancyComponent) \
	WATER_API virtual ~UBuoyancyComponent();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBuoyancyComponent;

// ********** End Class UBuoyancyComponent *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
