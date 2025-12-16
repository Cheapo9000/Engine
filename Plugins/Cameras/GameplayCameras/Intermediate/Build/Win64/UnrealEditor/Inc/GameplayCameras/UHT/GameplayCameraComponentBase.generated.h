// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/GameplayCameraComponentBase.h"

#ifdef GAMEPLAYCAMERAS_GameplayCameraComponentBase_generated_h
#error "GameplayCameraComponentBase.generated.h already included, missing '#pragma once' in GameplayCameraComponentBase.h"
#endif
#define GAMEPLAYCAMERAS_GameplayCameraComponentBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UCameraRigAsset;
class UCineCameraComponent;
enum class ECameraEvaluationDataCondition : uint8;
enum class EGameplayCameraComponentActivationMode : uint8;
struct FBlueprintCameraEvaluationDataRef;

// ********** Begin Class UGameplayCameraComponentBase *********************************************
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraComponentBase_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execActivatePersistentVisualCameraRig); \
	DECLARE_FUNCTION(execActivatePersistentGlobalCameraRig); \
	DECLARE_FUNCTION(execActivatePersistentBaseCameraRig); \
	DECLARE_FUNCTION(execGetEvaluatedCameraRotation); \
	DECLARE_FUNCTION(execGetConditionalResult); \
	DECLARE_FUNCTION(execGetInitialResult); \
	DECLARE_FUNCTION(execDeactivateCamera); \
	DECLARE_FUNCTION(execActivateCameraForPlayerController); \
	DECLARE_FUNCTION(execActivateCameraForPlayerIndex); \
	DECLARE_FUNCTION(execGetOutputCameraComponent);


struct Z_Construct_UClass_UGameplayCameraComponentBase_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UGameplayCameraComponentBase_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraComponentBase_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayCameraComponentBase(); \
	friend struct ::Z_Construct_UClass_UGameplayCameraComponentBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UGameplayCameraComponentBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayCameraComponentBase, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UGameplayCameraComponentBase_NoRegister) \
	DECLARE_SERIALIZER(UGameplayCameraComponentBase) \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayCameraComponentBase*>(this); }


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraComponentBase_h_57_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayCameraComponentBase(UGameplayCameraComponentBase&&) = delete; \
	UGameplayCameraComponentBase(const UGameplayCameraComponentBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UGameplayCameraComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayCameraComponentBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayCameraComponentBase) \
	GAMEPLAYCAMERAS_API virtual ~UGameplayCameraComponentBase();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraComponentBase_h_52_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraComponentBase_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraComponentBase_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraComponentBase_h_57_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraComponentBase_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayCameraComponentBase;

// ********** End Class UGameplayCameraComponentBase ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraComponentBase_h

// ********** Begin Enum EGameplayCameraComponentActivationMode ************************************
#define FOREACH_ENUM_EGAMEPLAYCAMERACOMPONENTACTIVATIONMODE(op) \
	op(EGameplayCameraComponentActivationMode::Push) \
	op(EGameplayCameraComponentActivationMode::PushAndInsert) \
	op(EGameplayCameraComponentActivationMode::InsertOrPush) 

enum class EGameplayCameraComponentActivationMode : uint8;
template<> struct TIsUEnumClass<EGameplayCameraComponentActivationMode> { enum { Value = true }; };
template<> GAMEPLAYCAMERAS_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayCameraComponentActivationMode>();
// ********** End Enum EGameplayCameraComponentActivationMode **************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
