// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ISceneStateTransitionGraphProvider.h"

#ifdef SCENESTATETRANSITIONGRAPH_ISceneStateTransitionGraphProvider_generated_h
#error "ISceneStateTransitionGraphProvider.generated.h already included, missing '#pragma once' in ISceneStateTransitionGraphProvider.h"
#endif
#define SCENESTATETRANSITIONGRAPH_ISceneStateTransitionGraphProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface USceneStateTransitionGraphProvider ***********************************
struct Z_Construct_UClass_USceneStateTransitionGraphProvider_Statics;
SCENESTATETRANSITIONGRAPH_API UClass* Z_Construct_UClass_USceneStateTransitionGraphProvider_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_ISceneStateTransitionGraphProvider_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCENESTATETRANSITIONGRAPH_API USceneStateTransitionGraphProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneStateTransitionGraphProvider(USceneStateTransitionGraphProvider&&) = delete; \
	USceneStateTransitionGraphProvider(const USceneStateTransitionGraphProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCENESTATETRANSITIONGRAPH_API, USceneStateTransitionGraphProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneStateTransitionGraphProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneStateTransitionGraphProvider) \
	virtual ~USceneStateTransitionGraphProvider() = default;


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_ISceneStateTransitionGraphProvider_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSceneStateTransitionGraphProvider(); \
	friend struct ::Z_Construct_UClass_USceneStateTransitionGraphProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATETRANSITIONGRAPH_API UClass* ::Z_Construct_UClass_USceneStateTransitionGraphProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneStateTransitionGraphProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SceneStateTransitionGraph"), Z_Construct_UClass_USceneStateTransitionGraphProvider_NoRegister) \
	DECLARE_SERIALIZER(USceneStateTransitionGraphProvider)


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_ISceneStateTransitionGraphProvider_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_ISceneStateTransitionGraphProvider_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_ISceneStateTransitionGraphProvider_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_ISceneStateTransitionGraphProvider_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISceneStateTransitionGraphProvider() {} \
public: \
	typedef USceneStateTransitionGraphProvider UClassType; \
	typedef ISceneStateTransitionGraphProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_ISceneStateTransitionGraphProvider_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_ISceneStateTransitionGraphProvider_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_ISceneStateTransitionGraphProvider_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneStateTransitionGraphProvider;

// ********** End Interface USceneStateTransitionGraphProvider *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_ISceneStateTransitionGraphProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
