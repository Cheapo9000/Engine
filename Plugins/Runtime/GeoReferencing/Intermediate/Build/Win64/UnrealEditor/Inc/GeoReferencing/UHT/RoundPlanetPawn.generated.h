// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoundPlanetPawn.h"

#ifdef GEOREFERENCING_RoundPlanetPawn_generated_h
#error "RoundPlanetPawn.generated.h already included, missing '#pragma once' in RoundPlanetPawn.h"
#endif
#define GEOREFERENCING_RoundPlanetPawn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGeographicCoordinates;

// ********** Begin Class ARoundPlanetPawn *********************************************************
#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDecreaseSpeedScalar); \
	DECLARE_FUNCTION(execIncreaseSpeedScalar); \
	DECLARE_FUNCTION(execResetSpeedScalar); \
	DECLARE_FUNCTION(execInterruptFlyToLocation); \
	DECLARE_FUNCTION(execFlyToLocationLatitudeLongitudeAltitude); \
	DECLARE_FUNCTION(execFlyToLocationGeographic); \
	DECLARE_FUNCTION(execFlyToLocationECEF);


struct Z_Construct_UClass_ARoundPlanetPawn_Statics;
GEOREFERENCING_API UClass* Z_Construct_UClass_ARoundPlanetPawn_NoRegister();

#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARoundPlanetPawn(); \
	friend struct ::Z_Construct_UClass_ARoundPlanetPawn_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOREFERENCING_API UClass* ::Z_Construct_UClass_ARoundPlanetPawn_NoRegister(); \
public: \
	DECLARE_CLASS2(ARoundPlanetPawn, ADefaultPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeoReferencing"), Z_Construct_UClass_ARoundPlanetPawn_NoRegister) \
	DECLARE_SERIALIZER(ARoundPlanetPawn)


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARoundPlanetPawn(ARoundPlanetPawn&&) = delete; \
	ARoundPlanetPawn(const ARoundPlanetPawn&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoundPlanetPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoundPlanetPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARoundPlanetPawn) \
	NO_API virtual ~ARoundPlanetPawn();


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARoundPlanetPawn;

// ********** End Class ARoundPlanetPawn ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
