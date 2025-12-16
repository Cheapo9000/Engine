// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaSceneRigSubsystem.h"

#ifdef AVALANCHESCENERIG_AvaSceneRigSubsystem_generated_h
#error "AvaSceneRigSubsystem.generated.h already included, missing '#pragma once' in AvaSceneRigSubsystem.h"
#endif
#define AVALANCHESCENERIG_AvaSceneRigSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaSceneRigSubsystem ****************************************************
struct Z_Construct_UClass_UAvaSceneRigSubsystem_Statics;
AVALANCHESCENERIG_API UClass* Z_Construct_UClass_UAvaSceneRigSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSceneRig_Public_AvaSceneRigSubsystem_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaSceneRigSubsystem(); \
	friend struct ::Z_Construct_UClass_UAvaSceneRigSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHESCENERIG_API UClass* ::Z_Construct_UClass_UAvaSceneRigSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaSceneRigSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheSceneRig"), Z_Construct_UClass_UAvaSceneRigSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAvaSceneRigSubsystem)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSceneRig_Public_AvaSceneRigSubsystem_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHESCENERIG_API UAvaSceneRigSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaSceneRigSubsystem(UAvaSceneRigSubsystem&&) = delete; \
	UAvaSceneRigSubsystem(const UAvaSceneRigSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHESCENERIG_API, UAvaSceneRigSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaSceneRigSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaSceneRigSubsystem) \
	AVALANCHESCENERIG_API virtual ~UAvaSceneRigSubsystem();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSceneRig_Public_AvaSceneRigSubsystem_h_25_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSceneRig_Public_AvaSceneRigSubsystem_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSceneRig_Public_AvaSceneRigSubsystem_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSceneRig_Public_AvaSceneRigSubsystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaSceneRigSubsystem;

// ********** End Class UAvaSceneRigSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSceneRig_Public_AvaSceneRigSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
