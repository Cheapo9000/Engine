// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaSceneStatePlayer.h"

#ifdef AVALANCHESCENESTATE_AvaSceneStatePlayer_generated_h
#error "AvaSceneStatePlayer.generated.h already included, missing '#pragma once' in AvaSceneStatePlayer.h"
#endif
#define AVALANCHESCENESTATE_AvaSceneStatePlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaSceneStatePlayer *****************************************************
struct Z_Construct_UClass_UAvaSceneStatePlayer_Statics;
AVALANCHESCENESTATE_API UClass* Z_Construct_UClass_UAvaSceneStatePlayer_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_AvalancheSceneState_Source_AvalancheSceneState_Public_AvaSceneStatePlayer_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaSceneStatePlayer(); \
	friend struct ::Z_Construct_UClass_UAvaSceneStatePlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHESCENESTATE_API UClass* ::Z_Construct_UClass_UAvaSceneStatePlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaSceneStatePlayer, USceneStateComponentPlayer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheSceneState"), Z_Construct_UClass_UAvaSceneStatePlayer_NoRegister) \
	DECLARE_SERIALIZER(UAvaSceneStatePlayer)


#define FID_Engine_Plugins_VirtualProduction_AvalancheSceneState_Source_AvalancheSceneState_Public_AvaSceneStatePlayer_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaSceneStatePlayer(UAvaSceneStatePlayer&&) = delete; \
	UAvaSceneStatePlayer(const UAvaSceneStatePlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaSceneStatePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaSceneStatePlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaSceneStatePlayer) \
	NO_API virtual ~UAvaSceneStatePlayer();


#define FID_Engine_Plugins_VirtualProduction_AvalancheSceneState_Source_AvalancheSceneState_Public_AvaSceneStatePlayer_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_AvalancheSceneState_Source_AvalancheSceneState_Public_AvaSceneStatePlayer_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_AvalancheSceneState_Source_AvalancheSceneState_Public_AvaSceneStatePlayer_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_AvalancheSceneState_Source_AvalancheSceneState_Public_AvaSceneStatePlayer_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaSceneStatePlayer;

// ********** End Class UAvaSceneStatePlayer *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_AvalancheSceneState_Source_AvalancheSceneState_Public_AvaSceneStatePlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
