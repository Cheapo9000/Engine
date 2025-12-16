// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/BlueprintCameraPose.h"

#ifdef GAMEPLAYCAMERAS_BlueprintCameraPose_generated_h
#error "BlueprintCameraPose.generated.h already included, missing '#pragma once' in BlueprintCameraPose.h"
#endif
#define GAMEPLAYCAMERAS_BlueprintCameraPose_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraComponent;
class UCineCameraComponent;
struct FBlueprintCameraPose;

// ********** Begin ScriptStruct FBlueprintCameraPose **********************************************
struct Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics;
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


struct FBlueprintCameraPose;
// ********** End ScriptStruct FBlueprintCameraPose ************************************************

// ********** Begin Class UBlueprintCameraPoseFunctionLibrary **************************************
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h_151_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetFocalLength); \
	DECLARE_FUNCTION(execSetFieldOfView); \
	DECLARE_FUNCTION(execSetTargetDistance); \
	DECLARE_FUNCTION(execSetRotation); \
	DECLARE_FUNCTION(execSetLocation); \
	DECLARE_FUNCTION(execGetFocalLength); \
	DECLARE_FUNCTION(execGetFieldOfView); \
	DECLARE_FUNCTION(execGetTargetDistance); \
	DECLARE_FUNCTION(execGetRotation); \
	DECLARE_FUNCTION(execGetLocation); \
	DECLARE_FUNCTION(execMakeCameraPoseFromCineCameraComponent); \
	DECLARE_FUNCTION(execMakeCameraPoseFromCameraComponent); \
	DECLARE_FUNCTION(execSetTransform); \
	DECLARE_FUNCTION(execGetTargetAtDistance); \
	DECLARE_FUNCTION(execGetTarget); \
	DECLARE_FUNCTION(execGetAimDir); \
	DECLARE_FUNCTION(execGetAimRay); \
	DECLARE_FUNCTION(execGetSensorAspectRatio); \
	DECLARE_FUNCTION(execGetEffectiveFieldOfView); \
	DECLARE_FUNCTION(execGetTransform);


struct Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h_151_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintCameraPoseFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintCameraPoseFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintCameraPoseFunctionLibrary)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h_151_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintCameraPoseFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintCameraPoseFunctionLibrary(UBlueprintCameraPoseFunctionLibrary&&) = delete; \
	UBlueprintCameraPoseFunctionLibrary(const UBlueprintCameraPoseFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintCameraPoseFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintCameraPoseFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintCameraPoseFunctionLibrary) \
	NO_API virtual ~UBlueprintCameraPoseFunctionLibrary();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h_148_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h_151_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h_151_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h_151_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h_151_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintCameraPoseFunctionLibrary;

// ********** End Class UBlueprintCameraPoseFunctionLibrary ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
