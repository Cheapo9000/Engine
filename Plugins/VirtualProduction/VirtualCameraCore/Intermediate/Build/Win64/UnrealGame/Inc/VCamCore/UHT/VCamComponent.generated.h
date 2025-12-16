// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VCamComponent.h"

#ifdef VCAMCORE_VCamComponent_generated_h
#error "VCamComponent.generated.h already included, missing '#pragma once' in VCamComponent.h"
#endif
#define VCAMCORE_VCamComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCineCameraComponent;
class UClass;
class UInputAction;
class UInputModifier;
class UInputTrigger;
class UInputVCamSubsystem;
class UInterface;
class UObject;
class UVCamComponent;
class UVCamModifier;
class UVCamModifierContext;
class UVCamOutputProviderBase;
class UVCamSubsystem;
struct FEnhancedActionKeyMapping;
struct FGameplayTag;
struct FInputActionValue;
struct FKey;
struct FLiveLinkCameraBlueprintData;
struct FLiveLinkSubjectName;
struct FVCamInputDeviceConfig;
struct FVCamInputProfile;

// ********** Begin Delegate FOnComponentReplaced **************************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_43_DELEGATE \
VCAMCORE_API void FOnComponentReplaced_DelegateWrapper(const FMulticastScriptDelegate& OnComponentReplaced, UVCamComponent* NewComponent);


// ********** End Delegate FOnComponentReplaced ****************************************************

// ********** Begin Class UVCamComponent ***********************************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInputVCamSubsystem); \
	DECLARE_FUNCTION(execGetSubsystemArray); \
	DECLARE_FUNCTION(execSetInputDeviceSettings); \
	DECLARE_FUNCTION(execGetInputDeviceSettings); \
	DECLARE_FUNCTION(execSetInputProfile); \
	DECLARE_FUNCTION(execGetInputProfile); \
	DECLARE_FUNCTION(execSetDisableOutputOnMultiUserReceiver); \
	DECLARE_FUNCTION(execGetDisableOutputOnMultiUserReceiver); \
	DECLARE_FUNCTION(execSetRecordAsCineCamera); \
	DECLARE_FUNCTION(execGetRecordAsCineCamera); \
	DECLARE_FUNCTION(execSetDisableComponentWhenSpawnedBySequencer); \
	DECLARE_FUNCTION(execGetDisableComponentWhenSpawnedBySequencer); \
	DECLARE_FUNCTION(execSetLiveLinkSubobject); \
	DECLARE_FUNCTION(execGetLiveLinkSubobject); \
	DECLARE_FUNCTION(execSetRole); \
	DECLARE_FUNCTION(execGetRole); \
	DECLARE_FUNCTION(execInjectInputVectorForAction); \
	DECLARE_FUNCTION(execInjectInputForAction); \
	DECLARE_FUNCTION(execGetPlayerMappableKeys); \
	DECLARE_FUNCTION(execUnregisterObjectForInput); \
	DECLARE_FUNCTION(execRegisterObjectForInput); \
	DECLARE_FUNCTION(execGetLiveLinkDataForCurrentFrame); \
	DECLARE_FUNCTION(execGetOutputProvidersByClass); \
	DECLARE_FUNCTION(execGetOutputProviderByIndex); \
	DECLARE_FUNCTION(execGetAllOutputProviders); \
	DECLARE_FUNCTION(execGetNumberOfOutputProviders); \
	DECLARE_FUNCTION(execRemoveOutputProviderByIndex); \
	DECLARE_FUNCTION(execRemoveOutputProvider); \
	DECLARE_FUNCTION(execRemoveAllOutputProviders); \
	DECLARE_FUNCTION(execSetOutputProviderIndex); \
	DECLARE_FUNCTION(execInsertOutputProvider); \
	DECLARE_FUNCTION(execAddOutputProvider); \
	DECLARE_FUNCTION(execGetModifierContext); \
	DECLARE_FUNCTION(execSetModifierContextClass); \
	DECLARE_FUNCTION(execGetModifiersByInterface); \
	DECLARE_FUNCTION(execGetModifiersByClass); \
	DECLARE_FUNCTION(execGetModifierByName); \
	DECLARE_FUNCTION(execGetModifierByIndex); \
	DECLARE_FUNCTION(execGetAllModifierNames); \
	DECLARE_FUNCTION(execGetAllModifiers); \
	DECLARE_FUNCTION(execGetNumberOfModifiers); \
	DECLARE_FUNCTION(execRemoveModifierByName); \
	DECLARE_FUNCTION(execRemoveModifierByIndex); \
	DECLARE_FUNCTION(execRemoveModifier); \
	DECLARE_FUNCTION(execRemoveAllModifiers); \
	DECLARE_FUNCTION(execSetModifierIndex); \
	DECLARE_FUNCTION(execInsertModifier); \
	DECLARE_FUNCTION(execAddModifier); \
	DECLARE_FUNCTION(execGetTargetCamera); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execGetPlayerMappedKey); \
	DECLARE_FUNCTION(execGetAllPlayerMappableActionKeyMappings); \
	DECLARE_FUNCTION(execSaveCurrentInputProfileToSettings); \
	DECLARE_FUNCTION(execAddInputProfileWithCurrentlyActiveMappings); \
	DECLARE_FUNCTION(execSetInputProfileFromName);


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_67_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVCamComponent, NO_API)


struct Z_Construct_UClass_UVCamComponent_Statics;
VCAMCORE_API UClass* Z_Construct_UClass_UVCamComponent_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamComponent(); \
	friend struct ::Z_Construct_UClass_UVCamComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCORE_API UClass* ::Z_Construct_UClass_UVCamComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UVCamComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VCamCore"), Z_Construct_UClass_UVCamComponent_NoRegister) \
	DECLARE_SERIALIZER(UVCamComponent) \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_67_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVCamComponent(UVCamComponent&&) = delete; \
	UVCamComponent(const UVCamComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamComponent) \
	NO_API virtual ~UVCamComponent();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_64_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVCamComponent;

// ********** End Class UVCamComponent *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
