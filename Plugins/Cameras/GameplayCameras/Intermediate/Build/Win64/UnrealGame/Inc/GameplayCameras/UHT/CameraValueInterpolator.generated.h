// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/CameraValueInterpolator.h"

#ifdef GAMEPLAYCAMERAS_CameraValueInterpolator_generated_h
#error "CameraValueInterpolator.generated.h already included, missing '#pragma once' in CameraValueInterpolator.h"
#endif
#define GAMEPLAYCAMERAS_CameraValueInterpolator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCameraValueInterpolator *************************************************
struct Z_Construct_UClass_UCameraValueInterpolator_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraValueInterpolator_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraValueInterpolator_h_225_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraValueInterpolator(); \
	friend struct ::Z_Construct_UClass_UCameraValueInterpolator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UCameraValueInterpolator_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraValueInterpolator, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UCameraValueInterpolator_NoRegister) \
	DECLARE_SERIALIZER(UCameraValueInterpolator)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraValueInterpolator_h_225_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UCameraValueInterpolator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraValueInterpolator(UCameraValueInterpolator&&) = delete; \
	UCameraValueInterpolator(const UCameraValueInterpolator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UCameraValueInterpolator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraValueInterpolator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraValueInterpolator) \
	GAMEPLAYCAMERAS_API virtual ~UCameraValueInterpolator();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraValueInterpolator_h_222_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraValueInterpolator_h_225_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraValueInterpolator_h_225_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraValueInterpolator_h_225_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraValueInterpolator;

// ********** End Class UCameraValueInterpolator ***************************************************

// ********** Begin Class UPopValueInterpolator ****************************************************
struct Z_Construct_UClass_UPopValueInterpolator_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UPopValueInterpolator_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraValueInterpolator_h_274_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPopValueInterpolator(); \
	friend struct ::Z_Construct_UClass_UPopValueInterpolator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UPopValueInterpolator_NoRegister(); \
public: \
	DECLARE_CLASS2(UPopValueInterpolator, UCameraValueInterpolator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UPopValueInterpolator_NoRegister) \
	DECLARE_SERIALIZER(UPopValueInterpolator)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraValueInterpolator_h_274_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPopValueInterpolator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPopValueInterpolator(UPopValueInterpolator&&) = delete; \
	UPopValueInterpolator(const UPopValueInterpolator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPopValueInterpolator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPopValueInterpolator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPopValueInterpolator) \
	NO_API virtual ~UPopValueInterpolator();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraValueInterpolator_h_271_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraValueInterpolator_h_274_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraValueInterpolator_h_274_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraValueInterpolator_h_274_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPopValueInterpolator;

// ********** End Class UPopValueInterpolator ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraValueInterpolator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
