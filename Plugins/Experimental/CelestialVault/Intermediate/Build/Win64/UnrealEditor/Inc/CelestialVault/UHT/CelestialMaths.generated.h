// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CelestialMaths.h"

#ifdef CELESTIALVAULT_CelestialMaths_generated_h
#error "CelestialMaths.generated.h already included, missing '#pragma once' in CelestialMaths.h"
#endif
#define CELESTIALVAULT_CelestialMaths_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateTime;
struct FLinearColor;
struct FPlanetaryBodyInfo;
struct FPlanetaryBodyInputData;
struct FStarInfo;
struct FSunInfo;

// ********** Begin Class UCelestialMaths **********************************************************
#define FID_Engine_Plugins_Experimental_CelestialVault_Source_CelestialVault_Public_CelestialMaths_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConv_DMSToString); \
	DECLARE_FUNCTION(execConv_HMSToString); \
	DECLARE_FUNCTION(execConv_DeclinationToString); \
	DECLARE_FUNCTION(execConv_RightAscensionToString); \
	DECLARE_FUNCTION(execConv_SunInfoToString); \
	DECLARE_FUNCTION(execConv_PlanetaryBodyInfoToString); \
	DECLARE_FUNCTION(execConv_StarInfoToString); \
	DECLARE_FUNCTION(execGetPreciseVectorString); \
	DECLARE_FUNCTION(execRADECToXYZ_RH); \
	DECLARE_FUNCTION(execXYZToRADEC_RH); \
	DECLARE_FUNCTION(execMetersToAstronomicalUnits); \
	DECLARE_FUNCTION(execAstronomicalUnitsToMeters); \
	DECLARE_FUNCTION(execGetSpeedOfLight); \
	DECLARE_FUNCTION(execGetSunInformation); \
	DECLARE_FUNCTION(execGetPlanetCenterTransform); \
	DECLARE_FUNCTION(execNutation2000BTruncated); \
	DECLARE_FUNCTION(execEquationOfTheEquinoxes); \
	DECLARE_FUNCTION(execGetObserverGeocentricLocationAU); \
	DECLARE_FUNCTION(execGeodeticLatLonToECEFXYZAU); \
	DECLARE_FUNCTION(execGetEarthRotationAngle); \
	DECLARE_FUNCTION(execDegreesToDMS); \
	DECLARE_FUNCTION(execDegreesToHMS); \
	DECLARE_FUNCTION(execModPositive); \
	DECLARE_FUNCTION(execDegreesToArcseconds); \
	DECLARE_FUNCTION(execArcsecondsToRadians); \
	DECLARE_FUNCTION(execArcsecondsToDegrees); \
	DECLARE_FUNCTION(execDaysToSeconds); \
	DECLARE_FUNCTION(execSecondsToDay); \
	DECLARE_FUNCTION(execJulianDateToInternationalAtomicTime); \
	DECLARE_FUNCTION(execInternationalAtomicTimeToTerrestrialTime); \
	DECLARE_FUNCTION(execGetLeapSeconds); \
	DECLARE_FUNCTION(execJulianDateToJulianCenturies); \
	DECLARE_FUNCTION(execJulianDateToGreenwichApparentSiderealTime); \
	DECLARE_FUNCTION(execLocalSideralTime); \
	DECLARE_FUNCTION(execJulianDateToGreenwichMeanSiderealTime); \
	DECLARE_FUNCTION(execDateTimeToGreenwichMeanSiderealTime); \
	DECLARE_FUNCTION(execJulianDateToUTCDateTime); \
	DECLARE_FUNCTION(execUTCDateTimeToJulianDate); \
	DECLARE_FUNCTION(execUTCTimeToLocalTime); \
	DECLARE_FUNCTION(execLocalTimeToUTCTime); \
	DECLARE_FUNCTION(execGetIlluminationPercentage); \
	DECLARE_FUNCTION(execGetMoonNormalizedAgeSimple); \
	DECLARE_FUNCTION(execGetPlanetaryBodyMagnitude); \
	DECLARE_FUNCTION(execGetBodyCelestialCoordinatesAU); \
	DECLARE_FUNCTION(execGetBodyLocation_FK5J2000_AU_Relativistic); \
	DECLARE_FUNCTION(execGetBodyLocation_FK5J2000_AU); \
	DECLARE_FUNCTION(execBVtoLinearColor);


struct Z_Construct_UClass_UCelestialMaths_Statics;
CELESTIALVAULT_API UClass* Z_Construct_UClass_UCelestialMaths_NoRegister();

#define FID_Engine_Plugins_Experimental_CelestialVault_Source_CelestialVault_Public_CelestialMaths_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCelestialMaths(); \
	friend struct ::Z_Construct_UClass_UCelestialMaths_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CELESTIALVAULT_API UClass* ::Z_Construct_UClass_UCelestialMaths_NoRegister(); \
public: \
	DECLARE_CLASS2(UCelestialMaths, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CelestialVault"), Z_Construct_UClass_UCelestialMaths_NoRegister) \
	DECLARE_SERIALIZER(UCelestialMaths)


#define FID_Engine_Plugins_Experimental_CelestialVault_Source_CelestialVault_Public_CelestialMaths_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCelestialMaths(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCelestialMaths(UCelestialMaths&&) = delete; \
	UCelestialMaths(const UCelestialMaths&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCelestialMaths); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCelestialMaths); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCelestialMaths) \
	NO_API virtual ~UCelestialMaths();


#define FID_Engine_Plugins_Experimental_CelestialVault_Source_CelestialVault_Public_CelestialMaths_h_26_PROLOG
#define FID_Engine_Plugins_Experimental_CelestialVault_Source_CelestialVault_Public_CelestialMaths_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CelestialVault_Source_CelestialVault_Public_CelestialMaths_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CelestialVault_Source_CelestialVault_Public_CelestialMaths_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CelestialVault_Source_CelestialVault_Public_CelestialMaths_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCelestialMaths;

// ********** End Class UCelestialMaths ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CelestialVault_Source_CelestialVault_Public_CelestialMaths_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
