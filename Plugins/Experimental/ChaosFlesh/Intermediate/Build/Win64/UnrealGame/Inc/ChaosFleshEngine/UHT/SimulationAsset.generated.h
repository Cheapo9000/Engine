// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosFlesh/SimulationAsset.h"

#ifdef CHAOSFLESHENGINE_SimulationAsset_generated_h
#error "SimulationAsset.generated.h already included, missing '#pragma once' in SimulationAsset.h"
#endif
#define CHAOSFLESHENGINE_SimulationAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USimulationAsset *********************************************************
struct Z_Construct_UClass_USimulationAsset_Statics;
CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_USimulationAsset_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_SimulationAsset_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSimulationAsset(); \
	friend struct ::Z_Construct_UClass_USimulationAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSFLESHENGINE_API UClass* ::Z_Construct_UClass_USimulationAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(USimulationAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosFleshEngine"), Z_Construct_UClass_USimulationAsset_NoRegister) \
	DECLARE_SERIALIZER(USimulationAsset)


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_SimulationAsset_h_20_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimulationAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimulationAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimulationAsset); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USimulationAsset(USimulationAsset&&) = delete; \
	USimulationAsset(const USimulationAsset&) = delete; \
	NO_API virtual ~USimulationAsset();


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_SimulationAsset_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_SimulationAsset_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_SimulationAsset_h_20_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_SimulationAsset_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USimulationAsset;

// ********** End Class USimulationAsset ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_SimulationAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
