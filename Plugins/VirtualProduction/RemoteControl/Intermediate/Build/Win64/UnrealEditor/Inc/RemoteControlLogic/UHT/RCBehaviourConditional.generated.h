// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Behaviour/Builtin/Conditional/RCBehaviourConditional.h"

#ifdef REMOTECONTROLLOGIC_RCBehaviourConditional_generated_h
#error "RCBehaviourConditional.generated.h already included, missing '#pragma once' in RCBehaviourConditional.h"
#endif
#define REMOTECONTROLLOGIC_RCBehaviourConditional_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRCBehaviourCondition *********************************************
struct Z_Construct_UScriptStruct_FRCBehaviourCondition_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditional_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRCBehaviourCondition_Statics; \
	REMOTECONTROLLOGIC_API static class UScriptStruct* StaticStruct();


struct FRCBehaviourCondition;
// ********** End ScriptStruct FRCBehaviourCondition ***********************************************

// ********** Begin Class URCBehaviourConditional **************************************************
struct Z_Construct_UClass_URCBehaviourConditional_Statics;
REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviourConditional_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditional_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCBehaviourConditional(); \
	friend struct ::Z_Construct_UClass_URCBehaviourConditional_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLLOGIC_API UClass* ::Z_Construct_UClass_URCBehaviourConditional_NoRegister(); \
public: \
	DECLARE_CLASS2(URCBehaviourConditional, URCBehaviour, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControlLogic"), Z_Construct_UClass_URCBehaviourConditional_NoRegister) \
	DECLARE_SERIALIZER(URCBehaviourConditional)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditional_h_60_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URCBehaviourConditional(URCBehaviourConditional&&) = delete; \
	URCBehaviourConditional(const URCBehaviourConditional&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCBehaviourConditional); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCBehaviourConditional); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URCBehaviourConditional) \
	NO_API virtual ~URCBehaviourConditional();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditional_h_57_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditional_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditional_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditional_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URCBehaviourConditional;

// ********** End Class URCBehaviourConditional ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditional_h

// ********** Begin Enum ERCBehaviourConditionType *************************************************
#define FOREACH_ENUM_ERCBEHAVIOURCONDITIONTYPE(op) \
	op(ERCBehaviourConditionType::IsEqual) \
	op(ERCBehaviourConditionType::IsGreaterThan) \
	op(ERCBehaviourConditionType::IsLesserThan) \
	op(ERCBehaviourConditionType::IsGreaterThanOrEqualTo) \
	op(ERCBehaviourConditionType::IsLesserThanOrEqualTo) \
	op(ERCBehaviourConditionType::Else) \
	op(ERCBehaviourConditionType::None) 

enum class ERCBehaviourConditionType : uint8;
template<> struct TIsUEnumClass<ERCBehaviourConditionType> { enum { Value = true }; };
template<> REMOTECONTROLLOGIC_NON_ATTRIBUTED_API UEnum* StaticEnum<ERCBehaviourConditionType>();
// ********** End Enum ERCBehaviourConditionType ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
