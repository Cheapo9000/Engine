// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Output/ViewTargetPolicy/GameplayViewTargetPolicy.h"

#ifdef VCAMCORE_GameplayViewTargetPolicy_generated_h
#error "GameplayViewTargetPolicy.generated.h already included, missing '#pragma once' in GameplayViewTargetPolicy.h"
#endif
#define VCAMCORE_GameplayViewTargetPolicy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
struct FDeterminePlayerControllersTargetPolicyParams;
struct FUpdateViewTargetPolicyParams;

// ********** Begin ScriptStruct FDeterminePlayerControllersTargetPolicyParams *********************
struct Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics;
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_ViewTargetPolicy_GameplayViewTargetPolicy_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics; \
	static class UScriptStruct* StaticStruct();


struct FDeterminePlayerControllersTargetPolicyParams;
// ********** End ScriptStruct FDeterminePlayerControllersTargetPolicyParams ***********************

// ********** Begin ScriptStruct FUpdateViewTargetPolicyParams *************************************
struct Z_Construct_UScriptStruct_FUpdateViewTargetPolicyParams_Statics;
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_ViewTargetPolicy_GameplayViewTargetPolicy_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUpdateViewTargetPolicyParams_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FDeterminePlayerControllersTargetPolicyParams Super;


struct FUpdateViewTargetPolicyParams;
// ********** End ScriptStruct FUpdateViewTargetPolicyParams ***************************************

// ********** Begin Class UGameplayViewTargetPolicy ************************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_ViewTargetPolicy_GameplayViewTargetPolicy_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateViewTarget_Implementation(FUpdateViewTargetPolicyParams const& Params); \
	virtual TArray<APlayerController*> DeterminePlayerControllers_Implementation(FDeterminePlayerControllersTargetPolicyParams const& Params); \
	DECLARE_FUNCTION(execUpdateViewTarget); \
	DECLARE_FUNCTION(execDeterminePlayerControllers);


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_ViewTargetPolicy_GameplayViewTargetPolicy_h_49_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UGameplayViewTargetPolicy_Statics;
VCAMCORE_API UClass* Z_Construct_UClass_UGameplayViewTargetPolicy_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_ViewTargetPolicy_GameplayViewTargetPolicy_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayViewTargetPolicy(); \
	friend struct ::Z_Construct_UClass_UGameplayViewTargetPolicy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCORE_API UClass* ::Z_Construct_UClass_UGameplayViewTargetPolicy_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayViewTargetPolicy, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VCamCore"), Z_Construct_UClass_UGameplayViewTargetPolicy_NoRegister) \
	DECLARE_SERIALIZER(UGameplayViewTargetPolicy)


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_ViewTargetPolicy_GameplayViewTargetPolicy_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayViewTargetPolicy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayViewTargetPolicy(UGameplayViewTargetPolicy&&) = delete; \
	UGameplayViewTargetPolicy(const UGameplayViewTargetPolicy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayViewTargetPolicy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayViewTargetPolicy); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayViewTargetPolicy) \
	NO_API virtual ~UGameplayViewTargetPolicy();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_ViewTargetPolicy_GameplayViewTargetPolicy_h_46_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_ViewTargetPolicy_GameplayViewTargetPolicy_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_ViewTargetPolicy_GameplayViewTargetPolicy_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_ViewTargetPolicy_GameplayViewTargetPolicy_h_49_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_ViewTargetPolicy_GameplayViewTargetPolicy_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_ViewTargetPolicy_GameplayViewTargetPolicy_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayViewTargetPolicy;

// ********** End Class UGameplayViewTargetPolicy **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_ViewTargetPolicy_GameplayViewTargetPolicy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
