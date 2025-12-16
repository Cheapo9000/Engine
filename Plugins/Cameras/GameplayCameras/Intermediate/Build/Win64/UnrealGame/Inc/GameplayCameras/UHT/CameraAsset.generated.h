// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/CameraAsset.h"

#ifdef GAMEPLAYCAMERAS_CameraAsset_generated_h
#error "CameraAsset.generated.h already included, missing '#pragma once' in CameraAsset.h"
#endif
#define GAMEPLAYCAMERAS_CameraAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCameraAssetAllocationInfo ****************************************
struct Z_Construct_UScriptStruct_FCameraAssetAllocationInfo_Statics;
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraAsset_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCameraAssetAllocationInfo_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


struct FCameraAssetAllocationInfo;
// ********** End ScriptStruct FCameraAssetAllocationInfo ******************************************

// ********** Begin Class UCameraAsset *************************************************************
struct Z_Construct_UClass_UCameraAsset_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraAsset_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraAsset_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraAsset(); \
	friend struct ::Z_Construct_UClass_UCameraAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UCameraAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UCameraAsset_NoRegister) \
	DECLARE_SERIALIZER(UCameraAsset) \
	virtual UObject* _getUObject() const override { return const_cast<UCameraAsset*>(this); }


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraAsset_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UCameraAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraAsset(UCameraAsset&&) = delete; \
	UCameraAsset(const UCameraAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UCameraAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraAsset) \
	GAMEPLAYCAMERAS_API virtual ~UCameraAsset();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraAsset_h_68_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraAsset_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraAsset_h_75_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraAsset_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraAsset;

// ********** End Class UCameraAsset ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
