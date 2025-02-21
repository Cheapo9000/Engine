// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuoyancySubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUOYANCY_BuoyancySubsystem_generated_h
#error "BuoyancySubsystem.generated.h already included, missing '#pragma once' in BuoyancySubsystem.h"
#endif
#define BUOYANCY_BuoyancySubsystem_generated_h

#define FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancySubsystem_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsEnabled);


#define FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancySubsystem_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuoyancySubsystem(); \
	friend struct Z_Construct_UClass_UBuoyancySubsystem_Statics; \
public: \
	DECLARE_CLASS(UBuoyancySubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Buoyancy"), NO_API) \
	DECLARE_SERIALIZER(UBuoyancySubsystem)


#define FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancySubsystem_h_84_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBuoyancySubsystem(UBuoyancySubsystem&&); \
	UBuoyancySubsystem(const UBuoyancySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuoyancySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuoyancySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBuoyancySubsystem) \
	NO_API virtual ~UBuoyancySubsystem();


#define FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancySubsystem_h_81_PROLOG
#define FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancySubsystem_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancySubsystem_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancySubsystem_h_84_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancySubsystem_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUOYANCY_API UClass* StaticClass<class UBuoyancySubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancySubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
