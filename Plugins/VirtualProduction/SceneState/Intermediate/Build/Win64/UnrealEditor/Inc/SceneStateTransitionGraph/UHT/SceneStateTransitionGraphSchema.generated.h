// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneStateTransitionGraphSchema.h"

#ifdef SCENESTATETRANSITIONGRAPH_SceneStateTransitionGraphSchema_generated_h
#error "SceneStateTransitionGraphSchema.generated.h already included, missing '#pragma once' in SceneStateTransitionGraphSchema.h"
#endif
#define SCENESTATETRANSITIONGRAPH_SceneStateTransitionGraphSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USceneStateTransitionGraphSchema *****************************************
struct Z_Construct_UClass_USceneStateTransitionGraphSchema_Statics;
SCENESTATETRANSITIONGRAPH_API UClass* Z_Construct_UClass_USceneStateTransitionGraphSchema_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateTransitionGraphSchema_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneStateTransitionGraphSchema(); \
	friend struct ::Z_Construct_UClass_USceneStateTransitionGraphSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATETRANSITIONGRAPH_API UClass* ::Z_Construct_UClass_USceneStateTransitionGraphSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneStateTransitionGraphSchema, UEdGraphSchema_K2, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SceneStateTransitionGraph"), Z_Construct_UClass_USceneStateTransitionGraphSchema_NoRegister) \
	DECLARE_SERIALIZER(USceneStateTransitionGraphSchema)


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateTransitionGraphSchema_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCENESTATETRANSITIONGRAPH_API USceneStateTransitionGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneStateTransitionGraphSchema(USceneStateTransitionGraphSchema&&) = delete; \
	USceneStateTransitionGraphSchema(const USceneStateTransitionGraphSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCENESTATETRANSITIONGRAPH_API, USceneStateTransitionGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneStateTransitionGraphSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneStateTransitionGraphSchema) \
	SCENESTATETRANSITIONGRAPH_API virtual ~USceneStateTransitionGraphSchema();


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateTransitionGraphSchema_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateTransitionGraphSchema_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateTransitionGraphSchema_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateTransitionGraphSchema_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneStateTransitionGraphSchema;

// ********** End Class USceneStateTransitionGraphSchema *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateTransitionGraphSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
