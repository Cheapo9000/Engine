// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DisplayClusterWorldSubsystem.h"

#ifdef DISPLAYCLUSTER_DisplayClusterWorldSubsystem_generated_h
#error "DisplayClusterWorldSubsystem.generated.h already included, missing '#pragma once' in DisplayClusterWorldSubsystem.h"
#endif
#define DISPLAYCLUSTER_DisplayClusterWorldSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDisplayClusterWorldSubsystem ********************************************
struct Z_Construct_UClass_UDisplayClusterWorldSubsystem_Statics;
DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterWorldSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterWorldSubsystem_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDisplayClusterWorldSubsystem(); \
	friend struct ::Z_Construct_UClass_UDisplayClusterWorldSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISPLAYCLUSTER_API UClass* ::Z_Construct_UClass_UDisplayClusterWorldSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UDisplayClusterWorldSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DisplayCluster"), Z_Construct_UClass_UDisplayClusterWorldSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UDisplayClusterWorldSubsystem)


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterWorldSubsystem_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDisplayClusterWorldSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDisplayClusterWorldSubsystem(UDisplayClusterWorldSubsystem&&) = delete; \
	UDisplayClusterWorldSubsystem(const UDisplayClusterWorldSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayClusterWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayClusterWorldSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDisplayClusterWorldSubsystem) \
	NO_API virtual ~UDisplayClusterWorldSubsystem();


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterWorldSubsystem_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterWorldSubsystem_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterWorldSubsystem_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterWorldSubsystem_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDisplayClusterWorldSubsystem;

// ********** End Class UDisplayClusterWorldSubsystem **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterWorldSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
