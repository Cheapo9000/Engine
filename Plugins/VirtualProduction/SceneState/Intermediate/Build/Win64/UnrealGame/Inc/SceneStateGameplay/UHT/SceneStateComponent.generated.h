// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneStateComponent.h"

#ifdef SCENESTATEGAMEPLAY_SceneStateComponent_generated_h
#error "SceneStateComponent.generated.h already included, missing '#pragma once' in SceneStateComponent.h"
#endif
#define SCENESTATEGAMEPLAY_SceneStateComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneStateObject;

// ********** Begin Class USceneStateComponent *****************************************************
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateGameplay_Public_SceneStateComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSceneState);


struct Z_Construct_UClass_USceneStateComponent_Statics;
SCENESTATEGAMEPLAY_API UClass* Z_Construct_UClass_USceneStateComponent_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateGameplay_Public_SceneStateComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneStateComponent(); \
	friend struct ::Z_Construct_UClass_USceneStateComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATEGAMEPLAY_API UClass* ::Z_Construct_UClass_USceneStateComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SceneStateGameplay"), Z_Construct_UClass_USceneStateComponent_NoRegister) \
	DECLARE_SERIALIZER(USceneStateComponent)


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateGameplay_Public_SceneStateComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneStateComponent(USceneStateComponent&&) = delete; \
	USceneStateComponent(const USceneStateComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCENESTATEGAMEPLAY_API, USceneStateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneStateComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneStateComponent) \
	SCENESTATEGAMEPLAY_API virtual ~USceneStateComponent();


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateGameplay_Public_SceneStateComponent_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateGameplay_Public_SceneStateComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateGameplay_Public_SceneStateComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateGameplay_Public_SceneStateComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateGameplay_Public_SceneStateComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneStateComponent;

// ********** End Class USceneStateComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateGameplay_Public_SceneStateComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
