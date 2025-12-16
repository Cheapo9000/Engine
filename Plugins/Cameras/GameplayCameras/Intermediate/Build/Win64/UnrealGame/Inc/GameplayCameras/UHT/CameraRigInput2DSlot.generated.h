// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Input/CameraRigInput2DSlot.h"

#ifdef GAMEPLAYCAMERAS_CameraRigInput2DSlot_generated_h
#error "CameraRigInput2DSlot.generated.h already included, missing '#pragma once' in CameraRigInput2DSlot.h"
#endif
#define GAMEPLAYCAMERAS_CameraRigInput2DSlot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCameraRigInput2DSlot ****************************************************
struct Z_Construct_UClass_UCameraRigInput2DSlot_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigInput2DSlot_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInput2DSlot_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraRigInput2DSlot(); \
	friend struct ::Z_Construct_UClass_UCameraRigInput2DSlot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UCameraRigInput2DSlot_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraRigInput2DSlot, UInput2DCameraNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UCameraRigInput2DSlot_NoRegister) \
	DECLARE_SERIALIZER(UCameraRigInput2DSlot)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInput2DSlot_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraRigInput2DSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraRigInput2DSlot(UCameraRigInput2DSlot&&) = delete; \
	UCameraRigInput2DSlot(const UCameraRigInput2DSlot&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraRigInput2DSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraRigInput2DSlot); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraRigInput2DSlot) \
	NO_API virtual ~UCameraRigInput2DSlot();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInput2DSlot_h_21_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInput2DSlot_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInput2DSlot_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInput2DSlot_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraRigInput2DSlot;

// ********** End Class UCameraRigInput2DSlot ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInput2DSlot_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
