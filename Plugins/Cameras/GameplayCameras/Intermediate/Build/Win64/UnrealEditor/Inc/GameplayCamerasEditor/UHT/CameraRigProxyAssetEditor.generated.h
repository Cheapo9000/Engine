// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetTools/CameraRigProxyAssetEditor.h"

#ifdef GAMEPLAYCAMERASEDITOR_CameraRigProxyAssetEditor_generated_h
#error "CameraRigProxyAssetEditor.generated.h already included, missing '#pragma once' in CameraRigProxyAssetEditor.h"
#endif
#define GAMEPLAYCAMERASEDITOR_CameraRigProxyAssetEditor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCameraRigProxyAssetEditor ***********************************************
struct Z_Construct_UClass_UCameraRigProxyAssetEditor_Statics;
GAMEPLAYCAMERASEDITOR_API UClass* Z_Construct_UClass_UCameraRigProxyAssetEditor_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraRigProxyAssetEditor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraRigProxyAssetEditor(); \
	friend struct ::Z_Construct_UClass_UCameraRigProxyAssetEditor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERASEDITOR_API UClass* ::Z_Construct_UClass_UCameraRigProxyAssetEditor_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraRigProxyAssetEditor, UAssetEditor, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayCamerasEditor"), Z_Construct_UClass_UCameraRigProxyAssetEditor_NoRegister) \
	DECLARE_SERIALIZER(UCameraRigProxyAssetEditor)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraRigProxyAssetEditor_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraRigProxyAssetEditor(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraRigProxyAssetEditor(UCameraRigProxyAssetEditor&&) = delete; \
	UCameraRigProxyAssetEditor(const UCameraRigProxyAssetEditor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraRigProxyAssetEditor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraRigProxyAssetEditor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCameraRigProxyAssetEditor) \
	NO_API virtual ~UCameraRigProxyAssetEditor();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraRigProxyAssetEditor_h_15_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraRigProxyAssetEditor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraRigProxyAssetEditor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraRigProxyAssetEditor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraRigProxyAssetEditor;

// ********** End Class UCameraRigProxyAssetEditor *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraRigProxyAssetEditor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
