// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editors/CameraSharedTransitionGraphSchema.h"

#ifdef GAMEPLAYCAMERASEDITOR_CameraSharedTransitionGraphSchema_generated_h
#error "CameraSharedTransitionGraphSchema.generated.h already included, missing '#pragma once' in CameraSharedTransitionGraphSchema.h"
#endif
#define GAMEPLAYCAMERASEDITOR_CameraSharedTransitionGraphSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCameraSharedTransitionGraphSchema ***************************************
struct Z_Construct_UClass_UCameraSharedTransitionGraphSchema_Statics;
GAMEPLAYCAMERASEDITOR_API UClass* Z_Construct_UClass_UCameraSharedTransitionGraphSchema_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraSharedTransitionGraphSchema_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraSharedTransitionGraphSchema(); \
	friend struct ::Z_Construct_UClass_UCameraSharedTransitionGraphSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERASEDITOR_API UClass* ::Z_Construct_UClass_UCameraSharedTransitionGraphSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraSharedTransitionGraphSchema, UCameraRigTransitionGraphSchemaBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCamerasEditor"), Z_Construct_UClass_UCameraSharedTransitionGraphSchema_NoRegister) \
	DECLARE_SERIALIZER(UCameraSharedTransitionGraphSchema)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraSharedTransitionGraphSchema_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraSharedTransitionGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraSharedTransitionGraphSchema(UCameraSharedTransitionGraphSchema&&) = delete; \
	UCameraSharedTransitionGraphSchema(const UCameraSharedTransitionGraphSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraSharedTransitionGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraSharedTransitionGraphSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraSharedTransitionGraphSchema) \
	NO_API virtual ~UCameraSharedTransitionGraphSchema();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraSharedTransitionGraphSchema_h_12_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraSharedTransitionGraphSchema_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraSharedTransitionGraphSchema_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraSharedTransitionGraphSchema_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraSharedTransitionGraphSchema;

// ********** End Class UCameraSharedTransitionGraphSchema *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraSharedTransitionGraphSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
