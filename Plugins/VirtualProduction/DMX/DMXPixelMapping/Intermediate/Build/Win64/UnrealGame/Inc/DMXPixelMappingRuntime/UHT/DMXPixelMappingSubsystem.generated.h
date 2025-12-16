// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/DMXPixelMappingSubsystem.h"

#ifdef DMXPIXELMAPPINGRUNTIME_DMXPixelMappingSubsystem_generated_h
#error "DMXPixelMappingSubsystem.generated.h already included, missing '#pragma once' in DMXPixelMappingSubsystem.h"
#endif
#define DMXPIXELMAPPINGRUNTIME_DMXPixelMappingSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMXPixelMapping;
class UDMXPixelMappingFixtureGroupComponent;
class UDMXPixelMappingMatrixComponent;
class UDMXPixelMappingOutputDMXComponent;
class UDMXPixelMappingRendererComponent;
class UDMXPixelMappingSubsystem;

// ********** Begin Class UDMXPixelMappingSubsystem ************************************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMatrixComponent); \
	DECLARE_FUNCTION(execGetFixtureGroupComponent); \
	DECLARE_FUNCTION(execGetOutputDMXComponent); \
	DECLARE_FUNCTION(execGetRendererComponent); \
	DECLARE_FUNCTION(execGetDMXPixelMapping); \
	DECLARE_FUNCTION(execGetDMXPixelMappingSubsystem_Callable); \
	DECLARE_FUNCTION(execGetDMXPixelMappingSubsystem_Pure);


struct Z_Construct_UClass_UDMXPixelMappingSubsystem_Statics;
DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXPixelMappingSubsystem(); \
	friend struct ::Z_Construct_UClass_UDMXPixelMappingSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXPIXELMAPPINGRUNTIME_API UClass* ::Z_Construct_UClass_UDMXPixelMappingSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXPixelMappingSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXPixelMappingRuntime"), Z_Construct_UClass_UDMXPixelMappingSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UDMXPixelMappingSubsystem)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXPixelMappingSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXPixelMappingSubsystem(UDMXPixelMappingSubsystem&&) = delete; \
	UDMXPixelMappingSubsystem(const UDMXPixelMappingSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXPixelMappingSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXPixelMappingSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMXPixelMappingSubsystem) \
	NO_API virtual ~UDMXPixelMappingSubsystem();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXPixelMappingSubsystem;

// ********** End Class UDMXPixelMappingSubsystem **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
