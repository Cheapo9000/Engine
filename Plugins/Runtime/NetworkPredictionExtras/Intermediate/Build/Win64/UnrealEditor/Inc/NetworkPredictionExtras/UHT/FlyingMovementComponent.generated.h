// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FlyingMovementComponent.h"

#ifdef NETWORKPREDICTIONEXTRAS_FlyingMovementComponent_generated_h
#error "FlyingMovementComponent.generated.h already included, missing '#pragma once' in FlyingMovementComponent.h"
#endif
#define NETWORKPREDICTIONEXTRAS_FlyingMovementComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFlyingMovementComponent *************************************************
struct Z_Construct_UClass_UFlyingMovementComponent_Statics;
NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UFlyingMovementComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_FlyingMovementComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlyingMovementComponent(); \
	friend struct ::Z_Construct_UClass_UFlyingMovementComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETWORKPREDICTIONEXTRAS_API UClass* ::Z_Construct_UClass_UFlyingMovementComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UFlyingMovementComponent, UBaseMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPredictionExtras"), Z_Construct_UClass_UFlyingMovementComponent_NoRegister) \
	DECLARE_SERIALIZER(UFlyingMovementComponent)


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_FlyingMovementComponent_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFlyingMovementComponent(UFlyingMovementComponent&&) = delete; \
	UFlyingMovementComponent(const UFlyingMovementComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlyingMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlyingMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFlyingMovementComponent) \
	NO_API virtual ~UFlyingMovementComponent();


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_FlyingMovementComponent_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_FlyingMovementComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_FlyingMovementComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_FlyingMovementComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFlyingMovementComponent;

// ********** End Class UFlyingMovementComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_FlyingMovementComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
