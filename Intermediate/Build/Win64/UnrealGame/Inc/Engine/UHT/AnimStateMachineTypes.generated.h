// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimStateMachineTypes.h"

#ifdef ENGINE_AnimStateMachineTypes_generated_h
#error "AnimStateMachineTypes.generated.h already included, missing '#pragma once' in AnimStateMachineTypes.h"
#endif
#define ENGINE_AnimStateMachineTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimationTransitionRule ******************************************
struct Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_112_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimationTransitionRule;
// ********** End ScriptStruct FAnimationTransitionRule ********************************************

// ********** Begin ScriptStruct FAnimationStateBase ***********************************************
struct Z_Construct_UScriptStruct_FAnimationStateBase_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_139_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimationStateBase_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimationStateBase;
// ********** End ScriptStruct FAnimationStateBase *************************************************

// ********** Begin ScriptStruct FAnimationState ***************************************************
struct Z_Construct_UScriptStruct_FAnimationState_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_153_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimationState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimationStateBase Super;


struct FAnimationState;
// ********** End ScriptStruct FAnimationState *****************************************************

// ********** Begin ScriptStruct FAnimationTransitionBetweenStates *********************************
struct Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_188_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimationStateBase Super;


struct FAnimationTransitionBetweenStates;
// ********** End ScriptStruct FAnimationTransitionBetweenStates ***********************************

// ********** Begin ScriptStruct FBakedStateExitTransition *****************************************
struct Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_257_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBakedStateExitTransition;
// ********** End ScriptStruct FBakedStateExitTransition *******************************************

// ********** Begin ScriptStruct FBakedAnimationState **********************************************
struct Z_Construct_UScriptStruct_FBakedAnimationState_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_309_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBakedAnimationState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBakedAnimationState;
// ********** End ScriptStruct FBakedAnimationState ************************************************

// ********** Begin ScriptStruct FBakedAnimationStateMachine ***************************************
struct Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_365_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBakedAnimationStateMachine;
// ********** End ScriptStruct FBakedAnimationStateMachine *****************************************

// ********** Begin Class UAnimStateMachineTypes ***************************************************
struct Z_Construct_UClass_UAnimStateMachineTypes_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimStateMachineTypes_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_414_INCLASS \
private: \
	static void StaticRegisterNativesUAnimStateMachineTypes(); \
	friend struct ::Z_Construct_UClass_UAnimStateMachineTypes_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimStateMachineTypes_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimStateMachineTypes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimStateMachineTypes_NoRegister) \
	DECLARE_SERIALIZER(UAnimStateMachineTypes)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_414_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimStateMachineTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStateMachineTypes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimStateMachineTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStateMachineTypes); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimStateMachineTypes(UAnimStateMachineTypes&&) = delete; \
	UAnimStateMachineTypes(const UAnimStateMachineTypes&) = delete; \
	NO_API virtual ~UAnimStateMachineTypes();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_411_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_414_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_414_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_414_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimStateMachineTypes;

// ********** End Class UAnimStateMachineTypes *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h

// ********** Begin Enum ETransitionRequestQueueMode ***********************************************
#define FOREACH_ENUM_ETRANSITIONREQUESTQUEUEMODE(op) \
	op(ETransitionRequestQueueMode::Shared) \
	op(ETransitionRequestQueueMode::Unique) 

enum class ETransitionRequestQueueMode : uint8;
template<> struct TIsUEnumClass<ETransitionRequestQueueMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETransitionRequestQueueMode>();
// ********** End Enum ETransitionRequestQueueMode *************************************************

// ********** Begin Enum ETransitionRequestOverwriteMode *******************************************
#define FOREACH_ENUM_ETRANSITIONREQUESTOVERWRITEMODE(op) \
	op(ETransitionRequestOverwriteMode::Append) \
	op(ETransitionRequestOverwriteMode::Ignore) \
	op(ETransitionRequestOverwriteMode::Overwrite) 

enum class ETransitionRequestOverwriteMode : uint8;
template<> struct TIsUEnumClass<ETransitionRequestOverwriteMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETransitionRequestOverwriteMode>();
// ********** End Enum ETransitionRequestOverwriteMode *********************************************

// ********** Begin Enum ETransitionBlendMode ******************************************************
#define FOREACH_ENUM_ETRANSITIONBLENDMODE(op) \
	op(ETransitionBlendMode::TBM_Linear) \
	op(ETransitionBlendMode::TBM_Cubic) 

namespace ETransitionBlendMode { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETransitionBlendMode::Type>();
// ********** End Enum ETransitionBlendMode ********************************************************

// ********** Begin Enum ETransitionLogicType ******************************************************
#define FOREACH_ENUM_ETRANSITIONLOGICTYPE(op) \
	op(ETransitionLogicType::TLT_StandardBlend) \
	op(ETransitionLogicType::TLT_Inertialization) \
	op(ETransitionLogicType::TLT_Custom) 

namespace ETransitionLogicType { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETransitionLogicType::Type>();
// ********** End Enum ETransitionLogicType ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
