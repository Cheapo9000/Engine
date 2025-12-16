// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetTools/CameraRigTransitionEditor.h"

#ifdef GAMEPLAYCAMERASEDITOR_CameraRigTransitionEditor_generated_h
#error "CameraRigTransitionEditor.generated.h already included, missing '#pragma once' in CameraRigTransitionEditor.h"
#endif
#define GAMEPLAYCAMERASEDITOR_CameraRigTransitionEditor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCameraRigTransitionEditor ***********************************************
struct Z_Construct_UClass_UCameraRigTransitionEditor_Statics;
GAMEPLAYCAMERASEDITOR_API UClass* Z_Construct_UClass_UCameraRigTransitionEditor_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraRigTransitionEditor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraRigTransitionEditor(); \
	friend struct ::Z_Construct_UClass_UCameraRigTransitionEditor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERASEDITOR_API UClass* ::Z_Construct_UClass_UCameraRigTransitionEditor_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraRigTransitionEditor, UAssetEditor, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayCamerasEditor"), Z_Construct_UClass_UCameraRigTransitionEditor_NoRegister) \
	DECLARE_SERIALIZER(UCameraRigTransitionEditor)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraRigTransitionEditor_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraRigTransitionEditor(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraRigTransitionEditor(UCameraRigTransitionEditor&&) = delete; \
	UCameraRigTransitionEditor(const UCameraRigTransitionEditor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraRigTransitionEditor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraRigTransitionEditor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCameraRigTransitionEditor) \
	NO_API virtual ~UCameraRigTransitionEditor();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraRigTransitionEditor_h_14_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraRigTransitionEditor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraRigTransitionEditor_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraRigTransitionEditor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraRigTransitionEditor;

// ********** End Class UCameraRigTransitionEditor *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraRigTransitionEditor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
