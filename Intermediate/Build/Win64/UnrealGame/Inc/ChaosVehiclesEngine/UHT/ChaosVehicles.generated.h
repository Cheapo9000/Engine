// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosVehicles.h"

#ifdef CHAOSVEHICLESENGINE_ChaosVehicles_generated_h
#error "ChaosVehicles.generated.h already included, missing '#pragma once' in ChaosVehicles.h"
#endif
#define CHAOSVEHICLESENGINE_ChaosVehicles_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosVehicles ***********************************************************
struct Z_Construct_UClass_UChaosVehicles_Statics;
CHAOSVEHICLESENGINE_API UClass* Z_Construct_UClass_UChaosVehicles_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesEngine_Public_ChaosVehicles_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUChaosVehicles(); \
	friend struct ::Z_Construct_UClass_UChaosVehicles_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVEHICLESENGINE_API UClass* ::Z_Construct_UClass_UChaosVehicles_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosVehicles, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosVehiclesEngine"), Z_Construct_UClass_UChaosVehicles_NoRegister) \
	DECLARE_SERIALIZER(UChaosVehicles)


#define FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesEngine_Public_ChaosVehicles_h_19_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosVehicles) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVehicles); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVehicles); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosVehicles(UChaosVehicles&&) = delete; \
	UChaosVehicles(const UChaosVehicles&) = delete; \
	NO_API virtual ~UChaosVehicles();


#define FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesEngine_Public_ChaosVehicles_h_16_PROLOG
#define FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesEngine_Public_ChaosVehicles_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesEngine_Public_ChaosVehicles_h_19_INCLASS \
	FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesEngine_Public_ChaosVehicles_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosVehicles;

// ********** End Class UChaosVehicles *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesEngine_Public_ChaosVehicles_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
