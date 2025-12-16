// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/CameraRigParameterInterop.h"

#ifdef GAMEPLAYCAMERAS_CameraRigParameterInterop_generated_h
#error "CameraRigParameterInterop.generated.h already included, missing '#pragma once' in CameraRigParameterInterop.h"
#endif
#define GAMEPLAYCAMERAS_CameraRigParameterInterop_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraRigAsset;
struct FBlueprintCameraEvaluationDataRef;
struct FLinearColor;

// ********** Begin Class UCameraRigParameterInterop ***********************************************
struct Z_Construct_UClass_UCameraRigParameterInterop_Statics;
	struct Z_Construct_UFunction_UCameraRigParameterInterop_GetCameraParameter_Statics; \
	struct Z_Construct_UFunction_UCameraRigParameterInterop_SetCameraParameter_Statics; \
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigParameterInterop_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraRigParameterInterop(); \
	friend struct ::Z_Construct_UClass_UCameraRigParameterInterop_Statics; \
	friend struct ::Z_Construct_UFunction_UCameraRigParameterInterop_GetCameraParameter_Statics; \
	friend struct ::Z_Construct_UFunction_UCameraRigParameterInterop_SetCameraParameter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UCameraRigParameterInterop_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraRigParameterInterop, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UCameraRigParameterInterop_NoRegister) \
	DECLARE_SERIALIZER(UCameraRigParameterInterop)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraRigParameterInterop(UCameraRigParameterInterop&&) = delete; \
	UCameraRigParameterInterop(const UCameraRigParameterInterop&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UCameraRigParameterInterop); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraRigParameterInterop); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraRigParameterInterop) \
	GAMEPLAYCAMERAS_API virtual ~UCameraRigParameterInterop();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h_22_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraRigParameterInterop;

// ********** End Class UCameraRigParameterInterop *************************************************

// ********** Begin Class UCameraRigParameterInteropLibrary ****************************************
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeLiteralLinearColor); \
	DECLARE_FUNCTION(execMakeLiteralRotator); \
	DECLARE_FUNCTION(execMakeLiteralVector2D); \
	DECLARE_FUNCTION(execMakeLiteralVector3f); \
	DECLARE_FUNCTION(execMakeLiteralVector);


struct Z_Construct_UClass_UCameraRigParameterInteropLibrary_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigParameterInteropLibrary_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraRigParameterInteropLibrary(); \
	friend struct ::Z_Construct_UClass_UCameraRigParameterInteropLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UCameraRigParameterInteropLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraRigParameterInteropLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UCameraRigParameterInteropLibrary_NoRegister) \
	DECLARE_SERIALIZER(UCameraRigParameterInteropLibrary)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UCameraRigParameterInteropLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraRigParameterInteropLibrary(UCameraRigParameterInteropLibrary&&) = delete; \
	UCameraRigParameterInteropLibrary(const UCameraRigParameterInteropLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UCameraRigParameterInteropLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraRigParameterInteropLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraRigParameterInteropLibrary) \
	GAMEPLAYCAMERAS_API virtual ~UCameraRigParameterInteropLibrary();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h_48_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraRigParameterInteropLibrary;

// ********** End Class UCameraRigParameterInteropLibrary ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
