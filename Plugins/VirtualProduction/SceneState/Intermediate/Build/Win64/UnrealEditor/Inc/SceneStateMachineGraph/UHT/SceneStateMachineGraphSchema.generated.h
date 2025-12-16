// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneStateMachineGraphSchema.h"

#ifdef SCENESTATEMACHINEGRAPH_SceneStateMachineGraphSchema_generated_h
#error "SceneStateMachineGraphSchema.generated.h already included, missing '#pragma once' in SceneStateMachineGraphSchema.h"
#endif
#define SCENESTATEMACHINEGRAPH_SceneStateMachineGraphSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USceneStateMachineGraphSchema ********************************************
struct Z_Construct_UClass_USceneStateMachineGraphSchema_Statics;
SCENESTATEMACHINEGRAPH_API UClass* Z_Construct_UClass_USceneStateMachineGraphSchema_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_SceneStateMachineGraphSchema_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneStateMachineGraphSchema(); \
	friend struct ::Z_Construct_UClass_USceneStateMachineGraphSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATEMACHINEGRAPH_API UClass* ::Z_Construct_UClass_USceneStateMachineGraphSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneStateMachineGraphSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SceneStateMachineGraph"), Z_Construct_UClass_USceneStateMachineGraphSchema_NoRegister) \
	DECLARE_SERIALIZER(USceneStateMachineGraphSchema)


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_SceneStateMachineGraphSchema_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCENESTATEMACHINEGRAPH_API USceneStateMachineGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneStateMachineGraphSchema(USceneStateMachineGraphSchema&&) = delete; \
	USceneStateMachineGraphSchema(const USceneStateMachineGraphSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCENESTATEMACHINEGRAPH_API, USceneStateMachineGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneStateMachineGraphSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneStateMachineGraphSchema) \
	SCENESTATEMACHINEGRAPH_API virtual ~USceneStateMachineGraphSchema();


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_SceneStateMachineGraphSchema_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_SceneStateMachineGraphSchema_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_SceneStateMachineGraphSchema_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_SceneStateMachineGraphSchema_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneStateMachineGraphSchema;

// ********** End Class USceneStateMachineGraphSchema **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_SceneStateMachineGraphSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
