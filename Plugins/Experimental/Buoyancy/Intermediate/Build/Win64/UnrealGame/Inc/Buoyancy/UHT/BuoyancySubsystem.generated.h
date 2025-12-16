// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuoyancySubsystem.h"

#ifdef BUOYANCY_BuoyancySubsystem_generated_h
#error "BuoyancySubsystem.generated.h already included, missing '#pragma once' in BuoyancySubsystem.h"
#endif
#define BUOYANCY_BuoyancySubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBuoyancySubsystem *******************************************************
#define FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancySubsystem_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsEnabled);


struct Z_Construct_UClass_UBuoyancySubsystem_Statics;
BUOYANCY_API UClass* Z_Construct_UClass_UBuoyancySubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancySubsystem_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuoyancySubsystem(); \
	friend struct ::Z_Construct_UClass_UBuoyancySubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BUOYANCY_API UClass* ::Z_Construct_UClass_UBuoyancySubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UBuoyancySubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Buoyancy"), Z_Construct_UClass_UBuoyancySubsystem_NoRegister) \
	DECLARE_SERIALIZER(UBuoyancySubsystem)


#define FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancySubsystem_h_102_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBuoyancySubsystem(UBuoyancySubsystem&&) = delete; \
	UBuoyancySubsystem(const UBuoyancySubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BUOYANCY_API, UBuoyancySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuoyancySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBuoyancySubsystem) \
	BUOYANCY_API virtual ~UBuoyancySubsystem();


#define FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancySubsystem_h_99_PROLOG
#define FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancySubsystem_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancySubsystem_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancySubsystem_h_102_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancySubsystem_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBuoyancySubsystem;

// ********** End Class UBuoyancySubsystem *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancySubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
