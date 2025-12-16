// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsEntityInterface.h"

#ifdef LEARNINGAGENTSTRAINING_LearningAgentsEntityInterface_generated_h
#error "LearningAgentsEntityInterface.generated.h already included, missing '#pragma once' in LearningAgentsEntityInterface.h"
#endif
#define LEARNINGAGENTSTRAINING_LearningAgentsEntityInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALearningAgentsGymBase;

// ********** Begin Interface ULearningAgentsEntityTrainingInterface *******************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsEntityInterface_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual ALearningAgentsGymBase* GetGym_Implementation() const { return NULL; }; \
	virtual void ResetEntity_Implementation(ALearningAgentsGymBase* InGym) {}; \
	virtual void InitializeEntity_Implementation(ALearningAgentsGymBase* InGym) {}; \
	DECLARE_FUNCTION(execGetGym); \
	DECLARE_FUNCTION(execResetEntity); \
	DECLARE_FUNCTION(execInitializeEntity);


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsEntityInterface_h_19_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ULearningAgentsEntityTrainingInterface_Statics;
LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsEntityTrainingInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsEntityInterface_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEARNINGAGENTSTRAINING_API ULearningAgentsEntityTrainingInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsEntityTrainingInterface(ULearningAgentsEntityTrainingInterface&&) = delete; \
	ULearningAgentsEntityTrainingInterface(const ULearningAgentsEntityTrainingInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEARNINGAGENTSTRAINING_API, ULearningAgentsEntityTrainingInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsEntityTrainingInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULearningAgentsEntityTrainingInterface) \
	virtual ~ULearningAgentsEntityTrainingInterface() = default;


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsEntityInterface_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULearningAgentsEntityTrainingInterface(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsEntityTrainingInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTSTRAINING_API UClass* ::Z_Construct_UClass_ULearningAgentsEntityTrainingInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsEntityTrainingInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LearningAgentsTraining"), Z_Construct_UClass_ULearningAgentsEntityTrainingInterface_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsEntityTrainingInterface)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsEntityInterface_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsEntityInterface_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsEntityInterface_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsEntityInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILearningAgentsEntityTrainingInterface() {} \
public: \
	typedef ULearningAgentsEntityTrainingInterface UClassType; \
	typedef ILearningAgentsEntityTrainingInterface ThisClass; \
	LEARNINGAGENTSTRAINING_API static ALearningAgentsGymBase* Execute_GetGym(const UObject* O); \
	LEARNINGAGENTSTRAINING_API static void Execute_InitializeEntity(UObject* O, ALearningAgentsGymBase* InGym); \
	LEARNINGAGENTSTRAINING_API static void Execute_ResetEntity(UObject* O, ALearningAgentsGymBase* InGym); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsEntityInterface_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsEntityInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsEntityInterface_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsEntityInterface_h_19_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsEntityInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsEntityTrainingInterface;

// ********** End Interface ULearningAgentsEntityTrainingInterface *********************************

// ********** Begin Interface ULearningAgentsEntityInterface ***************************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsEntityInterface_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsEntityEnabled_Implementation() const { return false; }; \
	virtual void DisableEntity_Implementation() {}; \
	virtual void EnableEntity_Implementation() {}; \
	DECLARE_FUNCTION(execIsEntityEnabled); \
	DECLARE_FUNCTION(execDisableEntity); \
	DECLARE_FUNCTION(execEnableEntity);


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsEntityInterface_h_49_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ULearningAgentsEntityInterface_Statics;
LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsEntityInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsEntityInterface_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEARNINGAGENTSTRAINING_API ULearningAgentsEntityInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsEntityInterface(ULearningAgentsEntityInterface&&) = delete; \
	ULearningAgentsEntityInterface(const ULearningAgentsEntityInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEARNINGAGENTSTRAINING_API, ULearningAgentsEntityInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsEntityInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULearningAgentsEntityInterface) \
	virtual ~ULearningAgentsEntityInterface() = default;


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsEntityInterface_h_49_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULearningAgentsEntityInterface(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsEntityInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTSTRAINING_API UClass* ::Z_Construct_UClass_ULearningAgentsEntityInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsEntityInterface, ULearningAgentsEntityTrainingInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LearningAgentsTraining"), Z_Construct_UClass_ULearningAgentsEntityInterface_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsEntityInterface)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsEntityInterface_h_49_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsEntityInterface_h_49_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsEntityInterface_h_49_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsEntityInterface_h_49_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILearningAgentsEntityInterface() {} \
public: \
	typedef ULearningAgentsEntityInterface UClassType; \
	typedef ILearningAgentsEntityInterface ThisClass; \
	LEARNINGAGENTSTRAINING_API static void Execute_DisableEntity(UObject* O); \
	LEARNINGAGENTSTRAINING_API static void Execute_EnableEntity(UObject* O); \
	LEARNINGAGENTSTRAINING_API static bool Execute_IsEntityEnabled(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsEntityInterface_h_46_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsEntityInterface_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsEntityInterface_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsEntityInterface_h_49_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsEntityInterface_h_49_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsEntityInterface;

// ********** End Interface ULearningAgentsEntityInterface *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsEntityInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
