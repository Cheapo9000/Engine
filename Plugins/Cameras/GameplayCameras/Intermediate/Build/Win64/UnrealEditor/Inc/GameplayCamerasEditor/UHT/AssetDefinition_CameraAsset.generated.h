// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetTools/AssetDefinition_CameraAsset.h"

#ifdef GAMEPLAYCAMERASEDITOR_AssetDefinition_CameraAsset_generated_h
#error "AssetDefinition_CameraAsset.generated.h already included, missing '#pragma once' in AssetDefinition_CameraAsset.h"
#endif
#define GAMEPLAYCAMERASEDITOR_AssetDefinition_CameraAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_CameraAsset *********************************************
struct Z_Construct_UClass_UAssetDefinition_CameraAsset_Statics;
GAMEPLAYCAMERASEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_CameraAsset_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_AssetTools_AssetDefinition_CameraAsset_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_CameraAsset(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_CameraAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERASEDITOR_API UClass* ::Z_Construct_UClass_UAssetDefinition_CameraAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_CameraAsset, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCamerasEditor"), Z_Construct_UClass_UAssetDefinition_CameraAsset_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_CameraAsset)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_AssetTools_AssetDefinition_CameraAsset_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_CameraAsset(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_CameraAsset(UAssetDefinition_CameraAsset&&) = delete; \
	UAssetDefinition_CameraAsset(const UAssetDefinition_CameraAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_CameraAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_CameraAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_CameraAsset) \
	NO_API virtual ~UAssetDefinition_CameraAsset();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_AssetTools_AssetDefinition_CameraAsset_h_10_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_AssetTools_AssetDefinition_CameraAsset_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_AssetTools_AssetDefinition_CameraAsset_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_AssetTools_AssetDefinition_CameraAsset_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_CameraAsset;

// ********** End Class UAssetDefinition_CameraAsset ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_AssetTools_AssetDefinition_CameraAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
