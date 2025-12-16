// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetTools/CameraRigAssetEditor.h"

#ifdef GAMEPLAYCAMERASEDITOR_CameraRigAssetEditor_generated_h
#error "CameraRigAssetEditor.generated.h already included, missing '#pragma once' in CameraRigAssetEditor.h"
#endif
#define GAMEPLAYCAMERASEDITOR_CameraRigAssetEditor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCameraRigAssetEditor ****************************************************
struct Z_Construct_UClass_UCameraRigAssetEditor_Statics;
GAMEPLAYCAMERASEDITOR_API UClass* Z_Construct_UClass_UCameraRigAssetEditor_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraRigAssetEditor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraRigAssetEditor(); \
	friend struct ::Z_Construct_UClass_UCameraRigAssetEditor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERASEDITOR_API UClass* ::Z_Construct_UClass_UCameraRigAssetEditor_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraRigAssetEditor, UAssetEditor, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayCamerasEditor"), Z_Construct_UClass_UCameraRigAssetEditor_NoRegister) \
	DECLARE_SERIALIZER(UCameraRigAssetEditor)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraRigAssetEditor_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraRigAssetEditor(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraRigAssetEditor(UCameraRigAssetEditor&&) = delete; \
	UCameraRigAssetEditor(const UCameraRigAssetEditor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraRigAssetEditor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraRigAssetEditor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCameraRigAssetEditor) \
	NO_API virtual ~UCameraRigAssetEditor();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraRigAssetEditor_h_15_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraRigAssetEditor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraRigAssetEditor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraRigAssetEditor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraRigAssetEditor;

// ********** End Class UCameraRigAssetEditor ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraRigAssetEditor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
