// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsGymSimple.h"

#ifdef LEARNINGAGENTSTRAINING_LearningAgentsGymSimple_generated_h
#error "LearningAgentsGymSimple.generated.h already included, missing '#pragma once' in LearningAgentsGymSimple.h"
#endif
#define LEARNINGAGENTSTRAINING_LearningAgentsGymSimple_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALearningAgentsGymSimple *************************************************
struct Z_Construct_UClass_ALearningAgentsGymSimple_Statics;
LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ALearningAgentsGymSimple_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGymSimple_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALearningAgentsGymSimple(); \
	friend struct ::Z_Construct_UClass_ALearningAgentsGymSimple_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTSTRAINING_API UClass* ::Z_Construct_UClass_ALearningAgentsGymSimple_NoRegister(); \
public: \
	DECLARE_CLASS2(ALearningAgentsGymSimple, ALearningAgentsGymBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LearningAgentsTraining"), Z_Construct_UClass_ALearningAgentsGymSimple_NoRegister) \
	DECLARE_SERIALIZER(ALearningAgentsGymSimple)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGymSimple_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALearningAgentsGymSimple(ALearningAgentsGymSimple&&) = delete; \
	ALearningAgentsGymSimple(const ALearningAgentsGymSimple&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEARNINGAGENTSTRAINING_API, ALearningAgentsGymSimple); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALearningAgentsGymSimple); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALearningAgentsGymSimple) \
	LEARNINGAGENTSTRAINING_API virtual ~ALearningAgentsGymSimple();


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGymSimple_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGymSimple_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGymSimple_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGymSimple_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALearningAgentsGymSimple;

// ********** End Class ALearningAgentsGymSimple ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGymSimple_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
