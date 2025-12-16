// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneStateEventSchemaCollection.h"

#ifdef SCENESTATEEVENT_SceneStateEventSchemaCollection_generated_h
#error "SceneStateEventSchemaCollection.generated.h already included, missing '#pragma once' in SceneStateEventSchemaCollection.h"
#endif
#define SCENESTATEEVENT_SceneStateEventSchemaCollection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USceneStateEventSchemaCollection *****************************************
struct Z_Construct_UClass_USceneStateEventSchemaCollection_Statics;
SCENESTATEEVENT_API UClass* Z_Construct_UClass_USceneStateEventSchemaCollection_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_SceneStateEventSchemaCollection_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneStateEventSchemaCollection(); \
	friend struct ::Z_Construct_UClass_USceneStateEventSchemaCollection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATEEVENT_API UClass* ::Z_Construct_UClass_USceneStateEventSchemaCollection_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneStateEventSchemaCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SceneStateEvent"), Z_Construct_UClass_USceneStateEventSchemaCollection_NoRegister) \
	DECLARE_SERIALIZER(USceneStateEventSchemaCollection)


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_SceneStateEventSchemaCollection_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCENESTATEEVENT_API USceneStateEventSchemaCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneStateEventSchemaCollection(USceneStateEventSchemaCollection&&) = delete; \
	USceneStateEventSchemaCollection(const USceneStateEventSchemaCollection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCENESTATEEVENT_API, USceneStateEventSchemaCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneStateEventSchemaCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneStateEventSchemaCollection) \
	SCENESTATEEVENT_API virtual ~USceneStateEventSchemaCollection();


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_SceneStateEventSchemaCollection_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_SceneStateEventSchemaCollection_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_SceneStateEventSchemaCollection_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_SceneStateEventSchemaCollection_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneStateEventSchemaCollection;

// ********** End Class USceneStateEventSchemaCollection *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_SceneStateEventSchemaCollection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
