// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaTransitionSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHETRANSITION_AvaTransitionSubsystem_generated_h
#error "AvaTransitionSubsystem.generated.h already included, missing '#pragma once' in AvaTransitionSubsystem.h"
#endif
#define AVALANCHETRANSITION_AvaTransitionSubsystem_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_AvaTransitionSubsystem_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaTransitionSubsystem(); \
	friend struct Z_Construct_UClass_UAvaTransitionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UAvaTransitionSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheTransition"), AVALANCHETRANSITION_API) \
	DECLARE_SERIALIZER(UAvaTransitionSubsystem)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_AvaTransitionSubsystem_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHETRANSITION_API UAvaTransitionSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaTransitionSubsystem(UAvaTransitionSubsystem&&); \
	UAvaTransitionSubsystem(const UAvaTransitionSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHETRANSITION_API, UAvaTransitionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTransitionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaTransitionSubsystem) \
	AVALANCHETRANSITION_API virtual ~UAvaTransitionSubsystem();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_AvaTransitionSubsystem_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_AvaTransitionSubsystem_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_AvaTransitionSubsystem_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_AvaTransitionSubsystem_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHETRANSITION_API UClass* StaticClass<class UAvaTransitionSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_AvaTransitionSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
