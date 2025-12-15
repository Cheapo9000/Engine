// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/PlayerCameraManager.h"

#ifdef ENGINE_PlayerCameraManager_generated_h
#error "PlayerCameraManager.generated.h already included, missing '#pragma once' in PlayerCameraManager.h"
#endif
#define ENGINE_PlayerCameraManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APlayerController;
class ICameraLensEffectInterface;
class UCameraModifier;
class UCameraShakeBase;
class UCameraShakeSourceComponent;
class UClass;
enum class ECameraShakePlaySpace : uint8;
struct FLinearColor;

// ********** Begin Delegate FOnAudioFadeChangeSignature *******************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_22_DELEGATE \
ENGINE_API void FOnAudioFadeChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAudioFadeChangeSignature, bool bFadeOut, float FadeTime);


// ********** End Delegate FOnAudioFadeChangeSignature *********************************************

// ********** Begin ScriptStruct FCameraCacheEntry *************************************************
struct Z_Construct_UScriptStruct_FCameraCacheEntry_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_60_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCameraCacheEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCameraCacheEntry;
// ********** End ScriptStruct FCameraCacheEntry ***************************************************

// ********** Begin ScriptStruct FTViewTarget ******************************************************
struct Z_Construct_UScriptStruct_FTViewTarget_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_80_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTViewTarget_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTViewTarget;
// ********** End ScriptStruct FTViewTarget ********************************************************

// ********** Begin ScriptStruct FViewTargetTransitionParams ***************************************
struct Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_118_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FViewTargetTransitionParams;
// ********** End ScriptStruct FViewTargetTransitionParams *****************************************

// ********** Begin Class APlayerCameraManager *****************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_190_RPC_WRAPPERS \
	ENGINE_API virtual void OnPhotographyMultiPartCaptureEnd_Implementation(); \
	ENGINE_API virtual void OnPhotographyMultiPartCaptureStart_Implementation(); \
	ENGINE_API virtual void OnPhotographySessionEnd_Implementation(); \
	ENGINE_API virtual void OnPhotographySessionStart_Implementation(); \
	ENGINE_API virtual void PhotographyCameraModify_Implementation(const FVector NewCameraLocation, const FVector PreviousCameraLocation, const FVector OriginalCameraLocation, FVector& ResultCameraLocation); \
	DECLARE_FUNCTION(execSwapPendingViewTargetWhenUsingClientSideCameraUpdates); \
	DECLARE_FUNCTION(execSetGameCameraCutThisFrame); \
	DECLARE_FUNCTION(execSetManualCameraFade); \
	DECLARE_FUNCTION(execStopCameraFade); \
	DECLARE_FUNCTION(execStartCameraFade); \
	DECLARE_FUNCTION(execStopAllCameraShakesFromSource); \
	DECLARE_FUNCTION(execStopAllInstancesOfCameraShakeFromSource); \
	DECLARE_FUNCTION(execStopAllCameraShakes); \
	DECLARE_FUNCTION(execStopAllInstancesOfCameraShake); \
	DECLARE_FUNCTION(execStopCameraShake); \
	DECLARE_FUNCTION(execStartCameraShakeFromSource); \
	DECLARE_FUNCTION(execStartCameraShake); \
	DECLARE_FUNCTION(execClearCameraLensEffects); \
	DECLARE_FUNCTION(execRemoveGenericCameraLensEffect); \
	DECLARE_FUNCTION(execAddGenericCameraLensEffect); \
	DECLARE_FUNCTION(execGetCameraLocation); \
	DECLARE_FUNCTION(execGetCameraRotation); \
	DECLARE_FUNCTION(execGetFOVAngle); \
	DECLARE_FUNCTION(execRemoveCameraModifier); \
	DECLARE_FUNCTION(execFindCameraModifierByClass); \
	DECLARE_FUNCTION(execAddNewCameraModifier); \
	DECLARE_FUNCTION(execGetOwningPlayerController); \
	DECLARE_FUNCTION(execOnPhotographyMultiPartCaptureEnd); \
	DECLARE_FUNCTION(execOnPhotographyMultiPartCaptureStart); \
	DECLARE_FUNCTION(execOnPhotographySessionEnd); \
	DECLARE_FUNCTION(execOnPhotographySessionStart); \
	DECLARE_FUNCTION(execPhotographyCameraModify);


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_190_CALLBACK_WRAPPERS
struct Z_Construct_UClass_APlayerCameraManager_Statics;
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_190_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCameraManager(); \
	friend struct ::Z_Construct_UClass_APlayerCameraManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_APlayerCameraManager_NoRegister(); \
public: \
	DECLARE_CLASS2(APlayerCameraManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_APlayerCameraManager_NoRegister) \
	DECLARE_SERIALIZER(APlayerCameraManager)


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_190_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API APlayerCameraManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCameraManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APlayerCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCameraManager); \
	/** Deleted move- and copy-constructors, should never be used */ \
	APlayerCameraManager(APlayerCameraManager&&) = delete; \
	APlayerCameraManager(const APlayerCameraManager&) = delete; \
	ENGINE_API virtual ~APlayerCameraManager();


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_187_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_190_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_190_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_190_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_190_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_190_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APlayerCameraManager;

// ********** End Class APlayerCameraManager *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h

// ********** Begin Enum EViewTargetBlendFunction **************************************************
#define FOREACH_ENUM_EVIEWTARGETBLENDFUNCTION(op) \
	op(VTBlend_Linear) \
	op(VTBlend_Cubic) \
	op(VTBlend_EaseIn) \
	op(VTBlend_EaseOut) \
	op(VTBlend_EaseInOut) \
	op(VTBlend_PreBlended) 

enum EViewTargetBlendFunction : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EViewTargetBlendFunction>();
// ********** End Enum EViewTargetBlendFunction ****************************************************

// ********** Begin Enum EViewTargetBlendOrder *****************************************************
#define FOREACH_ENUM_EVIEWTARGETBLENDORDER(op) \
	op(VTBlendOrder_Base) \
	op(VTBlendOrder_Override) 

enum EViewTargetBlendOrder : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EViewTargetBlendOrder>();
// ********** End Enum EViewTargetBlendOrder *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
