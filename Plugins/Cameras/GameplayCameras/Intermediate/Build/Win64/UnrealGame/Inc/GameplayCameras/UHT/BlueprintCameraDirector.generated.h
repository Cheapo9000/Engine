// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Directors/BlueprintCameraDirector.h"

#ifdef GAMEPLAYCAMERAS_BlueprintCameraDirector_generated_h
#error "BlueprintCameraDirector.generated.h already included, missing '#pragma once' in BlueprintCameraDirector.h"
#endif
#define GAMEPLAYCAMERAS_BlueprintCameraDirector_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UCameraRigAsset;
class UCameraRigProxyAsset;
class UClass;
class UObject;
enum class ECameraEvaluationDataCondition : uint8;
struct FBlueprintCameraDirectorActivateParams;
struct FBlueprintCameraDirectorDeactivateParams;
struct FBlueprintCameraDirectorEvaluationParams;
struct FBlueprintCameraEvaluationDataRef;

// ********** Begin ScriptStruct FBlueprintCameraDirectorEvaluationParams **************************
struct Z_Construct_UScriptStruct_FBlueprintCameraDirectorEvaluationParams_Statics;
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlueprintCameraDirectorEvaluationParams_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


struct FBlueprintCameraDirectorEvaluationParams;
// ********** End ScriptStruct FBlueprintCameraDirectorEvaluationParams ****************************

// ********** Begin ScriptStruct FBlueprintCameraDirectorActivateParams ****************************
struct Z_Construct_UScriptStruct_FBlueprintCameraDirectorActivateParams_Statics;
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlueprintCameraDirectorActivateParams_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


struct FBlueprintCameraDirectorActivateParams;
// ********** End ScriptStruct FBlueprintCameraDirectorActivateParams ******************************

// ********** Begin ScriptStruct FBlueprintCameraDirectorDeactivateParams **************************
struct Z_Construct_UScriptStruct_FBlueprintCameraDirectorDeactivateParams_Statics;
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlueprintCameraDirectorDeactivateParams_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


struct FBlueprintCameraDirectorDeactivateParams;
// ********** End ScriptStruct FBlueprintCameraDirectorDeactivateParams ****************************

// ********** Begin Class UBlueprintCameraDirectorEvaluator ****************************************
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetConditionalContextResult); \
	DECLARE_FUNCTION(execGetInitialContextResult); \
	DECLARE_FUNCTION(execFindEvaluationContextOwnerActor); \
	DECLARE_FUNCTION(execResolveCameraRigProxy); \
	DECLARE_FUNCTION(execActivateCameraRigViaProxy); \
	DECLARE_FUNCTION(execActivateCameraRig); \
	DECLARE_FUNCTION(execDeactivatePersistentVisualCameraRig); \
	DECLARE_FUNCTION(execDeactivatePersistentGlobalCameraRig); \
	DECLARE_FUNCTION(execDeactivatePersistentBaseCameraRig); \
	DECLARE_FUNCTION(execActivatePersistentVisualCameraRig); \
	DECLARE_FUNCTION(execActivatePersistentGlobalCameraRig); \
	DECLARE_FUNCTION(execActivatePersistentBaseCameraRig); \
	DECLARE_FUNCTION(execRunChildCameraDirector);


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_57_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UBlueprintCameraDirectorEvaluator_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBlueprintCameraDirectorEvaluator_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintCameraDirectorEvaluator(); \
	friend struct ::Z_Construct_UClass_UBlueprintCameraDirectorEvaluator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UBlueprintCameraDirectorEvaluator_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintCameraDirectorEvaluator, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UBlueprintCameraDirectorEvaluator_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintCameraDirectorEvaluator)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UBlueprintCameraDirectorEvaluator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintCameraDirectorEvaluator(UBlueprintCameraDirectorEvaluator&&) = delete; \
	UBlueprintCameraDirectorEvaluator(const UBlueprintCameraDirectorEvaluator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UBlueprintCameraDirectorEvaluator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintCameraDirectorEvaluator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintCameraDirectorEvaluator) \
	GAMEPLAYCAMERAS_API virtual ~UBlueprintCameraDirectorEvaluator();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_54_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_57_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_57_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintCameraDirectorEvaluator;

// ********** End Class UBlueprintCameraDirectorEvaluator ******************************************

// ********** Begin Class UBlueprintCameraDirector *************************************************
struct Z_Construct_UClass_UBlueprintCameraDirector_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBlueprintCameraDirector_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_226_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintCameraDirector(); \
	friend struct ::Z_Construct_UClass_UBlueprintCameraDirector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UBlueprintCameraDirector_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintCameraDirector, UCameraDirector, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UBlueprintCameraDirector_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintCameraDirector)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_226_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UBlueprintCameraDirector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintCameraDirector(UBlueprintCameraDirector&&) = delete; \
	UBlueprintCameraDirector(const UBlueprintCameraDirector&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UBlueprintCameraDirector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintCameraDirector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintCameraDirector) \
	GAMEPLAYCAMERAS_API virtual ~UBlueprintCameraDirector();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_223_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_226_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_226_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_226_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintCameraDirector;

// ********** End Class UBlueprintCameraDirector ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
