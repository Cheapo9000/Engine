// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/GameplayCamerasPlayerCameraManager.h"

#ifdef GAMEPLAYCAMERAS_GameplayCamerasPlayerCameraManager_generated_h
#error "GameplayCamerasPlayerCameraManager.generated.h already included, missing '#pragma once' in GameplayCamerasPlayerCameraManager.h"
#endif
#define GAMEPLAYCAMERAS_GameplayCamerasPlayerCameraManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UCameraRigAsset;
class UCameraShakeAsset;
enum class ECameraShakePlaySpace : uint8;
struct FCameraRigInstanceID;
struct FCameraShakeInstanceID;

// ********** Begin Class AGameplayCamerasPlayerCameraManager **************************************
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCamerasPlayerCameraManager_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopCameraShakeAsset); \
	DECLARE_FUNCTION(execIsCameraShakeAssetPlaying); \
	DECLARE_FUNCTION(execStartCameraShakeAsset); \
	DECLARE_FUNCTION(execStopCameraModifierRig); \
	DECLARE_FUNCTION(execStartVisualCameraModifierRig); \
	DECLARE_FUNCTION(execStartGlobalCameraModifierRig); \
	DECLARE_FUNCTION(execActivatePersistentVisualCameraRig); \
	DECLARE_FUNCTION(execActivatePersistentGlobalCameraRig); \
	DECLARE_FUNCTION(execActivatePersistentBaseCameraRig); \
	DECLARE_FUNCTION(execReleasePlayerController); \
	DECLARE_FUNCTION(execStealPlayerController);


struct Z_Construct_UClass_AGameplayCamerasPlayerCameraManager_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_AGameplayCamerasPlayerCameraManager_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCamerasPlayerCameraManager_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameplayCamerasPlayerCameraManager(); \
	friend struct ::Z_Construct_UClass_AGameplayCamerasPlayerCameraManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_AGameplayCamerasPlayerCameraManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AGameplayCamerasPlayerCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_AGameplayCamerasPlayerCameraManager_NoRegister) \
	DECLARE_SERIALIZER(AGameplayCamerasPlayerCameraManager) \
	virtual UObject* _getUObject() const override { return const_cast<AGameplayCamerasPlayerCameraManager*>(this); }


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCamerasPlayerCameraManager_h_68_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGameplayCamerasPlayerCameraManager(AGameplayCamerasPlayerCameraManager&&) = delete; \
	AGameplayCamerasPlayerCameraManager(const AGameplayCamerasPlayerCameraManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, AGameplayCamerasPlayerCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayCamerasPlayerCameraManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayCamerasPlayerCameraManager) \
	GAMEPLAYCAMERAS_API virtual ~AGameplayCamerasPlayerCameraManager();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCamerasPlayerCameraManager_h_63_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCamerasPlayerCameraManager_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCamerasPlayerCameraManager_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCamerasPlayerCameraManager_h_68_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCamerasPlayerCameraManager_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGameplayCamerasPlayerCameraManager;

// ********** End Class AGameplayCamerasPlayerCameraManager ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCamerasPlayerCameraManager_h

// ********** Begin Enum EGameplayCamerasViewRotationMode ******************************************
#define FOREACH_ENUM_EGAMEPLAYCAMERASVIEWROTATIONMODE(op) \
	op(EGameplayCamerasViewRotationMode::None) \
	op(EGameplayCamerasViewRotationMode::PreviewUpdate) 

enum class EGameplayCamerasViewRotationMode;
template<> struct TIsUEnumClass<EGameplayCamerasViewRotationMode> { enum { Value = true }; };
template<> GAMEPLAYCAMERAS_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayCamerasViewRotationMode>();
// ********** End Enum EGameplayCamerasViewRotationMode ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
