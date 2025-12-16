// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Playable/AvaPlayableAssetUserData.h"

#ifdef AVALANCHEMEDIA_AvaPlayableAssetUserData_generated_h
#error "AvaPlayableAssetUserData.generated.h already included, missing '#pragma once' in AvaPlayableAssetUserData.h"
#endif
#define AVALANCHEMEDIA_AvaPlayableAssetUserData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaPlayableAssetUserData ************************************************
struct Z_Construct_UClass_UAvaPlayableAssetUserData_Statics;
AVALANCHEMEDIA_API UClass* Z_Construct_UClass_UAvaPlayableAssetUserData_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playable_AvaPlayableAssetUserData_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaPlayableAssetUserData(); \
	friend struct ::Z_Construct_UClass_UAvaPlayableAssetUserData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMEDIA_API UClass* ::Z_Construct_UClass_UAvaPlayableAssetUserData_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaPlayableAssetUserData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), Z_Construct_UClass_UAvaPlayableAssetUserData_NoRegister) \
	DECLARE_SERIALIZER(UAvaPlayableAssetUserData)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playable_AvaPlayableAssetUserData_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaPlayableAssetUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaPlayableAssetUserData(UAvaPlayableAssetUserData&&) = delete; \
	UAvaPlayableAssetUserData(const UAvaPlayableAssetUserData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaPlayableAssetUserData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPlayableAssetUserData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaPlayableAssetUserData) \
	NO_API virtual ~UAvaPlayableAssetUserData();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playable_AvaPlayableAssetUserData_h_16_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playable_AvaPlayableAssetUserData_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playable_AvaPlayableAssetUserData_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playable_AvaPlayableAssetUserData_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaPlayableAssetUserData;

// ********** End Class UAvaPlayableAssetUserData **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playable_AvaPlayableAssetUserData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
