// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneStateEventStream.h"

#ifdef SCENESTATEEVENT_SceneStateEventStream_generated_h
#error "SceneStateEventStream.generated.h already included, missing '#pragma once' in SceneStateEventStream.h"
#endif
#define SCENESTATEEVENT_SceneStateEventStream_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USceneStateEventStream ***************************************************
struct Z_Construct_UClass_USceneStateEventStream_Statics;
SCENESTATEEVENT_API UClass* Z_Construct_UClass_USceneStateEventStream_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_SceneStateEventStream_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneStateEventStream(); \
	friend struct ::Z_Construct_UClass_USceneStateEventStream_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATEEVENT_API UClass* ::Z_Construct_UClass_USceneStateEventStream_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneStateEventStream, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SceneStateEvent"), Z_Construct_UClass_USceneStateEventStream_NoRegister) \
	DECLARE_SERIALIZER(USceneStateEventStream)


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_SceneStateEventStream_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCENESTATEEVENT_API USceneStateEventStream(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneStateEventStream(USceneStateEventStream&&) = delete; \
	USceneStateEventStream(const USceneStateEventStream&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCENESTATEEVENT_API, USceneStateEventStream); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneStateEventStream); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneStateEventStream) \
	SCENESTATEEVENT_API virtual ~USceneStateEventStream();


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_SceneStateEventStream_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_SceneStateEventStream_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_SceneStateEventStream_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_SceneStateEventStream_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneStateEventStream;

// ********** End Class USceneStateEventStream *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_SceneStateEventStream_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
