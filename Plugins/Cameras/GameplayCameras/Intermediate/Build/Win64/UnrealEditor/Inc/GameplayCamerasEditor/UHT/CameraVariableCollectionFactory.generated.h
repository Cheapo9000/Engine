// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/CameraVariableCollectionFactory.h"

#ifdef GAMEPLAYCAMERASEDITOR_CameraVariableCollectionFactory_generated_h
#error "CameraVariableCollectionFactory.generated.h already included, missing '#pragma once' in CameraVariableCollectionFactory.h"
#endif
#define GAMEPLAYCAMERASEDITOR_CameraVariableCollectionFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCameraVariableCollectionFactory *****************************************
struct Z_Construct_UClass_UCameraVariableCollectionFactory_Statics;
GAMEPLAYCAMERASEDITOR_API UClass* Z_Construct_UClass_UCameraVariableCollectionFactory_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraVariableCollectionFactory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraVariableCollectionFactory(); \
	friend struct ::Z_Construct_UClass_UCameraVariableCollectionFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERASEDITOR_API UClass* ::Z_Construct_UClass_UCameraVariableCollectionFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraVariableCollectionFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCamerasEditor"), Z_Construct_UClass_UCameraVariableCollectionFactory_NoRegister) \
	DECLARE_SERIALIZER(UCameraVariableCollectionFactory)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraVariableCollectionFactory_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraVariableCollectionFactory(UCameraVariableCollectionFactory&&) = delete; \
	UCameraVariableCollectionFactory(const UCameraVariableCollectionFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraVariableCollectionFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraVariableCollectionFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraVariableCollectionFactory) \
	NO_API virtual ~UCameraVariableCollectionFactory();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraVariableCollectionFactory_h_14_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraVariableCollectionFactory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraVariableCollectionFactory_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraVariableCollectionFactory_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraVariableCollectionFactory;

// ********** End Class UCameraVariableCollectionFactory *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraVariableCollectionFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
