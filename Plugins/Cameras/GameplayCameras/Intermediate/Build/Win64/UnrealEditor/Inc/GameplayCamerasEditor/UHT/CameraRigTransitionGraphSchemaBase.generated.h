// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editors/CameraRigTransitionGraphSchemaBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYCAMERASEDITOR_CameraRigTransitionGraphSchemaBase_generated_h
#error "CameraRigTransitionGraphSchemaBase.generated.h already included, missing '#pragma once' in CameraRigTransitionGraphSchemaBase.h"
#endif
#define GAMEPLAYCAMERASEDITOR_CameraRigTransitionGraphSchemaBase_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraRigTransitionGraphSchemaBase_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraRigTransitionGraphSchemaBase(); \
	friend struct Z_Construct_UClass_UCameraRigTransitionGraphSchemaBase_Statics; \
public: \
	DECLARE_CLASS(UCameraRigTransitionGraphSchemaBase, UObjectTreeGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCamerasEditor"), NO_API) \
	DECLARE_SERIALIZER(UCameraRigTransitionGraphSchemaBase)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraRigTransitionGraphSchemaBase_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraRigTransitionGraphSchemaBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCameraRigTransitionGraphSchemaBase(UCameraRigTransitionGraphSchemaBase&&); \
	UCameraRigTransitionGraphSchemaBase(const UCameraRigTransitionGraphSchemaBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraRigTransitionGraphSchemaBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraRigTransitionGraphSchemaBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraRigTransitionGraphSchemaBase) \
	NO_API virtual ~UCameraRigTransitionGraphSchemaBase();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraRigTransitionGraphSchemaBase_h_25_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraRigTransitionGraphSchemaBase_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraRigTransitionGraphSchemaBase_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraRigTransitionGraphSchemaBase_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERASEDITOR_API UClass* StaticClass<class UCameraRigTransitionGraphSchemaBase>();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraRigTransitionGraphSchemaBase_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraRigTransitionGraphSchemaAction_NewTransitionNode_Statics; \
	GAMEPLAYCAMERASEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FObjectGraphSchemaAction_NewNode Super;


template<> GAMEPLAYCAMERASEDITOR_API UScriptStruct* StaticStruct<struct FCameraRigTransitionGraphSchemaAction_NewTransitionNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraRigTransitionGraphSchemaBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
