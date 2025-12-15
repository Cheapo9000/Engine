// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/GameInstance.h"

#ifdef ENGINE_GameInstance_generated_h
#error "GameInstance.generated.h already included, missing '#pragma once' in GameInstance.h"
#endif
#define ENGINE_GameInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class APawn;
enum class EInputDeviceConnectionState : uint8;
struct FInputDeviceId;
struct FPlatformUserId;

// ********** Begin Delegate FOnPawnControllerChanged **********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_59_DELEGATE \
ENGINE_API void FOnPawnControllerChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPawnControllerChanged, APawn* Pawn, AController* Controller);


// ********** End Delegate FOnPawnControllerChanged ************************************************

// ********** Begin Delegate FOnUserInputDeviceConnectionChange ************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_61_DELEGATE \
ENGINE_API void FOnUserInputDeviceConnectionChange_DelegateWrapper(const FMulticastScriptDelegate& OnUserInputDeviceConnectionChange, EInputDeviceConnectionState NewConnectionState, FPlatformUserId PlatformUserId, FInputDeviceId InputDeviceId);


// ********** End Delegate FOnUserInputDeviceConnectionChange **************************************

// ********** Begin Delegate FOnUserInputDevicePairingChange ***************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_62_DELEGATE \
ENGINE_API void FOnUserInputDevicePairingChange_DelegateWrapper(const FMulticastScriptDelegate& OnUserInputDevicePairingChange, FInputDeviceId InputDeviceId, FPlatformUserId NewUserPlatformId, FPlatformUserId OldUserPlatformId);


// ********** End Delegate FOnUserInputDevicePairingChange *****************************************

// ********** Begin Class UGameInstance ************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_RPC_WRAPPERS \
	DECLARE_FUNCTION(execDebugRemovePlayer); \
	DECLARE_FUNCTION(execDebugCreatePlayer);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UGameInstance_Statics;
ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_INCLASS \
private: \
	static void StaticRegisterNativesUGameInstance(); \
	friend struct ::Z_Construct_UClass_UGameInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UGameInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameInstance, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UGameInstance_NoRegister) \
	DECLARE_SERIALIZER(UGameInstance) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInstance); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameInstance(UGameInstance&&) = delete; \
	UGameInstance(const UGameInstance&) = delete; \
	ENGINE_API virtual ~UGameInstance();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_150_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameInstance;

// ********** End Class UGameInstance **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
