// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetTools/CameraVariableCollectionEditor.h"

#ifdef GAMEPLAYCAMERASEDITOR_CameraVariableCollectionEditor_generated_h
#error "CameraVariableCollectionEditor.generated.h already included, missing '#pragma once' in CameraVariableCollectionEditor.h"
#endif
#define GAMEPLAYCAMERASEDITOR_CameraVariableCollectionEditor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCameraVariableCollectionEditor ******************************************
struct Z_Construct_UClass_UCameraVariableCollectionEditor_Statics;
GAMEPLAYCAMERASEDITOR_API UClass* Z_Construct_UClass_UCameraVariableCollectionEditor_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraVariableCollectionEditor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraVariableCollectionEditor(); \
	friend struct ::Z_Construct_UClass_UCameraVariableCollectionEditor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERASEDITOR_API UClass* ::Z_Construct_UClass_UCameraVariableCollectionEditor_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraVariableCollectionEditor, UAssetEditor, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayCamerasEditor"), Z_Construct_UClass_UCameraVariableCollectionEditor_NoRegister) \
	DECLARE_SERIALIZER(UCameraVariableCollectionEditor)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraVariableCollectionEditor_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraVariableCollectionEditor(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraVariableCollectionEditor(UCameraVariableCollectionEditor&&) = delete; \
	UCameraVariableCollectionEditor(const UCameraVariableCollectionEditor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraVariableCollectionEditor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraVariableCollectionEditor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCameraVariableCollectionEditor) \
	NO_API virtual ~UCameraVariableCollectionEditor();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraVariableCollectionEditor_h_15_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraVariableCollectionEditor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraVariableCollectionEditor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraVariableCollectionEditor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraVariableCollectionEditor;

// ********** End Class UCameraVariableCollectionEditor ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_AssetTools_CameraVariableCollectionEditor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
