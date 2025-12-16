// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMXFixtureActor.h"

#ifdef DMXFIXTURES_DMXFixtureActor_generated_h
#error "DMXFixtureActor.generated.h already included, missing '#pragma once' in DMXFixtureActor.h"
#endif
#define DMXFIXTURES_DMXFixtureActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;

// ********** Begin Class ADMXFixtureActor *********************************************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActor_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetLightCastShadow); \
	DECLARE_FUNCTION(execSetPointlightIntensityScale); \
	DECLARE_FUNCTION(execSetSpotlightIntensityScale); \
	DECLARE_FUNCTION(execSetLightColorTemp); \
	DECLARE_FUNCTION(execSetLightDistanceMax); \
	DECLARE_FUNCTION(execSetLightIntensityMax); \
	DECLARE_FUNCTION(execUpdateSpotLightIntensity); \
	DECLARE_FUNCTION(execInitializeFixture);


struct Z_Construct_UClass_ADMXFixtureActor_Statics;
DMXFIXTURES_API UClass* Z_Construct_UClass_ADMXFixtureActor_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActor_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADMXFixtureActor(); \
	friend struct ::Z_Construct_UClass_ADMXFixtureActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXFIXTURES_API UClass* ::Z_Construct_UClass_ADMXFixtureActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ADMXFixtureActor, ADMXFixtureActorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DMXFixtures"), Z_Construct_UClass_ADMXFixtureActor_NoRegister) \
	DECLARE_SERIALIZER(ADMXFixtureActor) \
	virtual UObject* _getUObject() const override { return const_cast<ADMXFixtureActor*>(this); }


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActor_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADMXFixtureActor(ADMXFixtureActor&&) = delete; \
	ADMXFixtureActor(const ADMXFixtureActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADMXFixtureActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADMXFixtureActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADMXFixtureActor) \
	NO_API virtual ~ADMXFixtureActor();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActor_h_33_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActor_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActor_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActor_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActor_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADMXFixtureActor;

// ********** End Class ADMXFixtureActor ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActor_h

// ********** Begin Enum EDMXFixtureQualityLevel ***************************************************
#define FOREACH_ENUM_EDMXFIXTUREQUALITYLEVEL(op) \
	op(LowQuality) \
	op(MediumQuality) \
	op(HighQuality) \
	op(UltraQuality) \
	op(Custom) 

enum EDMXFixtureQualityLevel : int;
template<> DMXFIXTURES_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXFixtureQualityLevel>();
// ********** End Enum EDMXFixtureQualityLevel *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
