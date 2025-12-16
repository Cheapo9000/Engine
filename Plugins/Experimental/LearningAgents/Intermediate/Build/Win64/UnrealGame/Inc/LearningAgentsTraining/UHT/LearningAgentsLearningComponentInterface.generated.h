// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsLearningComponentInterface.h"

#ifdef LEARNINGAGENTSTRAINING_LearningAgentsLearningComponentInterface_generated_h
#error "LearningAgentsLearningComponentInterface.generated.h already included, missing '#pragma once' in LearningAgentsLearningComponentInterface.h"
#endif
#define LEARNINGAGENTSTRAINING_LearningAgentsLearningComponentInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface ULearningAgentsLearningComponentInterface ****************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsLearningComponentInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetLearningComponent); \
	DECLARE_FUNCTION(execInitializeLearningComponent);


struct Z_Construct_UClass_ULearningAgentsLearningComponentInterface_Statics;
LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsLearningComponentInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsLearningComponentInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEARNINGAGENTSTRAINING_API ULearningAgentsLearningComponentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsLearningComponentInterface(ULearningAgentsLearningComponentInterface&&) = delete; \
	ULearningAgentsLearningComponentInterface(const ULearningAgentsLearningComponentInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEARNINGAGENTSTRAINING_API, ULearningAgentsLearningComponentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsLearningComponentInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULearningAgentsLearningComponentInterface) \
	virtual ~ULearningAgentsLearningComponentInterface() = default;


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsLearningComponentInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULearningAgentsLearningComponentInterface(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsLearningComponentInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTSTRAINING_API UClass* ::Z_Construct_UClass_ULearningAgentsLearningComponentInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsLearningComponentInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LearningAgentsTraining"), Z_Construct_UClass_ULearningAgentsLearningComponentInterface_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsLearningComponentInterface)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsLearningComponentInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsLearningComponentInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsLearningComponentInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsLearningComponentInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILearningAgentsLearningComponentInterface() {} \
public: \
	typedef ULearningAgentsLearningComponentInterface UClassType; \
	typedef ILearningAgentsLearningComponentInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsLearningComponentInterface_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsLearningComponentInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsLearningComponentInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsLearningComponentInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsLearningComponentInterface;

// ********** End Interface ULearningAgentsLearningComponentInterface ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsLearningComponentInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
