// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MockPhysicsGrenade.h"

#ifdef NETWORKPREDICTIONEXTRAS_MockPhysicsGrenade_generated_h
#error "MockPhysicsGrenade.generated.h already included, missing '#pragma once' in MockPhysicsGrenade.h"
#endif
#define NETWORKPREDICTIONEXTRAS_MockPhysicsGrenade_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FMockGrenadeOnExplode *************************************************
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsGrenade_h_74_DELEGATE \
static void FMockGrenadeOnExplode_DelegateWrapper(const FMulticastScriptDelegate& MockGrenadeOnExplode);


// ********** End Delegate FMockGrenadeOnExplode ***************************************************

// ********** Begin Class UMockPhysicsGrenadeComponent *********************************************
struct Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics;
NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockPhysicsGrenadeComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsGrenade_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMockPhysicsGrenadeComponent(); \
	friend struct ::Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETWORKPREDICTIONEXTRAS_API UClass* ::Z_Construct_UClass_UMockPhysicsGrenadeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMockPhysicsGrenadeComponent, UNetworkPredictionPhysicsComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPredictionExtras"), Z_Construct_UClass_UMockPhysicsGrenadeComponent_NoRegister) \
	DECLARE_SERIALIZER(UMockPhysicsGrenadeComponent)


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsGrenade_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMockPhysicsGrenadeComponent(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMockPhysicsGrenadeComponent(UMockPhysicsGrenadeComponent&&) = delete; \
	UMockPhysicsGrenadeComponent(const UMockPhysicsGrenadeComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMockPhysicsGrenadeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMockPhysicsGrenadeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMockPhysicsGrenadeComponent) \
	NO_API virtual ~UMockPhysicsGrenadeComponent();


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsGrenade_h_57_PROLOG
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsGrenade_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsGrenade_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsGrenade_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMockPhysicsGrenadeComponent;

// ********** End Class UMockPhysicsGrenadeComponent ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsGrenade_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
