// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsGym.h"

#ifdef LEARNINGAGENTSTRAINING_LearningAgentsGym_generated_h
#error "LearningAgentsGym.generated.h already included, missing '#pragma once' in LearningAgentsGym.h"
#endif
#define LEARNINGAGENTSTRAINING_LearningAgentsGym_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRandomStream;

// ********** Begin Delegate FOnGymInitializedSignature ********************************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGym_h_15_DELEGATE \
LEARNINGAGENTSTRAINING_API void FOnGymInitializedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnGymInitializedSignature);


// ********** End Delegate FOnGymInitializedSignature **********************************************

// ********** Begin Delegate FOnBeginGymResetSignature *********************************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGym_h_16_DELEGATE \
LEARNINGAGENTSTRAINING_API void FOnBeginGymResetSignature_DelegateWrapper(const FMulticastScriptDelegate& OnBeginGymResetSignature);


// ********** End Delegate FOnBeginGymResetSignature ***********************************************

// ********** Begin Delegate FOnPostGymResetSignature **********************************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGym_h_17_DELEGATE \
LEARNINGAGENTSTRAINING_API void FOnPostGymResetSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPostGymResetSignature);


// ********** End Delegate FOnPostGymResetSignature ************************************************

// ********** Begin Class ALearningAgentsGymBase ***************************************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGym_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRandomStream); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execInitialize);


struct Z_Construct_UClass_ALearningAgentsGymBase_Statics;
LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ALearningAgentsGymBase_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGym_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALearningAgentsGymBase(); \
	friend struct ::Z_Construct_UClass_ALearningAgentsGymBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTSTRAINING_API UClass* ::Z_Construct_UClass_ALearningAgentsGymBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ALearningAgentsGymBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/LearningAgentsTraining"), Z_Construct_UClass_ALearningAgentsGymBase_NoRegister) \
	DECLARE_SERIALIZER(ALearningAgentsGymBase)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGym_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALearningAgentsGymBase(ALearningAgentsGymBase&&) = delete; \
	ALearningAgentsGymBase(const ALearningAgentsGymBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEARNINGAGENTSTRAINING_API, ALearningAgentsGymBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALearningAgentsGymBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ALearningAgentsGymBase) \
	LEARNINGAGENTSTRAINING_API virtual ~ALearningAgentsGymBase();


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGym_h_24_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGym_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGym_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGym_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGym_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALearningAgentsGymBase;

// ********** End Class ALearningAgentsGymBase *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGym_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
