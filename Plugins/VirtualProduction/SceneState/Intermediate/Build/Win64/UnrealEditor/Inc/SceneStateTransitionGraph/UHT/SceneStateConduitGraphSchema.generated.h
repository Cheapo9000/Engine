// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneStateConduitGraphSchema.h"

#ifdef SCENESTATETRANSITIONGRAPH_SceneStateConduitGraphSchema_generated_h
#error "SceneStateConduitGraphSchema.generated.h already included, missing '#pragma once' in SceneStateConduitGraphSchema.h"
#endif
#define SCENESTATETRANSITIONGRAPH_SceneStateConduitGraphSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USceneStateConduitGraphSchema ********************************************
struct Z_Construct_UClass_USceneStateConduitGraphSchema_Statics;
SCENESTATETRANSITIONGRAPH_API UClass* Z_Construct_UClass_USceneStateConduitGraphSchema_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateConduitGraphSchema_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneStateConduitGraphSchema(); \
	friend struct ::Z_Construct_UClass_USceneStateConduitGraphSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATETRANSITIONGRAPH_API UClass* ::Z_Construct_UClass_USceneStateConduitGraphSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneStateConduitGraphSchema, USceneStateTransitionGraphSchema, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SceneStateTransitionGraph"), Z_Construct_UClass_USceneStateConduitGraphSchema_NoRegister) \
	DECLARE_SERIALIZER(USceneStateConduitGraphSchema)


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateConduitGraphSchema_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCENESTATETRANSITIONGRAPH_API USceneStateConduitGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneStateConduitGraphSchema(USceneStateConduitGraphSchema&&) = delete; \
	USceneStateConduitGraphSchema(const USceneStateConduitGraphSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCENESTATETRANSITIONGRAPH_API, USceneStateConduitGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneStateConduitGraphSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneStateConduitGraphSchema) \
	SCENESTATETRANSITIONGRAPH_API virtual ~USceneStateConduitGraphSchema();


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateConduitGraphSchema_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateConduitGraphSchema_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateConduitGraphSchema_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateConduitGraphSchema_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneStateConduitGraphSchema;

// ********** End Class USceneStateConduitGraphSchema **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateConduitGraphSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
