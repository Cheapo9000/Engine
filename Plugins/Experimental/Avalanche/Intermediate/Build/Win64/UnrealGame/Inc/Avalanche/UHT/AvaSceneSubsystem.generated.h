// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaSceneSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHE_AvaSceneSubsystem_generated_h
#error "AvaSceneSubsystem.generated.h already included, missing '#pragma once' in AvaSceneSubsystem.h"
#endif
#define AVALANCHE_AvaSceneSubsystem_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_AvaSceneSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaSceneSubsystem(); \
	friend struct Z_Construct_UClass_UAvaSceneSubsystem_Statics; \
public: \
	DECLARE_CLASS(UAvaSceneSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Avalanche"), AVALANCHE_API) \
	DECLARE_SERIALIZER(UAvaSceneSubsystem)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_AvaSceneSubsystem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHE_API UAvaSceneSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaSceneSubsystem(UAvaSceneSubsystem&&); \
	UAvaSceneSubsystem(const UAvaSceneSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHE_API, UAvaSceneSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaSceneSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaSceneSubsystem) \
	AVALANCHE_API virtual ~UAvaSceneSubsystem();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_AvaSceneSubsystem_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_AvaSceneSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_AvaSceneSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_AvaSceneSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHE_API UClass* StaticClass<class UAvaSceneSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_AvaSceneSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
