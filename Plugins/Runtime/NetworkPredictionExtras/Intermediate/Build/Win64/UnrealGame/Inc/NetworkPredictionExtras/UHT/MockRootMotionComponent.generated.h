// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MockRootMotionComponent.h"

#ifdef NETWORKPREDICTIONEXTRAS_MockRootMotionComponent_generated_h
#error "MockRootMotionComponent.generated.h already included, missing '#pragma once' in MockRootMotionComponent.h"
#endif
#define NETWORKPREDICTIONEXTRAS_MockRootMotionComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UMockRootMotionSource;

// ********** Begin ScriptStruct FRootMotionSourceCache ********************************************
struct Z_Construct_UScriptStruct_FRootMotionSourceCache_Statics;
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockRootMotionComponent_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRootMotionSourceCache_Statics; \
	NETWORKPREDICTIONEXTRAS_API static class UScriptStruct* StaticStruct();


struct FRootMotionSourceCache;
// ********** End ScriptStruct FRootMotionSourceCache **********************************************

// ********** Begin Class UMockRootMotionComponent *************************************************
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockRootMotionComponent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPlayRootMotionSourceByClass); \
	DECLARE_FUNCTION(execPlayRootMotionSource); \
	DECLARE_FUNCTION(execInput_PlayRootMotionSourceByClass); \
	DECLARE_FUNCTION(execInput_PlayRootMotionSource); \
	DECLARE_FUNCTION(execCreateRootMotionSource);


struct Z_Construct_UClass_UMockRootMotionComponent_Statics;
NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockRootMotionComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockRootMotionComponent_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMockRootMotionComponent(); \
	friend struct ::Z_Construct_UClass_UMockRootMotionComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETWORKPREDICTIONEXTRAS_API UClass* ::Z_Construct_UClass_UMockRootMotionComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMockRootMotionComponent, UBaseMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPredictionExtras"), Z_Construct_UClass_UMockRootMotionComponent_NoRegister) \
	DECLARE_SERIALIZER(UMockRootMotionComponent)


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockRootMotionComponent_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMockRootMotionComponent(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMockRootMotionComponent(UMockRootMotionComponent&&) = delete; \
	UMockRootMotionComponent(const UMockRootMotionComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMockRootMotionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMockRootMotionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMockRootMotionComponent) \
	NO_API virtual ~UMockRootMotionComponent();


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockRootMotionComponent_h_36_PROLOG
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockRootMotionComponent_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockRootMotionComponent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockRootMotionComponent_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockRootMotionComponent_h_41_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMockRootMotionComponent;

// ********** End Class UMockRootMotionComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockRootMotionComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
