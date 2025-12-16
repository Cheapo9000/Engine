// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tasks/SceneStateBlueprintableTask.h"

#ifdef SCENESTATE_SceneStateBlueprintableTask_generated_h
#error "SceneStateBlueprintableTask.generated.h already included, missing '#pragma once' in SceneStateBlueprintableTask.h"
#endif
#define SCENESTATE_SceneStateBlueprintableTask_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USceneStateEventStream;
class USceneStateObject;
enum class ESceneStateTaskStopReason : uint8;

// ********** Begin Class USceneStateBlueprintableTask *********************************************
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_Tasks_SceneStateBlueprintableTask_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFinishTask); \
	DECLARE_FUNCTION(execGetEventStream); \
	DECLARE_FUNCTION(execGetContextObject); \
	DECLARE_FUNCTION(execGetRootState);


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_Tasks_SceneStateBlueprintableTask_h_27_CALLBACK_WRAPPERS
struct Z_Construct_UClass_USceneStateBlueprintableTask_Statics;
SCENESTATE_API UClass* Z_Construct_UClass_USceneStateBlueprintableTask_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_Tasks_SceneStateBlueprintableTask_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneStateBlueprintableTask(); \
	friend struct ::Z_Construct_UClass_USceneStateBlueprintableTask_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATE_API UClass* ::Z_Construct_UClass_USceneStateBlueprintableTask_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneStateBlueprintableTask, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SceneState"), Z_Construct_UClass_USceneStateBlueprintableTask_NoRegister) \
	DECLARE_SERIALIZER(USceneStateBlueprintableTask) \
	virtual UObject* _getUObject() const override { return const_cast<USceneStateBlueprintableTask*>(this); }


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_Tasks_SceneStateBlueprintableTask_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCENESTATE_API USceneStateBlueprintableTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneStateBlueprintableTask(USceneStateBlueprintableTask&&) = delete; \
	USceneStateBlueprintableTask(const USceneStateBlueprintableTask&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCENESTATE_API, USceneStateBlueprintableTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneStateBlueprintableTask); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneStateBlueprintableTask) \
	SCENESTATE_API virtual ~USceneStateBlueprintableTask();


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_Tasks_SceneStateBlueprintableTask_h_24_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_Tasks_SceneStateBlueprintableTask_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_Tasks_SceneStateBlueprintableTask_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_Tasks_SceneStateBlueprintableTask_h_27_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_Tasks_SceneStateBlueprintableTask_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_Tasks_SceneStateBlueprintableTask_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneStateBlueprintableTask;

// ********** End Class USceneStateBlueprintableTask ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_Tasks_SceneStateBlueprintableTask_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
