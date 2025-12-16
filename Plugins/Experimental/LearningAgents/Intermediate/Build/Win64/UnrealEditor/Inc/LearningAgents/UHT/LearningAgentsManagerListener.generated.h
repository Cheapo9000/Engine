// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsManagerListener.h"

#ifdef LEARNINGAGENTS_LearningAgentsManagerListener_generated_h
#error "LearningAgentsManagerListener.generated.h already included, missing '#pragma once' in LearningAgentsManagerListener.h"
#endif
#define LEARNINGAGENTS_LearningAgentsManagerListener_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class ULearningAgentsManager;
class UObject;

// ********** Begin Class ULearningAgentsVisualLoggerObject ****************************************
struct Z_Construct_UClass_ULearningAgentsVisualLoggerObject_Statics;
LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsVisualLoggerObject_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsVisualLoggerObject(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsVisualLoggerObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTS_API UClass* ::Z_Construct_UClass_ULearningAgentsVisualLoggerObject_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsVisualLoggerObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgents"), Z_Construct_UClass_ULearningAgentsVisualLoggerObject_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsVisualLoggerObject)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEARNINGAGENTS_API ULearningAgentsVisualLoggerObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsVisualLoggerObject(ULearningAgentsVisualLoggerObject&&) = delete; \
	ULearningAgentsVisualLoggerObject(const ULearningAgentsVisualLoggerObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEARNINGAGENTS_API, ULearningAgentsVisualLoggerObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsVisualLoggerObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULearningAgentsVisualLoggerObject) \
	LEARNINGAGENTS_API virtual ~ULearningAgentsVisualLoggerObject();


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsVisualLoggerObject;

// ********** End Class ULearningAgentsVisualLoggerObject ******************************************

// ********** Begin Class ULearningAgentsManagerListener *******************************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	LEARNINGAGENTS_API virtual void OnAgentsManagerTick_Implementation(TArray<int32> const& AgentIds, const float DeltaTime); \
	LEARNINGAGENTS_API virtual void OnAgentsReset_Implementation(TArray<int32> const& AgentIds); \
	LEARNINGAGENTS_API virtual void OnAgentsRemoved_Implementation(TArray<int32> const& AgentIds); \
	LEARNINGAGENTS_API virtual void OnAgentsAdded_Implementation(TArray<int32> const& AgentIds); \
	DECLARE_FUNCTION(execGetAgentManager); \
	DECLARE_FUNCTION(execGetAllAgents); \
	DECLARE_FUNCTION(execGetAgents); \
	DECLARE_FUNCTION(execGetAgent); \
	DECLARE_FUNCTION(execIsSetup); \
	DECLARE_FUNCTION(execOnAgentsManagerTick); \
	DECLARE_FUNCTION(execOnAgentsReset); \
	DECLARE_FUNCTION(execOnAgentsRemoved); \
	DECLARE_FUNCTION(execOnAgentsAdded);


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_31_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ULearningAgentsManagerListener_Statics;
LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsManagerListener_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsManagerListener(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsManagerListener_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTS_API UClass* ::Z_Construct_UClass_ULearningAgentsManagerListener_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsManagerListener, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LearningAgents"), Z_Construct_UClass_ULearningAgentsManagerListener_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsManagerListener)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsManagerListener(ULearningAgentsManagerListener&&) = delete; \
	ULearningAgentsManagerListener(const ULearningAgentsManagerListener&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsManagerListener); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULearningAgentsManagerListener)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_28_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_31_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsManagerListener;

// ********** End Class ULearningAgentsManagerListener *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManagerListener_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
