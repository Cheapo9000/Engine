// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseMovementComponent.h"

#ifdef NETWORKPREDICTIONEXTRAS_BaseMovementComponent_generated_h
#error "BaseMovementComponent.generated.h already included, missing '#pragma once' in BaseMovementComponent.h"
#endif
#define NETWORKPREDICTIONEXTRAS_BaseMovementComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APhysicsVolume;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class UBaseMovementComponent ***************************************************
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPhysicsVolumeChanged); \
	DECLARE_FUNCTION(execOnBeginOverlap);


struct Z_Construct_UClass_UBaseMovementComponent_Statics;
NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UBaseMovementComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseMovementComponent(); \
	friend struct ::Z_Construct_UClass_UBaseMovementComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETWORKPREDICTIONEXTRAS_API UClass* ::Z_Construct_UClass_UBaseMovementComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseMovementComponent, UNetworkPredictionComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPredictionExtras"), Z_Construct_UClass_UBaseMovementComponent_NoRegister) \
	DECLARE_SERIALIZER(UBaseMovementComponent)


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseMovementComponent(UBaseMovementComponent&&) = delete; \
	UBaseMovementComponent(const UBaseMovementComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseMovementComponent); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UBaseMovementComponent) \
	NO_API virtual ~UBaseMovementComponent();


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseMovementComponent;

// ********** End Class UBaseMovementComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
