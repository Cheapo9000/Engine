// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaSceneRigSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHESCENERIG_AvaSceneRigSubsystem_generated_h
#error "AvaSceneRigSubsystem.generated.h already included, missing '#pragma once' in AvaSceneRigSubsystem.h"
#endif
#define AVALANCHESCENERIG_AvaSceneRigSubsystem_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSceneRig_Public_AvaSceneRigSubsystem_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaSceneRigSubsystem(); \
	friend struct Z_Construct_UClass_UAvaSceneRigSubsystem_Statics; \
public: \
	DECLARE_CLASS(UAvaSceneRigSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheSceneRig"), AVALANCHESCENERIG_API) \
	DECLARE_SERIALIZER(UAvaSceneRigSubsystem)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSceneRig_Public_AvaSceneRigSubsystem_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHESCENERIG_API UAvaSceneRigSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaSceneRigSubsystem(UAvaSceneRigSubsystem&&); \
	UAvaSceneRigSubsystem(const UAvaSceneRigSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHESCENERIG_API, UAvaSceneRigSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaSceneRigSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaSceneRigSubsystem) \
	AVALANCHESCENERIG_API virtual ~UAvaSceneRigSubsystem();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSceneRig_Public_AvaSceneRigSubsystem_h_25_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSceneRig_Public_AvaSceneRigSubsystem_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSceneRig_Public_AvaSceneRigSubsystem_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSceneRig_Public_AvaSceneRigSubsystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHESCENERIG_API UClass* StaticClass<class UAvaSceneRigSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSceneRig_Public_AvaSceneRigSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
