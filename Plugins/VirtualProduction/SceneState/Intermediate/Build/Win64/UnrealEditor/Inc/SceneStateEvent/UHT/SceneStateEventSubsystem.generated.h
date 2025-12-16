// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneStateEventSubsystem.h"

#ifdef SCENESTATEEVENT_SceneStateEventSubsystem_generated_h
#error "SceneStateEventSubsystem.generated.h already included, missing '#pragma once' in SceneStateEventSubsystem.h"
#endif
#define SCENESTATEEVENT_SceneStateEventSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USceneStateEventSubsystem ************************************************
struct Z_Construct_UClass_USceneStateEventSubsystem_Statics;
SCENESTATEEVENT_API UClass* Z_Construct_UClass_USceneStateEventSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Private_SceneStateEventSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneStateEventSubsystem(); \
	friend struct ::Z_Construct_UClass_USceneStateEventSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATEEVENT_API UClass* ::Z_Construct_UClass_USceneStateEventSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneStateEventSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SceneStateEvent"), Z_Construct_UClass_USceneStateEventSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USceneStateEventSubsystem)


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Private_SceneStateEventSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USceneStateEventSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneStateEventSubsystem(USceneStateEventSubsystem&&) = delete; \
	USceneStateEventSubsystem(const USceneStateEventSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USceneStateEventSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneStateEventSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USceneStateEventSubsystem) \
	NO_API virtual ~USceneStateEventSubsystem();


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Private_SceneStateEventSubsystem_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Private_SceneStateEventSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Private_SceneStateEventSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Private_SceneStateEventSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneStateEventSubsystem;

// ********** End Class USceneStateEventSubsystem **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Private_SceneStateEventSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
