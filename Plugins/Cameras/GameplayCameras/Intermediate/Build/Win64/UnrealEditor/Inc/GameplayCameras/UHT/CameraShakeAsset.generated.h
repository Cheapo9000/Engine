// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/CameraShakeAsset.h"

#ifdef GAMEPLAYCAMERAS_CameraShakeAsset_generated_h
#error "CameraShakeAsset.generated.h already included, missing '#pragma once' in CameraShakeAsset.h"
#endif
#define GAMEPLAYCAMERAS_CameraShakeAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCameraShakeAsset ********************************************************
struct Z_Construct_UClass_UCameraShakeAsset_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraShakeAsset_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraShakeAsset_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraShakeAsset(); \
	friend struct ::Z_Construct_UClass_UCameraShakeAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UCameraShakeAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraShakeAsset, UBaseCameraObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UCameraShakeAsset_NoRegister) \
	DECLARE_SERIALIZER(UCameraShakeAsset) \
	virtual UObject* _getUObject() const override { return const_cast<UCameraShakeAsset*>(this); }


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraShakeAsset_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UCameraShakeAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraShakeAsset(UCameraShakeAsset&&) = delete; \
	UCameraShakeAsset(const UCameraShakeAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UCameraShakeAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraShakeAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraShakeAsset) \
	GAMEPLAYCAMERAS_API virtual ~UCameraShakeAsset();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraShakeAsset_h_22_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraShakeAsset_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraShakeAsset_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraShakeAsset_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraShakeAsset;

// ********** End Class UCameraShakeAsset **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraShakeAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
