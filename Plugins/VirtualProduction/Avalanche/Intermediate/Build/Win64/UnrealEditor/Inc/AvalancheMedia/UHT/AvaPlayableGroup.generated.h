// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Playable/AvaPlayableGroup.h"

#ifdef AVALANCHEMEDIA_AvaPlayableGroup_generated_h
#error "AvaPlayableGroup.generated.h already included, missing '#pragma once' in AvaPlayableGroup.h"
#endif
#define AVALANCHEMEDIA_AvaPlayableGroup_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaPlayableGroup ********************************************************
struct Z_Construct_UClass_UAvaPlayableGroup_Statics;
AVALANCHEMEDIA_API UClass* Z_Construct_UClass_UAvaPlayableGroup_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayableGroup_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaPlayableGroup(); \
	friend struct ::Z_Construct_UClass_UAvaPlayableGroup_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMEDIA_API UClass* ::Z_Construct_UClass_UAvaPlayableGroup_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaPlayableGroup, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), Z_Construct_UClass_UAvaPlayableGroup_NoRegister) \
	DECLARE_SERIALIZER(UAvaPlayableGroup)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayableGroup_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaPlayableGroup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaPlayableGroup(UAvaPlayableGroup&&) = delete; \
	UAvaPlayableGroup(const UAvaPlayableGroup&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaPlayableGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPlayableGroup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaPlayableGroup) \
	NO_API virtual ~UAvaPlayableGroup();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayableGroup_h_40_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayableGroup_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayableGroup_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayableGroup_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaPlayableGroup;

// ********** End Class UAvaPlayableGroup **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playable_AvaPlayableGroup_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
