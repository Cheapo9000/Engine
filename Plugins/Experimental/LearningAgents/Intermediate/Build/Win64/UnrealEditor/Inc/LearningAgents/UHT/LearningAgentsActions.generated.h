// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsActions.h"

#ifdef LEARNINGAGENTS_LearningAgentsActions_generated_h
#error "LearningAgentsActions.generated.h already included, missing '#pragma once' in LearningAgentsActions.h"
#endif
#define LEARNINGAGENTS_LearningAgentsActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEnum;
class ULearningAgentsActionModifier;
class ULearningAgentsActionObject;
class ULearningAgentsActionSchema;
class ULearningAgentsManagerListener;
enum class ELearningAgentsActivationFunction : uint8;
enum class ELearningAgentsEitherAction : uint8;
enum class ELearningAgentsOptionalAction : uint8;
struct FLearningAgentsActionModifierElement;
struct FLearningAgentsActionObjectElement;
struct FLearningAgentsActionSchemaElement;
struct FLinearColor;

// ********** Begin ScriptStruct FLearningAgentsActionSchemaElement ********************************
struct Z_Construct_UScriptStruct_FLearningAgentsActionSchemaElement_Statics;
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLearningAgentsActionSchemaElement_Statics; \
	LEARNINGAGENTS_API static class UScriptStruct* StaticStruct();


struct FLearningAgentsActionSchemaElement;
// ********** End ScriptStruct FLearningAgentsActionSchemaElement **********************************

// ********** Begin ScriptStruct FLearningAgentsActionObjectElement ********************************
struct Z_Construct_UScriptStruct_FLearningAgentsActionObjectElement_Statics;
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLearningAgentsActionObjectElement_Statics; \
	LEARNINGAGENTS_API static class UScriptStruct* StaticStruct();


struct FLearningAgentsActionObjectElement;
// ********** End ScriptStruct FLearningAgentsActionObjectElement **********************************

// ********** Begin ScriptStruct FLearningAgentsActionModifierElement ******************************
struct Z_Construct_UScriptStruct_FLearningAgentsActionModifierElement_Statics;
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLearningAgentsActionModifierElement_Statics; \
	LEARNINGAGENTS_API static class UScriptStruct* StaticStruct();


struct FLearningAgentsActionModifierElement;
// ********** End ScriptStruct FLearningAgentsActionModifierElement ********************************

// ********** Begin Class ULearningAgentsActionSchema **********************************************
struct Z_Construct_UClass_ULearningAgentsActionSchema_Statics;
LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsActionSchema_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsActionSchema(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsActionSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTS_API UClass* ::Z_Construct_UClass_ULearningAgentsActionSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsActionSchema, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgents"), Z_Construct_UClass_ULearningAgentsActionSchema_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsActionSchema)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_97_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEARNINGAGENTS_API ULearningAgentsActionSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsActionSchema(ULearningAgentsActionSchema&&) = delete; \
	ULearningAgentsActionSchema(const ULearningAgentsActionSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEARNINGAGENTS_API, ULearningAgentsActionSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsActionSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULearningAgentsActionSchema) \
	LEARNINGAGENTS_API virtual ~ULearningAgentsActionSchema();


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_94_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_97_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsActionSchema;

// ********** End Class ULearningAgentsActionSchema ************************************************

// ********** Begin Class ULearningAgentsActionObject **********************************************
struct Z_Construct_UClass_ULearningAgentsActionObject_Statics;
LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsActionObject_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_112_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsActionObject(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsActionObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTS_API UClass* ::Z_Construct_UClass_ULearningAgentsActionObject_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsActionObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgents"), Z_Construct_UClass_ULearningAgentsActionObject_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsActionObject)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_112_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEARNINGAGENTS_API ULearningAgentsActionObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsActionObject(ULearningAgentsActionObject&&) = delete; \
	ULearningAgentsActionObject(const ULearningAgentsActionObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEARNINGAGENTS_API, ULearningAgentsActionObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsActionObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULearningAgentsActionObject) \
	LEARNINGAGENTS_API virtual ~ULearningAgentsActionObject();


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_109_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_112_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_112_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_112_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsActionObject;

// ********** End Class ULearningAgentsActionObject ************************************************

// ********** Begin Class ULearningAgentsActionModifier ********************************************
struct Z_Construct_UClass_ULearningAgentsActionModifier_Statics;
LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsActionModifier_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_127_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsActionModifier(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsActionModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTS_API UClass* ::Z_Construct_UClass_ULearningAgentsActionModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsActionModifier, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgents"), Z_Construct_UClass_ULearningAgentsActionModifier_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsActionModifier)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_127_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEARNINGAGENTS_API ULearningAgentsActionModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsActionModifier(ULearningAgentsActionModifier&&) = delete; \
	ULearningAgentsActionModifier(const ULearningAgentsActionModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEARNINGAGENTS_API, ULearningAgentsActionModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsActionModifier); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULearningAgentsActionModifier) \
	LEARNINGAGENTS_API virtual ~ULearningAgentsActionModifier();


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_124_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_127_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_127_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_127_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsActionModifier;

// ********** End Class ULearningAgentsActionModifier **********************************************

// ********** Begin Class ULearningAgentsActions ***************************************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_153_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execGetNamedInclusiveDiscreteAction); \
	DECLARE_FUNCTION(execGetNamedInclusiveDiscreteActionNum); \
	DECLARE_FUNCTION(execGetInclusiveDiscreteAction); \
	DECLARE_FUNCTION(execGetInclusiveDiscreteActionNum); \
	DECLARE_FUNCTION(execGetNamedExclusiveDiscreteAction); \
	DECLARE_FUNCTION(execGetExclusiveDiscreteAction); \
	DECLARE_FUNCTION(execGetContinuousAction); \
	DECLARE_FUNCTION(execGetContinuousActionNum); \
	DECLARE_FUNCTION(execGetNullAction); \
	DECLARE_FUNCTION(execMakeDirectionActionModifier); \
	DECLARE_FUNCTION(execMakeVelocityActionModifier); \
	DECLARE_FUNCTION(execMakeAngleActionModifierRadians); \
	DECLARE_FUNCTION(execMakeAngleActionModifier); \
	DECLARE_FUNCTION(execMakeScaleActionModifier); \
	DECLARE_FUNCTION(execMakeLocationActionModifier); \
	DECLARE_FUNCTION(execMakeFloatActionModifier); \
	DECLARE_FUNCTION(execMakeBoolActionModifier); \
	DECLARE_FUNCTION(execMakeEncodingActionModifier); \
	DECLARE_FUNCTION(execMakeEitherActionModifier); \
	DECLARE_FUNCTION(execMakeOptionalActionModifier); \
	DECLARE_FUNCTION(execMakeBitmaskActionModifier); \
	DECLARE_FUNCTION(execMakeEnumActionModifier); \
	DECLARE_FUNCTION(execMakePairActionModifier); \
	DECLARE_FUNCTION(execMakeStaticArrayActionModifier); \
	DECLARE_FUNCTION(execMakeInclusiveUnionActionModifierFromArrays); \
	DECLARE_FUNCTION(execMakeInclusiveUnionActionModifier); \
	DECLARE_FUNCTION(execMakeExclusiveUnionActionModifierFromArrays); \
	DECLARE_FUNCTION(execMakeExclusiveUnionActionModifier); \
	DECLARE_FUNCTION(execMakeStructActionModifierFromArrays); \
	DECLARE_FUNCTION(execMakeStructActionModifier); \
	DECLARE_FUNCTION(execMakeNamedInclusiveDiscreteActionModifier); \
	DECLARE_FUNCTION(execMakeInclusiveDiscreteActionModifier); \
	DECLARE_FUNCTION(execMakeNamedExclusiveDiscreteActionModifier); \
	DECLARE_FUNCTION(execMakeExclusiveDiscreteActionModifier); \
	DECLARE_FUNCTION(execMakeContinuousActionModifier); \
	DECLARE_FUNCTION(execMakeNullActionModifier); \
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
	DECLARE_FUNCTION(execMakeNamedInclusiveDiscreteAction); \
	DECLARE_FUNCTION(execMakeInclusiveDiscreteAction); \
	DECLARE_FUNCTION(execMakeNamedExclusiveDiscreteAction); \
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
	DECLARE_FUNCTION(execSpecifyNamedInclusiveDiscreteAction); \
	DECLARE_FUNCTION(execSpecifyInclusiveDiscreteAction); \
	DECLARE_FUNCTION(execSpecifyNamedExclusiveDiscreteAction); \
	DECLARE_FUNCTION(execSpecifyExclusiveDiscreteAction); \
	DECLARE_FUNCTION(execSpecifyContinuousAction); \
	DECLARE_FUNCTION(execSpecifyNullAction); \
	DECLARE_FUNCTION(execLogAction); \
	DECLARE_FUNCTION(execValidateActionModifierMatchesSchema); \
	DECLARE_FUNCTION(execValidateActionObjectMatchesSchema);


struct Z_Construct_UClass_ULearningAgentsActions_Statics;
LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsActions_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_153_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsActions(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsActions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTS_API UClass* ::Z_Construct_UClass_ULearningAgentsActions_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsActions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgents"), Z_Construct_UClass_ULearningAgentsActions_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsActions)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_153_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEARNINGAGENTS_API ULearningAgentsActions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsActions(ULearningAgentsActions&&) = delete; \
	ULearningAgentsActions(const ULearningAgentsActions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEARNINGAGENTS_API, ULearningAgentsActions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsActions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULearningAgentsActions) \
	LEARNINGAGENTS_API virtual ~ULearningAgentsActions();


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_150_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_153_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_153_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_153_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h_153_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsActions;

// ********** End Class ULearningAgentsActions *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsActions_h

// ********** Begin Enum ELearningAgentsEitherAction ***********************************************
#define FOREACH_ENUM_ELEARNINGAGENTSEITHERACTION(op) \
	op(ELearningAgentsEitherAction::A) \
	op(ELearningAgentsEitherAction::B) 

enum class ELearningAgentsEitherAction : uint8;
template<> struct TIsUEnumClass<ELearningAgentsEitherAction> { enum { Value = true }; };
template<> LEARNINGAGENTS_NON_ATTRIBUTED_API UEnum* StaticEnum<ELearningAgentsEitherAction>();
// ********** End Enum ELearningAgentsEitherAction *************************************************

// ********** Begin Enum ELearningAgentsOptionalAction *********************************************
#define FOREACH_ENUM_ELEARNINGAGENTSOPTIONALACTION(op) \
	op(ELearningAgentsOptionalAction::Null) \
	op(ELearningAgentsOptionalAction::Valid) 

enum class ELearningAgentsOptionalAction : uint8;
template<> struct TIsUEnumClass<ELearningAgentsOptionalAction> { enum { Value = true }; };
template<> LEARNINGAGENTS_NON_ATTRIBUTED_API UEnum* StaticEnum<ELearningAgentsOptionalAction>();
// ********** End Enum ELearningAgentsOptionalAction ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
