// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editors/CameraNodeGraphSchema.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYCAMERASEDITOR_CameraNodeGraphSchema_generated_h
#error "CameraNodeGraphSchema.generated.h already included, missing '#pragma once' in CameraNodeGraphSchema.h"
#endif
#define GAMEPLAYCAMERASEDITOR_CameraNodeGraphSchema_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraNodeGraphSchema_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraNodeGraphSchema(); \
	friend struct Z_Construct_UClass_UCameraNodeGraphSchema_Statics; \
public: \
	DECLARE_CLASS(UCameraNodeGraphSchema, UObjectTreeGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCamerasEditor"), NO_API) \
	DECLARE_SERIALIZER(UCameraNodeGraphSchema)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraNodeGraphSchema_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraNodeGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCameraNodeGraphSchema(UCameraNodeGraphSchema&&); \
	UCameraNodeGraphSchema(const UCameraNodeGraphSchema&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraNodeGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraNodeGraphSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraNodeGraphSchema) \
	NO_API virtual ~UCameraNodeGraphSchema();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraNodeGraphSchema_h_15_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraNodeGraphSchema_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraNodeGraphSchema_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraNodeGraphSchema_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERASEDITOR_API UClass* StaticClass<class UCameraNodeGraphSchema>();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraNodeGraphSchema_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraNodeGraphSchemaAction_NewInterfaceParameterNode_Statics; \
	GAMEPLAYCAMERASEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> GAMEPLAYCAMERASEDITOR_API UScriptStruct* StaticStruct<struct FCameraNodeGraphSchemaAction_NewInterfaceParameterNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraNodeGraphSchema_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
