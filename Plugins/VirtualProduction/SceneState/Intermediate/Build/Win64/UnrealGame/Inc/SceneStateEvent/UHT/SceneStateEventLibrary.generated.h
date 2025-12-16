// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneStateEventLibrary.h"

#ifdef SCENESTATEEVENT_SceneStateEventLibrary_generated_h
#error "SceneStateEventLibrary.generated.h already included, missing '#pragma once' in SceneStateEventLibrary.h"
#endif
#define SCENESTATEEVENT_SceneStateEventLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USceneStateEventStream;
struct FInstancedStruct;
struct FSceneStateEventSchemaHandle;

// ********** Begin Class USceneStateEventLibrary **************************************************
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_SceneStateEventLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasEvent); \
	DECLARE_FUNCTION(execFindEvent); \
	DECLARE_FUNCTION(execBroadcastEvent); \
	DECLARE_FUNCTION(execPushEvent);


struct Z_Construct_UClass_USceneStateEventLibrary_Statics;
	struct Z_Construct_UFunction_USceneStateEventLibrary_EventDataToStruct_Statics; \
SCENESTATEEVENT_API UClass* Z_Construct_UClass_USceneStateEventLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_SceneStateEventLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneStateEventLibrary(); \
	friend struct ::Z_Construct_UClass_USceneStateEventLibrary_Statics; \
	friend struct ::Z_Construct_UFunction_USceneStateEventLibrary_EventDataToStruct_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATEEVENT_API UClass* ::Z_Construct_UClass_USceneStateEventLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneStateEventLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SceneStateEvent"), Z_Construct_UClass_USceneStateEventLibrary_NoRegister) \
	DECLARE_SERIALIZER(USceneStateEventLibrary)


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_SceneStateEventLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCENESTATEEVENT_API USceneStateEventLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneStateEventLibrary(USceneStateEventLibrary&&) = delete; \
	USceneStateEventLibrary(const USceneStateEventLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCENESTATEEVENT_API, USceneStateEventLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneStateEventLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneStateEventLibrary) \
	SCENESTATEEVENT_API virtual ~USceneStateEventLibrary();


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_SceneStateEventLibrary_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_SceneStateEventLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_SceneStateEventLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_SceneStateEventLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_SceneStateEventLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneStateEventLibrary;

// ********** End Class USceneStateEventLibrary ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_SceneStateEventLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
