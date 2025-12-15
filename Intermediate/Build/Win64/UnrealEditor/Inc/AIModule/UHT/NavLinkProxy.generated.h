// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Navigation/NavLinkProxy.h"

#ifdef AIMODULE_NavLinkProxy_generated_h
#error "NavLinkProxy.generated.h already included, missing '#pragma once' in NavLinkProxy.h"
#endif
#define AIMODULE_NavLinkProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Delegate FSmartLinkReachedSignature ********************************************
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_21_DELEGATE \
AIMODULE_API void FSmartLinkReachedSignature_DelegateWrapper(const FMulticastScriptDelegate& SmartLinkReachedSignature, AActor* MovingActor, FVector const& DestinationPoint);


// ********** End Delegate FSmartLinkReachedSignature **********************************************

// ********** Begin Class ANavLinkProxy ************************************************************
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_36_RPC_WRAPPERS \
	DECLARE_FUNCTION(execHasMovingAgents); \
	DECLARE_FUNCTION(execSetSmartLinkEnabled); \
	DECLARE_FUNCTION(execIsSmartLinkEnabled); \
	DECLARE_FUNCTION(execResumePathFollowing);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_36_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execCopyEndPointsFromSimpleLinkToSmartLink);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_36_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_36_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ANavLinkProxy_Statics;
AIMODULE_API UClass* Z_Construct_UClass_ANavLinkProxy_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_36_INCLASS \
private: \
	static void StaticRegisterNativesANavLinkProxy(); \
	friend struct ::Z_Construct_UClass_ANavLinkProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_ANavLinkProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(ANavLinkProxy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_ANavLinkProxy_NoRegister) \
	DECLARE_SERIALIZER(ANavLinkProxy) \
	virtual UObject* _getUObject() const override { return const_cast<ANavLinkProxy*>(this); }


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API ANavLinkProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavLinkProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, ANavLinkProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavLinkProxy); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANavLinkProxy(ANavLinkProxy&&) = delete; \
	ANavLinkProxy(const ANavLinkProxy&) = delete; \
	AIMODULE_API virtual ~ANavLinkProxy();


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_33_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_36_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_36_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_36_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_36_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANavLinkProxy;

// ********** End Class ANavLinkProxy **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
