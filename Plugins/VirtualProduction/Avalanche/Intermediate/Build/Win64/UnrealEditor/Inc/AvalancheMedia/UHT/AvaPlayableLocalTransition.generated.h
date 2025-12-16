// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Playable/Transition/AvaPlayableLocalTransition.h"

#ifdef AVALANCHEMEDIA_AvaPlayableLocalTransition_generated_h
#error "AvaPlayableLocalTransition.generated.h already included, missing '#pragma once' in AvaPlayableLocalTransition.h"
#endif
#define AVALANCHEMEDIA_AvaPlayableLocalTransition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaPlayableLocalTransition **********************************************
struct Z_Construct_UClass_UAvaPlayableLocalTransition_Statics;
AVALANCHEMEDIA_API UClass* Z_Construct_UClass_UAvaPlayableLocalTransition_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playable_Transition_AvaPlayableLocalTransition_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaPlayableLocalTransition(); \
	friend struct ::Z_Construct_UClass_UAvaPlayableLocalTransition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMEDIA_API UClass* ::Z_Construct_UClass_UAvaPlayableLocalTransition_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaPlayableLocalTransition, UAvaPlayableTransition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), Z_Construct_UClass_UAvaPlayableLocalTransition_NoRegister) \
	DECLARE_SERIALIZER(UAvaPlayableLocalTransition)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playable_Transition_AvaPlayableLocalTransition_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaPlayableLocalTransition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaPlayableLocalTransition(UAvaPlayableLocalTransition&&) = delete; \
	UAvaPlayableLocalTransition(const UAvaPlayableLocalTransition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaPlayableLocalTransition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPlayableLocalTransition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaPlayableLocalTransition) \
	NO_API virtual ~UAvaPlayableLocalTransition();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playable_Transition_AvaPlayableLocalTransition_h_20_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playable_Transition_AvaPlayableLocalTransition_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playable_Transition_AvaPlayableLocalTransition_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playable_Transition_AvaPlayableLocalTransition_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaPlayableLocalTransition;

// ********** End Class UAvaPlayableLocalTransition ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playable_Transition_AvaPlayableLocalTransition_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
