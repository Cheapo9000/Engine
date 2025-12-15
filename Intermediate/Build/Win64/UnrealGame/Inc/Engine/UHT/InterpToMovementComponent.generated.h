// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/InterpToMovementComponent.h"

#ifdef ENGINE_InterpToMovementComponent_generated_h
#error "InterpToMovementComponent.generated.h already included, missing '#pragma once' in InterpToMovementComponent.h"
#endif
#define ENGINE_InterpToMovementComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;

// ********** Begin ScriptStruct FInterpControlPoint ***********************************************
struct Z_Construct_UScriptStruct_FInterpControlPoint_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInterpControlPoint_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FInterpControlPoint;
// ********** End ScriptStruct FInterpControlPoint *************************************************

// ********** Begin Delegate FOnInterpToReverseDelegate ********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_70_DELEGATE \
static ENGINE_API void FOnInterpToReverseDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnInterpToReverseDelegate, FHitResult const& ImpactResult, float Time);


// ********** End Delegate FOnInterpToReverseDelegate **********************************************

// ********** Begin Delegate FOnInterpToStopDelegate ***********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_71_DELEGATE \
static ENGINE_API void FOnInterpToStopDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnInterpToStopDelegate, FHitResult const& ImpactResult, float Time);


// ********** End Delegate FOnInterpToStopDelegate *************************************************

// ********** Begin Delegate FOnInterpToWaitBeginDelegate ******************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_72_DELEGATE \
static ENGINE_API void FOnInterpToWaitBeginDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnInterpToWaitBeginDelegate, FHitResult const& ImpactResult, float Time);


// ********** End Delegate FOnInterpToWaitBeginDelegate ********************************************

// ********** Begin Delegate FOnInterpToWaitEndDelegate ********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_73_DELEGATE \
static ENGINE_API void FOnInterpToWaitEndDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnInterpToWaitEndDelegate, FHitResult const& ImpactResult, float Time);


// ********** End Delegate FOnInterpToWaitEndDelegate **********************************************

// ********** Begin Delegate FOnInterpToResetDelegate **********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_74_DELEGATE \
static ENGINE_API void FOnInterpToResetDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnInterpToResetDelegate, FHitResult const& ImpactResult, float Time);


// ********** End Delegate FOnInterpToResetDelegate ************************************************

// ********** Begin Class UInterpToMovementComponent ***********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_68_RPC_WRAPPERS \
	DECLARE_FUNCTION(execResetControlPoints); \
	DECLARE_FUNCTION(execFinaliseControlPoints); \
	DECLARE_FUNCTION(execRestartMovement); \
	DECLARE_FUNCTION(execAddControlPointPosition); \
	DECLARE_FUNCTION(execStopSimulating);


struct Z_Construct_UClass_UInterpToMovementComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UInterpToMovementComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_68_INCLASS \
private: \
	static void StaticRegisterNativesUInterpToMovementComponent(); \
	friend struct ::Z_Construct_UClass_UInterpToMovementComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UInterpToMovementComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterpToMovementComponent, UMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UInterpToMovementComponent_NoRegister) \
	DECLARE_SERIALIZER(UInterpToMovementComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_68_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterpToMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpToMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterpToMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpToMovementComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterpToMovementComponent(UInterpToMovementComponent&&) = delete; \
	UInterpToMovementComponent(const UInterpToMovementComponent&) = delete; \
	ENGINE_API virtual ~UInterpToMovementComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_65_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_68_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_68_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterpToMovementComponent;

// ********** End Class UInterpToMovementComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h

// ********** Begin Enum EInterpToBehaviourType ****************************************************
#define FOREACH_ENUM_EINTERPTOBEHAVIOURTYPE(op) \
	op(EInterpToBehaviourType::OneShot) \
	op(EInterpToBehaviourType::OneShot_Reverse) \
	op(EInterpToBehaviourType::Loop_Reset) \
	op(EInterpToBehaviourType::PingPong) 

enum class EInterpToBehaviourType : uint8;
template<> struct TIsUEnumClass<EInterpToBehaviourType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterpToBehaviourType>();
// ********** End Enum EInterpToBehaviourType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
