// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Input/CameraRigInput1DSlot.h"

#ifdef GAMEPLAYCAMERAS_CameraRigInput1DSlot_generated_h
#error "CameraRigInput1DSlot.generated.h already included, missing '#pragma once' in CameraRigInput1DSlot.h"
#endif
#define GAMEPLAYCAMERAS_CameraRigInput1DSlot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCameraRigInput1DSlot ****************************************************
struct Z_Construct_UClass_UCameraRigInput1DSlot_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigInput1DSlot_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInput1DSlot_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraRigInput1DSlot(); \
	friend struct ::Z_Construct_UClass_UCameraRigInput1DSlot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UCameraRigInput1DSlot_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraRigInput1DSlot, UInput1DCameraNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UCameraRigInput1DSlot_NoRegister) \
	DECLARE_SERIALIZER(UCameraRigInput1DSlot)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInput1DSlot_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraRigInput1DSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraRigInput1DSlot(UCameraRigInput1DSlot&&) = delete; \
	UCameraRigInput1DSlot(const UCameraRigInput1DSlot&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraRigInput1DSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraRigInput1DSlot); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraRigInput1DSlot) \
	NO_API virtual ~UCameraRigInput1DSlot();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInput1DSlot_h_21_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInput1DSlot_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInput1DSlot_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInput1DSlot_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraRigInput1DSlot;

// ********** End Class UCameraRigInput1DSlot ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInput1DSlot_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
