// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsActions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
 struct FLearningAgentsActionObjectElement;
 struct FLearningAgentsActionSchemaElement;
class UEnum;
class ULearningAgentsActionObject;
class ULearningAgentsActionSchema;
class ULearningAgentsManagerListener;
enum class ELearningAgentsActivationFunction : uint8;
enum class ELearningAgentsEitherAction : uint8;
enum class ELearningAgentsOptionalAction : uint8;
struct FLearningAgentsActionObjectElement;
struct FLearningAgentsActionSchemaElement;
struct FLinearColor;
#ifdef LEARNINGAGENTS_LearningAgentsActions_generated_h
#error "LearningAgentsActions.generated.h already included, missing '#pragma once' in LearningAgentsActions.h"
#endif
#define LEARNINGAGENTS_LearningAgentsActions_generated_h

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLearningAgentsActionSchemaElement_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LEARNINGAGENTS_API UScriptStruct* StaticStruct<struct FLearningAgentsActionSchemaElement>();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLearningAgentsActionObjectElement_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LEARNINGAGENTS_API UScriptStruct* StaticStruct<struct FLearningAgentsActionObjectElement>();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsActionSchema(); \
	friend struct Z_Construct_UClass_ULearningAgentsActionSchema_Statics; \
public: \
	DECLARE_CLASS(ULearningAgentsActionSchema, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgents"), NO_API) \
	DECLARE_SERIALIZER(ULearningAgentsActionSchema)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULearningAgentsActionSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULearningAgentsActionSchema(ULearningAgentsActionSchema&&); \
	ULearningAgentsActionSchema(const ULearningAgentsActionSchema&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULearningAgentsActionSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsActionSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULearningAgentsActionSchema) \
	NO_API virtual ~ULearningAgentsActionSchema();


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_59_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGAGENTS_API UClass* StaticClass<class ULearningAgentsActionSchema>();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsActionObject(); \
	friend struct Z_Construct_UClass_ULearningAgentsActionObject_Statics; \
public: \
	DECLARE_CLASS(ULearningAgentsActionObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgents"), NO_API) \
	DECLARE_SERIALIZER(ULearningAgentsActionObject)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULearningAgentsActionObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULearningAgentsActionObject(ULearningAgentsActionObject&&); \
	ULearningAgentsActionObject(const ULearningAgentsActionObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULearningAgentsActionObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsActionObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULearningAgentsActionObject) \
	NO_API virtual ~ULearningAgentsActionObject();


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_74_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_77_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGAGENTS_API UClass* StaticClass<class ULearningAgentsActionObject>();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDirectionAction); \
	DECLARE_FUNCTION(execGetVelocityAction); \
	DECLARE_FUNCTION(execGetAngleActionRadians); \
	DECLARE_FUNCTION(execGetAngleAction); \
	DECLARE_FUNCTION(execGetTransformAction); \
	DECLARE_FUNCTION(execGetScaleAction); \
	DECLARE_FUNCTION(execGetRotationActionAsQuat); \
	DECLARE_FUNCTION(execGetRotationAction); \
	DECLARE_FUNCTION(execGetLocationAction); \
	DECLARE_FUNCTION(execGetFloatAction); \
	DECLARE_FUNCTION(execGetBoolAction); \
	DECLARE_FUNCTION(execGetEncodingAction); \
	DECLARE_FUNCTION(execGetEitherAction); \
	DECLARE_FUNCTION(execGetOptionalAction); \
	DECLARE_FUNCTION(execGetBitmaskAction); \
	DECLARE_FUNCTION(execGetEnumAction); \
	DECLARE_FUNCTION(execGetPairAction); \
	DECLARE_FUNCTION(execGetStaticArrayAction); \
	DECLARE_FUNCTION(execGetStaticArrayActionNum); \
	DECLARE_FUNCTION(execGetInclusiveUnionActionToArrays); \
	DECLARE_FUNCTION(execGetInclusiveUnionAction); \
	DECLARE_FUNCTION(execGetInclusiveUnionActionNum); \
	DECLARE_FUNCTION(execGetExclusiveUnionAction); \
	DECLARE_FUNCTION(execGetStructActionToArrays); \
	DECLARE_FUNCTION(execGetStructActionElement); \
	DECLARE_FUNCTION(execGetStructAction); \
	DECLARE_FUNCTION(execGetStructActionNum); \
	DECLARE_FUNCTION(execGetInclusiveDiscreteAction); \
	DECLARE_FUNCTION(execGetInclusiveDiscreteActionNum); \
	DECLARE_FUNCTION(execGetExclusiveDiscreteAction); \
	DECLARE_FUNCTION(execGetContinuousAction); \
	DECLARE_FUNCTION(execGetContinuousActionNum); \
	DECLARE_FUNCTION(execGetNullAction); \
	DECLARE_FUNCTION(execMakeDirectionAction); \
	DECLARE_FUNCTION(execMakeVelocityAction); \
	DECLARE_FUNCTION(execMakeAngleActionRadians); \
	DECLARE_FUNCTION(execMakeAngleAction); \
	DECLARE_FUNCTION(execMakeTransformAction); \
	DECLARE_FUNCTION(execMakeScaleAction); \
	DECLARE_FUNCTION(execMakeRotationActionFromQuat); \
	DECLARE_FUNCTION(execMakeRotationAction); \
	DECLARE_FUNCTION(execMakeLocationAction); \
	DECLARE_FUNCTION(execMakeFloatAction); \
	DECLARE_FUNCTION(execMakeBoolAction); \
	DECLARE_FUNCTION(execMakeEncodingAction); \
	DECLARE_FUNCTION(execMakeEitherBAction); \
	DECLARE_FUNCTION(execMakeEitherAAction); \
	DECLARE_FUNCTION(execMakeEitherAction); \
	DECLARE_FUNCTION(execMakeOptionalValidAction); \
	DECLARE_FUNCTION(execMakeOptionalNullAction); \
	DECLARE_FUNCTION(execMakeOptionalAction); \
	DECLARE_FUNCTION(execMakeBitmaskAction); \
	DECLARE_FUNCTION(execMakeEnumAction); \
	DECLARE_FUNCTION(execMakePairAction); \
	DECLARE_FUNCTION(execMakeStaticArrayAction); \
	DECLARE_FUNCTION(execMakeInclusiveUnionActionFromArrays); \
	DECLARE_FUNCTION(execMakeInclusiveUnionAction); \
	DECLARE_FUNCTION(execMakeExclusiveUnionAction); \
	DECLARE_FUNCTION(execMakeStructActionFromArrays); \
	DECLARE_FUNCTION(execMakeStructAction); \
	DECLARE_FUNCTION(execMakeInclusiveDiscreteAction); \
	DECLARE_FUNCTION(execMakeExclusiveDiscreteAction); \
	DECLARE_FUNCTION(execMakeContinuousAction); \
	DECLARE_FUNCTION(execMakeNullAction); \
	DECLARE_FUNCTION(execSpecifyDirectionAction); \
	DECLARE_FUNCTION(execSpecifyVelocityAction); \
	DECLARE_FUNCTION(execSpecifyAngleAction); \
	DECLARE_FUNCTION(execSpecifyTransformAction); \
	DECLARE_FUNCTION(execSpecifyScaleAction); \
	DECLARE_FUNCTION(execSpecifyRotationAction); \
	DECLARE_FUNCTION(execSpecifyLocationAction); \
	DECLARE_FUNCTION(execSpecifyFloatAction); \
	DECLARE_FUNCTION(execSpecifyBoolAction); \
	DECLARE_FUNCTION(execSpecifyEncodingAction); \
	DECLARE_FUNCTION(execSpecifyEitherAction); \
	DECLARE_FUNCTION(execSpecifyOptionalAction); \
	DECLARE_FUNCTION(execSpecifyBitmaskActionFromArray); \
	DECLARE_FUNCTION(execSpecifyBitmaskAction); \
	DECLARE_FUNCTION(execSpecifyEnumActionFromArray); \
	DECLARE_FUNCTION(execSpecifyEnumAction); \
	DECLARE_FUNCTION(execSpecifyPairAction); \
	DECLARE_FUNCTION(execSpecifyStaticArrayAction); \
	DECLARE_FUNCTION(execSpecifyInclusiveUnionActionFromArrays); \
	DECLARE_FUNCTION(execSpecifyInclusiveUnionAction); \
	DECLARE_FUNCTION(execSpecifyExclusiveUnionActionFromArrays); \
	DECLARE_FUNCTION(execSpecifyExclusiveUnionAction); \
	DECLARE_FUNCTION(execSpecifyStructActionFromArrays); \
	DECLARE_FUNCTION(execSpecifyStructAction); \
	DECLARE_FUNCTION(execSpecifyInclusiveDiscreteAction); \
	DECLARE_FUNCTION(execSpecifyExclusiveDiscreteAction); \
	DECLARE_FUNCTION(execSpecifyContinuousAction); \
	DECLARE_FUNCTION(execSpecifyNullAction); \
	DECLARE_FUNCTION(execLogAction); \
	DECLARE_FUNCTION(execValidateActionObjectMatchesSchema);


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_103_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsActions(); \
	friend struct Z_Construct_UClass_ULearningAgentsActions_Statics; \
public: \
	DECLARE_CLASS(ULearningAgentsActions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgents"), NO_API) \
	DECLARE_SERIALIZER(ULearningAgentsActions)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_103_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULearningAgentsActions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULearningAgentsActions(ULearningAgentsActions&&); \
	ULearningAgentsActions(const ULearningAgentsActions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULearningAgentsActions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsActions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULearningAgentsActions) \
	NO_API virtual ~ULearningAgentsActions();


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_100_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_103_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_103_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_103_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGAGENTS_API UClass* StaticClass<class ULearningAgentsActions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h


#define FOREACH_ENUM_ELEARNINGAGENTSEITHERACTION(op) \
	op(ELearningAgentsEitherAction::A) \
	op(ELearningAgentsEitherAction::B) 

enum class ELearningAgentsEitherAction : uint8;
template<> struct TIsUEnumClass<ELearningAgentsEitherAction> { enum { Value = true }; };
template<> LEARNINGAGENTS_API UEnum* StaticEnum<ELearningAgentsEitherAction>();

#define FOREACH_ENUM_ELEARNINGAGENTSOPTIONALACTION(op) \
	op(ELearningAgentsOptionalAction::Null) \
	op(ELearningAgentsOptionalAction::Valid) 

enum class ELearningAgentsOptionalAction : uint8;
template<> struct TIsUEnumClass<ELearningAgentsOptionalAction> { enum { Value = true }; };
template<> LEARNINGAGENTS_API UEnum* StaticEnum<ELearningAgentsOptionalAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
