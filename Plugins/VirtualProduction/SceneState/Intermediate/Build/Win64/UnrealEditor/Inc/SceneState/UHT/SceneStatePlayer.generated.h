// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneStatePlayer.h"

#ifdef SCENESTATE_SceneStatePlayer_generated_h
#error "SceneStatePlayer.generated.h already included, missing '#pragma once' in SceneStatePlayer.h"
#endif
#define SCENESTATE_SceneStatePlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USceneStatePlayer ********************************************************
struct Z_Construct_UClass_USceneStatePlayer_Statics;
SCENESTATE_API UClass* Z_Construct_UClass_USceneStatePlayer_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_SceneStatePlayer_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneStatePlayer(); \
	friend struct ::Z_Construct_UClass_USceneStatePlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATE_API UClass* ::Z_Construct_UClass_USceneStatePlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneStatePlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SceneState"), Z_Construct_UClass_USceneStatePlayer_NoRegister) \
	DECLARE_SERIALIZER(USceneStatePlayer)


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_SceneStatePlayer_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCENESTATE_API USceneStatePlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneStatePlayer(USceneStatePlayer&&) = delete; \
	USceneStatePlayer(const USceneStatePlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCENESTATE_API, USceneStatePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneStatePlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneStatePlayer) \
	SCENESTATE_API virtual ~USceneStatePlayer();


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_SceneStatePlayer_h_16_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_SceneStatePlayer_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_SceneStatePlayer_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_SceneStatePlayer_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneStatePlayer;

// ********** End Class USceneStatePlayer **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_SceneStatePlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
