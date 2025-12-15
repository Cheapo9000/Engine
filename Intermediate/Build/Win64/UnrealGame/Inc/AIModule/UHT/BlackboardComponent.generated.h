// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/BlackboardComponent.h"

#ifdef AIMODULE_BlackboardComponent_generated_h
#error "BlackboardComponent.generated.h already included, missing '#pragma once' in BlackboardComponent.h"
#endif
#define AIMODULE_BlackboardComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UObject;

// ********** Begin Class UBlackboardComponent *****************************************************
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearValue); \
	DECLARE_FUNCTION(execGetRotationFromEntry); \
	DECLARE_FUNCTION(execGetLocationFromEntry); \
	DECLARE_FUNCTION(execIsVectorValueSet); \
	DECLARE_FUNCTION(execSetValueAsRotator); \
	DECLARE_FUNCTION(execSetValueAsVector); \
	DECLARE_FUNCTION(execSetValueAsName); \
	DECLARE_FUNCTION(execSetValueAsString); \
	DECLARE_FUNCTION(execSetValueAsBool); \
	DECLARE_FUNCTION(execSetValueAsFloat); \
	DECLARE_FUNCTION(execSetValueAsInt); \
	DECLARE_FUNCTION(execSetValueAsEnum); \
	DECLARE_FUNCTION(execSetValueAsClass); \
	DECLARE_FUNCTION(execSetValueAsObject); \
	DECLARE_FUNCTION(execGetValueAsRotator); \
	DECLARE_FUNCTION(execGetValueAsVector); \
	DECLARE_FUNCTION(execGetValueAsName); \
	DECLARE_FUNCTION(execGetValueAsString); \
	DECLARE_FUNCTION(execGetValueAsBool); \
	DECLARE_FUNCTION(execGetValueAsFloat); \
	DECLARE_FUNCTION(execGetValueAsInt); \
	DECLARE_FUNCTION(execGetValueAsEnum); \
	DECLARE_FUNCTION(execGetValueAsClass); \
	DECLARE_FUNCTION(execGetValueAsObject);


struct Z_Construct_UClass_UBlackboardComponent_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlackboardComponent(); \
	friend struct ::Z_Construct_UClass_UBlackboardComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UBlackboardComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlackboardComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UBlackboardComponent_NoRegister) \
	DECLARE_SERIALIZER(UBlackboardComponent)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlackboardComponent(UBlackboardComponent&&) = delete; \
	UBlackboardComponent(const UBlackboardComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBlackboardComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackboardComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackboardComponent) \
	AIMODULE_API virtual ~UBlackboardComponent();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_41_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlackboardComponent;

// ********** End Class UBlackboardComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
