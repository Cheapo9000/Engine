// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetTools/CameraAssetEditor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYCAMERASEDITOR_CameraAssetEditor_generated_h
#error "CameraAssetEditor.generated.h already included, missing '#pragma once' in CameraAssetEditor.h"
#endif
#define GAMEPLAYCAMERASEDITOR_CameraAssetEditor_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraAssetEditor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraAssetEditor(); \
	friend struct Z_Construct_UClass_UCameraAssetEditor_Statics; \
public: \
	DECLARE_CLASS(UCameraAssetEditor, UAssetEditor, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayCamerasEditor"), NO_API) \
	DECLARE_SERIALIZER(UCameraAssetEditor)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraAssetEditor_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraAssetEditor(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCameraAssetEditor(UCameraAssetEditor&&); \
	UCameraAssetEditor(const UCameraAssetEditor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraAssetEditor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraAssetEditor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCameraAssetEditor) \
	NO_API virtual ~UCameraAssetEditor();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraAssetEditor_h_15_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraAssetEditor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraAssetEditor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraAssetEditor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERASEDITOR_API UClass* StaticClass<class UCameraAssetEditor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraAssetEditor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
