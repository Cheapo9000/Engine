// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsManagerListener.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULearningAgentsManager;
class UObject;
#ifdef LEARNINGAGENTS_LearningAgentsManagerListener_generated_h
#error "LearningAgentsManagerListener.generated.h already included, missing '#pragma once' in LearningAgentsManagerListener.h"
#endif
#define LEARNINGAGENTS_LearningAgentsManagerListener_generated_h

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsVisualLoggerObject(); \
	friend struct Z_Construct_UClass_ULearningAgentsVisualLoggerObject_Statics; \
public: \
	DECLARE_CLASS(ULearningAgentsVisualLoggerObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgents"), NO_API) \
	DECLARE_SERIALIZER(ULearningAgentsVisualLoggerObject)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULearningAgentsVisualLoggerObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULearningAgentsVisualLoggerObject(ULearningAgentsVisualLoggerObject&&); \
	ULearningAgentsVisualLoggerObject(const ULearningAgentsVisualLoggerObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULearningAgentsVisualLoggerObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsVisualLoggerObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULearningAgentsVisualLoggerObject) \
	NO_API virtual ~ULearningAgentsVisualLoggerObject();


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGAGENTS_API UClass* StaticClass<class ULearningAgentsVisualLoggerObject>();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnAgentsManagerTick_Implementation(TArray<int32> const& AgentIds, const float DeltaTime); \
	virtual void OnAgentsReset_Implementation(TArray<int32> const& AgentIds); \
	virtual void OnAgentsRemoved_Implementation(TArray<int32> const& AgentIds); \
	virtual void OnAgentsAdded_Implementation(TArray<int32> const& AgentIds); \
	DECLARE_FUNCTION(execGetAgentManager); \
	DECLARE_FUNCTION(execGetAllAgents); \
	DECLARE_FUNCTION(execGetAgents); \
	DECLARE_FUNCTION(execGetAgent); \
	DECLARE_FUNCTION(execIsSetup); \
	DECLARE_FUNCTION(execOnAgentsManagerTick); \
	DECLARE_FUNCTION(execOnAgentsReset); \
	DECLARE_FUNCTION(execOnAgentsRemoved); \
	DECLARE_FUNCTION(execOnAgentsAdded);


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_29_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsManagerListener(); \
	friend struct Z_Construct_UClass_ULearningAgentsManagerListener_Statics; \
public: \
	DECLARE_CLASS(ULearningAgentsManagerListener, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LearningAgents"), NO_API) \
	DECLARE_SERIALIZER(ULearningAgentsManagerListener)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULearningAgentsManagerListener(ULearningAgentsManagerListener&&); \
	ULearningAgentsManagerListener(const ULearningAgentsManagerListener&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsManagerListener); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULearningAgentsManagerListener)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_26_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_29_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGAGENTS_API UClass* StaticClass<class ULearningAgentsManagerListener>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
