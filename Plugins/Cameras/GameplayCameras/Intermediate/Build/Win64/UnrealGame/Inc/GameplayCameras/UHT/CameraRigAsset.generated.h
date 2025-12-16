// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/CameraRigAsset.h"

#ifdef GAMEPLAYCAMERAS_CameraRigAsset_generated_h
#error "CameraRigAsset.generated.h already included, missing '#pragma once' in CameraRigAsset.h"
#endif
#define GAMEPLAYCAMERAS_CameraRigAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCameraRigAsset **********************************************************
struct Z_Construct_UClass_UCameraRigAsset_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigAsset_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigAsset_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraRigAsset(); \
	friend struct ::Z_Construct_UClass_UCameraRigAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UCameraRigAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraRigAsset, UBaseCameraObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UCameraRigAsset_NoRegister) \
	DECLARE_SERIALIZER(UCameraRigAsset) \
	virtual UObject* _getUObject() const override { return const_cast<UCameraRigAsset*>(this); }


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigAsset_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UCameraRigAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraRigAsset(UCameraRigAsset&&) = delete; \
	UCameraRigAsset(const UCameraRigAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UCameraRigAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraRigAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraRigAsset) \
	GAMEPLAYCAMERAS_API virtual ~UCameraRigAsset();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigAsset_h_56_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigAsset_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigAsset_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigAsset_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraRigAsset;

// ********** End Class UCameraRigAsset ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
