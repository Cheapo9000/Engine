// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Navigation/PathFollowingComponent.h"

#ifdef AIMODULE_PathFollowingComponent_generated_h
#error "PathFollowingComponent.generated.h already included, missing '#pragma once' in PathFollowingComponent.h"
#endif
#define AIMODULE_PathFollowingComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ANavigationData;
struct FHitResult;

// ********** Begin Class UPathFollowingComponent **************************************************
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_218_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnNavDataRegistered); \
	DECLARE_FUNCTION(execGetPathDestination); \
	DECLARE_FUNCTION(execGetPathActionType); \
	DECLARE_FUNCTION(execOnActorBump);


struct Z_Construct_UClass_UPathFollowingComponent_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_218_INCLASS \
private: \
	static void StaticRegisterNativesUPathFollowingComponent(); \
	friend struct ::Z_Construct_UClass_UPathFollowingComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UPathFollowingComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPathFollowingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UPathFollowingComponent_NoRegister) \
	DECLARE_SERIALIZER(UPathFollowingComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UPathFollowingComponent*>(this); }


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_218_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UPathFollowingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPathFollowingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UPathFollowingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPathFollowingComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPathFollowingComponent(UPathFollowingComponent&&) = delete; \
	UPathFollowingComponent(const UPathFollowingComponent&) = delete; \
	AIMODULE_API virtual ~UPathFollowingComponent();


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_215_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_218_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_218_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_218_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_218_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPathFollowingComponent;

// ********** End Class UPathFollowingComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h

// ********** Begin Enum EPathFollowingStatus ******************************************************
#define FOREACH_ENUM_EPATHFOLLOWINGSTATUS(op) \
	op(EPathFollowingStatus::Idle) \
	op(EPathFollowingStatus::Waiting) \
	op(EPathFollowingStatus::Paused) \
	op(EPathFollowingStatus::Moving) 

namespace EPathFollowingStatus { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPathFollowingStatus::Type>();
// ********** End Enum EPathFollowingStatus ********************************************************

// ********** Begin Enum EPathFollowingResult ******************************************************
#define FOREACH_ENUM_EPATHFOLLOWINGRESULT(op) \
	op(EPathFollowingResult::Success) \
	op(EPathFollowingResult::Blocked) \
	op(EPathFollowingResult::OffPath) \
	op(EPathFollowingResult::Aborted) \
	op(EPathFollowingResult::Skipped_DEPRECATED) \
	op(EPathFollowingResult::Invalid) 

namespace EPathFollowingResult { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPathFollowingResult::Type>();
// ********** End Enum EPathFollowingResult ********************************************************

// ********** Begin Enum EPathFollowingAction ******************************************************
#define FOREACH_ENUM_EPATHFOLLOWINGACTION(op) \
	op(EPathFollowingAction::Error) \
	op(EPathFollowingAction::NoMove) \
	op(EPathFollowingAction::DirectMove) \
	op(EPathFollowingAction::PartialPath) \
	op(EPathFollowingAction::PathToGoal) 

namespace EPathFollowingAction { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPathFollowingAction::Type>();
// ********** End Enum EPathFollowingAction ********************************************************

// ********** Begin Enum EPathFollowingRequestResult ***********************************************
#define FOREACH_ENUM_EPATHFOLLOWINGREQUESTRESULT(op) \
	op(EPathFollowingRequestResult::Failed) \
	op(EPathFollowingRequestResult::AlreadyAtGoal) \
	op(EPathFollowingRequestResult::RequestSuccessful) 

namespace EPathFollowingRequestResult { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPathFollowingRequestResult::Type>();
// ********** End Enum EPathFollowingRequestResult *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
