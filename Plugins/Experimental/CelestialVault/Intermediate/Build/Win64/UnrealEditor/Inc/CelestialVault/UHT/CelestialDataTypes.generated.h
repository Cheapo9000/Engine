// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CelestialDataTypes.h"

#ifdef CELESTIALVAULT_CelestialDataTypes_generated_h
#error "CelestialDataTypes.generated.h already included, missing '#pragma once' in CelestialDataTypes.h"
#endif
#define CELESTIALVAULT_CelestialDataTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPlanetaryBodyInputData *******************************************
struct Z_Construct_UScriptStruct_FPlanetaryBodyInputData_Statics;
#define FID_Engine_Plugins_Experimental_CelestialVault_Source_CelestialVault_Public_CelestialDataTypes_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPlanetaryBodyInputData_Statics; \
	CELESTIALVAULT_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FPlanetaryBodyInputData;
// ********** End ScriptStruct FPlanetaryBodyInputData *********************************************

// ********** Begin ScriptStruct FPlanetaryBodyInfo ************************************************
struct Z_Construct_UScriptStruct_FPlanetaryBodyInfo_Statics;
#define FID_Engine_Plugins_Experimental_CelestialVault_Source_CelestialVault_Public_CelestialDataTypes_h_74_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPlanetaryBodyInfo_Statics; \
	CELESTIALVAULT_API static class UScriptStruct* StaticStruct();


struct FPlanetaryBodyInfo;
// ********** End ScriptStruct FPlanetaryBodyInfo **************************************************

// ********** Begin ScriptStruct FSunInfo **********************************************************
struct Z_Construct_UScriptStruct_FSunInfo_Statics;
#define FID_Engine_Plugins_Experimental_CelestialVault_Source_CelestialVault_Public_CelestialDataTypes_h_148_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSunInfo_Statics; \
	CELESTIALVAULT_API static class UScriptStruct* StaticStruct();


struct FSunInfo;
// ********** End ScriptStruct FSunInfo ************************************************************

// ********** Begin ScriptStruct FStarInfo *********************************************************
struct Z_Construct_UScriptStruct_FStarInfo_Statics;
#define FID_Engine_Plugins_Experimental_CelestialVault_Source_CelestialVault_Public_CelestialDataTypes_h_185_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStarInfo_Statics; \
	CELESTIALVAULT_API static class UScriptStruct* StaticStruct();


struct FStarInfo;
// ********** End ScriptStruct FStarInfo ***********************************************************

// ********** Begin ScriptStruct FStarInputData ****************************************************
struct Z_Construct_UScriptStruct_FStarInputData_Statics;
#define FID_Engine_Plugins_Experimental_CelestialVault_Source_CelestialVault_Public_CelestialDataTypes_h_245_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStarInputData_Statics; \
	CELESTIALVAULT_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FStarInputData;
// ********** End ScriptStruct FStarInputData ******************************************************

// ********** Begin ScriptStruct FCelestialStarInputData *******************************************
struct Z_Construct_UScriptStruct_FCelestialStarInputData_Statics;
#define FID_Engine_Plugins_Experimental_CelestialVault_Source_CelestialVault_Public_CelestialDataTypes_h_280_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCelestialStarInputData_Statics; \
	CELESTIALVAULT_API static class UScriptStruct* StaticStruct(); \
	typedef FStarInputData Super;


struct FCelestialStarInputData;
// ********** End ScriptStruct FCelestialStarInputData *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CelestialVault_Source_CelestialVault_Public_CelestialDataTypes_h

// ********** Begin Enum EOrbitType ****************************************************************
#define FOREACH_ENUM_EORBITTYPE(op) \
	op(EOrbitType::Elliptic) \
	op(EOrbitType::Mercury) \
	op(EOrbitType::Venus) \
	op(EOrbitType::Earth) \
	op(EOrbitType::Mars) \
	op(EOrbitType::Jupiter) \
	op(EOrbitType::Saturn) \
	op(EOrbitType::Uranus) \
	op(EOrbitType::Neptune) \
	op(EOrbitType::Moon) 

enum class EOrbitType : uint8;
template<> struct TIsUEnumClass<EOrbitType> { enum { Value = true }; };
template<> CELESTIALVAULT_NON_ATTRIBUTED_API UEnum* StaticEnum<EOrbitType>();
// ********** End Enum EOrbitType ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
