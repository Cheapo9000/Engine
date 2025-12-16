// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CelestialVaultDaySequenceActor.h"

#ifdef CELESTIALVAULT_CelestialVaultDaySequenceActor_generated_h
#error "CelestialVaultDaySequenceActor.generated.h already included, missing '#pragma once' in CelestialVaultDaySequenceActor.h"
#endif
#define CELESTIALVAULT_CelestialVaultDaySequenceActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOrbitType : uint8;
struct FDateTime;
struct FPlanetaryBodyInfo;
struct FStarInfo;
struct FSunInfo;

// ********** Begin Class ACelestialVaultDaySequenceActor ******************************************
#define FID_Engine_Plugins_Experimental_CelestialVault_Source_CelestialVault_Public_CelestialVaultDaySequenceActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRebuildAll); \
	DECLARE_FUNCTION(execGetPlanetaryBodyByOrbitType); \
	DECLARE_FUNCTION(execGetClosestPlanetaryBody); \
	DECLARE_FUNCTION(execGetClosestStarInfo); \
	DECLARE_FUNCTION(execSetMoonDiscAge); \
	DECLARE_FUNCTION(execGetMoonInfo); \
	DECLARE_FUNCTION(execGetSunInfo); \
	DECLARE_FUNCTION(execGetDate);


struct Z_Construct_UClass_ACelestialVaultDaySequenceActor_Statics;
CELESTIALVAULT_API UClass* Z_Construct_UClass_ACelestialVaultDaySequenceActor_NoRegister();

#define FID_Engine_Plugins_Experimental_CelestialVault_Source_CelestialVault_Public_CelestialVaultDaySequenceActor_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACelestialVaultDaySequenceActor(); \
	friend struct ::Z_Construct_UClass_ACelestialVaultDaySequenceActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CELESTIALVAULT_API UClass* ::Z_Construct_UClass_ACelestialVaultDaySequenceActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ACelestialVaultDaySequenceActor, ADaySequenceActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CelestialVault"), Z_Construct_UClass_ACelestialVaultDaySequenceActor_NoRegister) \
	DECLARE_SERIALIZER(ACelestialVaultDaySequenceActor)


#define FID_Engine_Plugins_Experimental_CelestialVault_Source_CelestialVault_Public_CelestialVaultDaySequenceActor_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACelestialVaultDaySequenceActor(ACelestialVaultDaySequenceActor&&) = delete; \
	ACelestialVaultDaySequenceActor(const ACelestialVaultDaySequenceActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACelestialVaultDaySequenceActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACelestialVaultDaySequenceActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACelestialVaultDaySequenceActor) \
	NO_API virtual ~ACelestialVaultDaySequenceActor();


#define FID_Engine_Plugins_Experimental_CelestialVault_Source_CelestialVault_Public_CelestialVaultDaySequenceActor_h_24_PROLOG
#define FID_Engine_Plugins_Experimental_CelestialVault_Source_CelestialVault_Public_CelestialVaultDaySequenceActor_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CelestialVault_Source_CelestialVault_Public_CelestialVaultDaySequenceActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CelestialVault_Source_CelestialVault_Public_CelestialVaultDaySequenceActor_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CelestialVault_Source_CelestialVault_Public_CelestialVaultDaySequenceActor_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACelestialVaultDaySequenceActor;

// ********** End Class ACelestialVaultDaySequenceActor ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CelestialVault_Source_CelestialVault_Public_CelestialVaultDaySequenceActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
