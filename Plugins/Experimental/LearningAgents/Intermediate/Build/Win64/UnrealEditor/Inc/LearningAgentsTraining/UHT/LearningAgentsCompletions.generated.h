// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsCompletions.h"

#ifdef LEARNINGAGENTSTRAINING_LearningAgentsCompletions_generated_h
#error "LearningAgentsCompletions.generated.h already included, missing '#pragma once' in LearningAgentsCompletions.h"
#endif
#define LEARNINGAGENTSTRAINING_LearningAgentsCompletions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULearningAgentsManagerListener;
enum class ELearningAgentsCompletion : uint8;
struct FLinearColor;

// ********** Begin Class ULearningAgentsCompletions ***********************************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCompletions_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeCompletionOnLocationOutsideBounds); \
	DECLARE_FUNCTION(execMakeCompletionOnLocationDifferenceAboveThreshold); \
	DECLARE_FUNCTION(execMakeCompletionOnLocationDifferenceBelowThreshold); \
	DECLARE_FUNCTION(execMakeCompletionOnEpisodeStepsRecorded); \
	DECLARE_FUNCTION(execMakeCompletionOnTimeElapsed); \
	DECLARE_FUNCTION(execMakeCompletionOnCondition); \
	DECLARE_FUNCTION(execMakeCompletion); \
	DECLARE_FUNCTION(execCompletionNot); \
	DECLARE_FUNCTION(execCompletionAnd); \
	DECLARE_FUNCTION(execCompletionOr); \
	DECLARE_FUNCTION(execIsCompletionTermination); \
	DECLARE_FUNCTION(execIsCompletionTruncation); \
	DECLARE_FUNCTION(execIsCompletionCompleted); \
	DECLARE_FUNCTION(execIsCompletionRunning);


struct Z_Construct_UClass_ULearningAgentsCompletions_Statics;
LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsCompletions_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCompletions_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsCompletions(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsCompletions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTSTRAINING_API UClass* ::Z_Construct_UClass_ULearningAgentsCompletions_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsCompletions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgentsTraining"), Z_Construct_UClass_ULearningAgentsCompletions_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsCompletions)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCompletions_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEARNINGAGENTSTRAINING_API ULearningAgentsCompletions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsCompletions(ULearningAgentsCompletions&&) = delete; \
	ULearningAgentsCompletions(const ULearningAgentsCompletions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEARNINGAGENTSTRAINING_API, ULearningAgentsCompletions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsCompletions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULearningAgentsCompletions) \
	LEARNINGAGENTSTRAINING_API virtual ~ULearningAgentsCompletions();


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCompletions_h_41_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCompletions_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCompletions_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCompletions_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCompletions_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsCompletions;

// ********** End Class ULearningAgentsCompletions *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCompletions_h

// ********** Begin Enum ELearningAgentsCompletion *************************************************
#define FOREACH_ENUM_ELEARNINGAGENTSCOMPLETION(op) \
	op(ELearningAgentsCompletion::Running) \
	op(ELearningAgentsCompletion::Truncation) \
	op(ELearningAgentsCompletion::Termination) 

enum class ELearningAgentsCompletion : uint8;
template<> struct TIsUEnumClass<ELearningAgentsCompletion> { enum { Value = true }; };
template<> LEARNINGAGENTSTRAINING_NON_ATTRIBUTED_API UEnum* StaticEnum<ELearningAgentsCompletion>();
// ********** End Enum ELearningAgentsCompletion ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
