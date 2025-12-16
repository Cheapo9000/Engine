// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_SceneStateEventBase.h"

#ifdef SCENESTATEEVENTGRAPH_K2Node_SceneStateEventBase_generated_h
#error "K2Node_SceneStateEventBase.generated.h already included, missing '#pragma once' in K2Node_SceneStateEventBase.h"
#endif
#define SCENESTATEEVENTGRAPH_K2Node_SceneStateEventBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UK2Node_SceneStateEventBase **********************************************
struct Z_Construct_UClass_UK2Node_SceneStateEventBase_Statics;
SCENESTATEEVENTGRAPH_API UClass* Z_Construct_UClass_UK2Node_SceneStateEventBase_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEventGraph_Private_K2Node_SceneStateEventBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK2Node_SceneStateEventBase(); \
	friend struct ::Z_Construct_UClass_UK2Node_SceneStateEventBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATEEVENTGRAPH_API UClass* ::Z_Construct_UClass_UK2Node_SceneStateEventBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_SceneStateEventBase, UK2Node, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SceneStateEventGraph"), Z_Construct_UClass_UK2Node_SceneStateEventBase_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_SceneStateEventBase)


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEventGraph_Private_K2Node_SceneStateEventBase_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK2Node_SceneStateEventBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_SceneStateEventBase(UK2Node_SceneStateEventBase&&) = delete; \
	UK2Node_SceneStateEventBase(const UK2Node_SceneStateEventBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK2Node_SceneStateEventBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_SceneStateEventBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_SceneStateEventBase) \
	NO_API virtual ~UK2Node_SceneStateEventBase();


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEventGraph_Private_K2Node_SceneStateEventBase_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEventGraph_Private_K2Node_SceneStateEventBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEventGraph_Private_K2Node_SceneStateEventBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEventGraph_Private_K2Node_SceneStateEventBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_SceneStateEventBase;

// ********** End Class UK2Node_SceneStateEventBase ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEventGraph_Private_K2Node_SceneStateEventBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
