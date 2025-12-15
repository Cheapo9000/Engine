// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayTasksComponent.h"

#ifdef GAMEPLAYTASKS_GameplayTasksComponent_generated_h
#error "GameplayTasksComponent.generated.h already included, missing '#pragma once' in GameplayTasksComponent.h"
#endif
#define GAMEPLAYTASKS_GameplayTasksComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IGameplayTaskOwnerInterface;
class UClass;
class UGameplayTask;
class UGameplayTaskResource;
enum class EGameplayTaskRunResult : uint8;
struct FGameplayResourceSet;

// ********** Begin Delegate FOnClaimedResourcesChangeSignature ************************************
#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_55_DELEGATE \
GAMEPLAYTASKS_API void FOnClaimedResourcesChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnClaimedResourcesChangeSignature, FGameplayResourceSet NewlyClaimed, FGameplayResourceSet FreshlyReleased);


// ********** End Delegate FOnClaimedResourcesChangeSignature **************************************

// ********** Begin Class UGameplayTasksComponent **************************************************
#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execK2_RunGameplayTask); \
	DECLARE_FUNCTION(execOnRep_SimulatedTasks);


struct Z_Construct_UClass_UGameplayTasksComponent_Statics;
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTasksComponent_NoRegister();

#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTasksComponent(); \
	friend struct ::Z_Construct_UClass_UGameplayTasksComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYTASKS_API UClass* ::Z_Construct_UClass_UGameplayTasksComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayTasksComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTasks"), Z_Construct_UClass_UGameplayTasksComponent_NoRegister) \
	DECLARE_SERIALIZER(UGameplayTasksComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayTasksComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SimulatedTasks=NETFIELD_REP_START, \
		NETFIELD_REP_END=SimulatedTasks	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(GAMEPLAYTASKS_API)


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_63_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayTasksComponent(UGameplayTasksComponent&&) = delete; \
	UGameplayTasksComponent(const UGameplayTasksComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTASKS_API, UGameplayTasksComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTasksComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTasksComponent) \
	GAMEPLAYTASKS_API virtual ~UGameplayTasksComponent();


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_60_PROLOG
#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_63_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayTasksComponent;

// ********** End Class UGameplayTasksComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h

// ********** Begin Enum EGameplayTaskRunResult ****************************************************
#define FOREACH_ENUM_EGAMEPLAYTASKRUNRESULT(op) \
	op(EGameplayTaskRunResult::Error) \
	op(EGameplayTaskRunResult::Failed) \
	op(EGameplayTaskRunResult::Success_Paused) \
	op(EGameplayTaskRunResult::Success_Active) \
	op(EGameplayTaskRunResult::Success_Finished) 

enum class EGameplayTaskRunResult : uint8;
template<> struct TIsUEnumClass<EGameplayTaskRunResult> { enum { Value = true }; };
template<> GAMEPLAYTASKS_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayTaskRunResult>();
// ********** End Enum EGameplayTaskRunResult ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
