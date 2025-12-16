// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContextualAnimSceneActorComponent.h"

#ifdef CONTEXTUALANIMATION_ContextualAnimSceneActorComponent_generated_h
#error "ContextualAnimSceneActorComponent.generated.h already included, missing '#pragma once' in ContextualAnimSceneActorComponent.h"
#endif
#define CONTEXTUALANIMATION_ContextualAnimSceneActorComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAnimMontage;
class UContextualAnimSceneActorComponent;
class USkinnedMeshComponent;
struct FBranchingPointNotifyPayload;
struct FContextualAnimIKTarget;
struct FContextualAnimSceneBindings;

// ********** Begin Delegate FContextualAnimSceneActorCompDelegate *********************************
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_18_DELEGATE \
CONTEXTUALANIMATION_API void FContextualAnimSceneActorCompDelegate_DelegateWrapper(const FMulticastScriptDelegate& ContextualAnimSceneActorCompDelegate, UContextualAnimSceneActorComponent* SceneActorComponent);


// ********** End Delegate FContextualAnimSceneActorCompDelegate ***********************************

// ********** Begin Delegate FContextualAnimPlayMontageNotifyBeginDelegate *************************
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_19_DELEGATE \
CONTEXTUALANIMATION_API void FContextualAnimPlayMontageNotifyBeginDelegate_DelegateWrapper(const FMulticastScriptDelegate& ContextualAnimPlayMontageNotifyBeginDelegate, UContextualAnimSceneActorComponent* SceneActorComponent, FName NotifyName);


// ********** End Delegate FContextualAnimPlayMontageNotifyBeginDelegate ***************************

// ********** Begin Delegate FContextualAnimOnMontageBlendingOutDelegate ***************************
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_20_DELEGATE \
CONTEXTUALANIMATION_API void FContextualAnimOnMontageBlendingOutDelegate_DelegateWrapper(const FMulticastScriptDelegate& ContextualAnimOnMontageBlendingOutDelegate, UContextualAnimSceneActorComponent* SceneComponent, const UAnimMontage* BlendingOutMontage, bool bInterrupted);


// ********** End Delegate FContextualAnimOnMontageBlendingOutDelegate *****************************

// ********** Begin ScriptStruct FContextualAnimWarpTarget *****************************************
struct Z_Construct_UScriptStruct_FContextualAnimWarpTarget_Statics;
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContextualAnimWarpTarget_Statics; \
	CONTEXTUALANIMATION_API static class UScriptStruct* StaticStruct();


struct FContextualAnimWarpTarget;
// ********** End ScriptStruct FContextualAnimWarpTarget *******************************************

// ********** Begin ScriptStruct FContextualAnimRepData ********************************************
struct Z_Construct_UScriptStruct_FContextualAnimRepData_Statics;
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContextualAnimRepData_Statics; \
	CONTEXTUALANIMATION_API static class UScriptStruct* StaticStruct();


struct FContextualAnimRepData;
// ********** End ScriptStruct FContextualAnimRepData **********************************************

// ********** Begin ScriptStruct FContextualAnimRepBindingsData ************************************
struct Z_Construct_UScriptStruct_FContextualAnimRepBindingsData_Statics;
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContextualAnimRepBindingsData_Statics; \
	CONTEXTUALANIMATION_API static class UScriptStruct* StaticStruct(); \
	typedef FContextualAnimRepData Super;


struct FContextualAnimRepBindingsData;
// ********** End ScriptStruct FContextualAnimRepBindingsData **************************************

// ********** Begin ScriptStruct FContextualAnimRepLateJoinData ************************************
struct Z_Construct_UScriptStruct_FContextualAnimRepLateJoinData_Statics;
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_91_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContextualAnimRepLateJoinData_Statics; \
	CONTEXTUALANIMATION_API static class UScriptStruct* StaticStruct(); \
	typedef FContextualAnimRepData Super;


struct FContextualAnimRepLateJoinData;
// ********** End ScriptStruct FContextualAnimRepLateJoinData **************************************

// ********** Begin ScriptStruct FContextualAnimRepTransitionData **********************************
struct Z_Construct_UScriptStruct_FContextualAnimRepTransitionData_Statics;
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_121_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContextualAnimRepTransitionData_Statics; \
	CONTEXTUALANIMATION_API static class UScriptStruct* StaticStruct(); \
	typedef FContextualAnimRepData Super;


struct FContextualAnimRepTransitionData;
// ********** End ScriptStruct FContextualAnimRepTransitionData ************************************

// ********** Begin Class UContextualAnimSceneActorComponent ***************************************
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_156_RPC_WRAPPERS_NO_PURE_DECLS \
	CONTEXTUALANIMATION_API virtual bool ServerEarlyOutContextualAnimScene_Validate(bool ); \
	CONTEXTUALANIMATION_API virtual void ServerEarlyOutContextualAnimScene_Implementation(bool bStopEveryone); \
	CONTEXTUALANIMATION_API virtual bool ServerStartContextualAnimScene_Validate(FContextualAnimSceneBindings const& ); \
	CONTEXTUALANIMATION_API virtual void ServerStartContextualAnimScene_Implementation(FContextualAnimSceneBindings const& InBindings); \
	DECLARE_FUNCTION(execServerEarlyOutContextualAnimScene); \
	DECLARE_FUNCTION(execServerStartContextualAnimScene); \
	DECLARE_FUNCTION(execOnPlayMontageNotifyBegin); \
	DECLARE_FUNCTION(execOnMontageBlendingOut); \
	DECLARE_FUNCTION(execOnRep_TransitionData); \
	DECLARE_FUNCTION(execOnRep_RepTransitionSingleActor); \
	DECLARE_FUNCTION(execOnRep_LateJoinData); \
	DECLARE_FUNCTION(execOnRep_Bindings); \
	DECLARE_FUNCTION(execOnTickPose); \
	DECLARE_FUNCTION(execOnIgnoredActorEndPlay); \
	DECLARE_FUNCTION(execEarlyOutContextualAnimScene); \
	DECLARE_FUNCTION(execTransitionSingleActor); \
	DECLARE_FUNCTION(execTransitionContextualAnimSceneToSpecificSet); \
	DECLARE_FUNCTION(execTransitionContextualAnimScene); \
	DECLARE_FUNCTION(execLateJoinContextualAnimScene); \
	DECLARE_FUNCTION(execStartContextualAnimScene); \
	DECLARE_FUNCTION(execGetIKTargetByGoalName); \
	DECLARE_FUNCTION(execGetIKTargets); \
	DECLARE_FUNCTION(execOnLeftScene); \
	DECLARE_FUNCTION(execOnJoinedScene); \
	DECLARE_FUNCTION(execIsInActiveScene); \
	DECLARE_FUNCTION(execGetBindings);


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_156_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics;
CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneActorComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_156_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContextualAnimSceneActorComponent(); \
	friend struct ::Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTEXTUALANIMATION_API UClass* ::Z_Construct_UClass_UContextualAnimSceneActorComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UContextualAnimSceneActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ContextualAnimation"), Z_Construct_UClass_UContextualAnimSceneActorComponent_NoRegister) \
	DECLARE_SERIALIZER(UContextualAnimSceneActorComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UContextualAnimSceneActorComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RepBindings=NETFIELD_REP_START, \
		RepLateJoinData, \
		RepTransitionData, \
		RepTransitionSingleActorData, \
		NETFIELD_REP_END=RepTransitionSingleActorData	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(CONTEXTUALANIMATION_API)


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_156_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UContextualAnimSceneActorComponent(UContextualAnimSceneActorComponent&&) = delete; \
	UContextualAnimSceneActorComponent(const UContextualAnimSceneActorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTEXTUALANIMATION_API, UContextualAnimSceneActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimSceneActorComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimSceneActorComponent) \
	CONTEXTUALANIMATION_API virtual ~UContextualAnimSceneActorComponent();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_153_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_156_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_156_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_156_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_156_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_156_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UContextualAnimSceneActorComponent;

// ********** End Class UContextualAnimSceneActorComponent *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
