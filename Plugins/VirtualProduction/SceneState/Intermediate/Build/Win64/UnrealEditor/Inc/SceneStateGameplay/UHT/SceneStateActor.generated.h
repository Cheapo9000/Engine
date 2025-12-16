// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneStateActor.h"

#ifdef SCENESTATEGAMEPLAY_SceneStateActor_generated_h
#error "SceneStateActor.generated.h already included, missing '#pragma once' in SceneStateActor.h"
#endif
#define SCENESTATEGAMEPLAY_SceneStateActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneStateObject;

// ********** Begin Class ASceneStateActor *********************************************************
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateGameplay_Public_SceneStateActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSceneState);


struct Z_Construct_UClass_ASceneStateActor_Statics;
SCENESTATEGAMEPLAY_API UClass* Z_Construct_UClass_ASceneStateActor_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateGameplay_Public_SceneStateActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASceneStateActor(); \
	friend struct ::Z_Construct_UClass_ASceneStateActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATEGAMEPLAY_API UClass* ::Z_Construct_UClass_ASceneStateActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ASceneStateActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SceneStateGameplay"), Z_Construct_UClass_ASceneStateActor_NoRegister) \
	DECLARE_SERIALIZER(ASceneStateActor)


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateGameplay_Public_SceneStateActor_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASceneStateActor(ASceneStateActor&&) = delete; \
	ASceneStateActor(const ASceneStateActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCENESTATEGAMEPLAY_API, ASceneStateActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASceneStateActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASceneStateActor) \
	SCENESTATEGAMEPLAY_API virtual ~ASceneStateActor();


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateGameplay_Public_SceneStateActor_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateGameplay_Public_SceneStateActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateGameplay_Public_SceneStateActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateGameplay_Public_SceneStateActor_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateGameplay_Public_SceneStateActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASceneStateActor;

// ********** End Class ASceneStateActor ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateGameplay_Public_SceneStateActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
