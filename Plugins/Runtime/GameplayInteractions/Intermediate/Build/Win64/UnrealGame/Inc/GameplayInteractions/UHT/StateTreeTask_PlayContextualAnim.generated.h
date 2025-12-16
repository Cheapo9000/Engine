// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTree/StateTreeTask_PlayContextualAnim.h"

#ifdef GAMEPLAYINTERACTIONSMODULE_StateTreeTask_PlayContextualAnim_generated_h
#error "StateTreeTask_PlayContextualAnim.generated.h already included, missing '#pragma once' in StateTreeTask_PlayContextualAnim.h"
#endif
#define GAMEPLAYINTERACTIONSMODULE_StateTreeTask_PlayContextualAnim_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
struct FBranchingPointNotifyPayload;

// ********** Begin Class UStateTreeTask_PlayContextualAnim_InstanceData ***************************
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnNotifyBeginReceived); \
	DECLARE_FUNCTION(execOnMontageEnded);


struct Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics;
GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeTask_PlayContextualAnim_InstanceData(); \
	friend struct ::Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYINTERACTIONSMODULE_API UClass* ::Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateTreeTask_PlayContextualAnim_InstanceData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayInteractionsModule"), Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_NoRegister) \
	DECLARE_SERIALIZER(UStateTreeTask_PlayContextualAnim_InstanceData)


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStateTreeTask_PlayContextualAnim_InstanceData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateTreeTask_PlayContextualAnim_InstanceData(UStateTreeTask_PlayContextualAnim_InstanceData&&) = delete; \
	UStateTreeTask_PlayContextualAnim_InstanceData(const UStateTreeTask_PlayContextualAnim_InstanceData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateTreeTask_PlayContextualAnim_InstanceData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeTask_PlayContextualAnim_InstanceData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeTask_PlayContextualAnim_InstanceData) \
	NO_API virtual ~UStateTreeTask_PlayContextualAnim_InstanceData();


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_28_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateTreeTask_PlayContextualAnim_InstanceData;

// ********** End Class UStateTreeTask_PlayContextualAnim_InstanceData *****************************

// ********** Begin ScriptStruct FStateTreeTask_PlayContextualAnim *********************************
struct Z_Construct_UScriptStruct_FStateTreeTask_PlayContextualAnim_Statics;
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_145_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStateTreeTask_PlayContextualAnim_Statics; \
	GAMEPLAYINTERACTIONSMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FStateTreeTaskCommonBase Super;


struct FStateTreeTask_PlayContextualAnim;
// ********** End ScriptStruct FStateTreeTask_PlayContextualAnim ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h

// ********** Begin Enum EPlayContextualAnimExecutionMethod ****************************************
#define FOREACH_ENUM_EPLAYCONTEXTUALANIMEXECUTIONMETHOD(op) \
	op(EPlayContextualAnimExecutionMethod::StartInteraction) \
	op(EPlayContextualAnimExecutionMethod::JoinInteraction) \
	op(EPlayContextualAnimExecutionMethod::TransitionAllActors) \
	op(EPlayContextualAnimExecutionMethod::TransitionSingleActor) 

enum class EPlayContextualAnimExecutionMethod : uint8;
template<> struct TIsUEnumClass<EPlayContextualAnimExecutionMethod> { enum { Value = true }; };
template<> GAMEPLAYINTERACTIONSMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPlayContextualAnimExecutionMethod>();
// ********** End Enum EPlayContextualAnimExecutionMethod ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
