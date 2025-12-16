// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Directors/CameraDirectorStateTreeSchema.h"

#ifdef GAMEPLAYCAMERAS_CameraDirectorStateTreeSchema_generated_h
#error "CameraDirectorStateTreeSchema.generated.h already included, missing '#pragma once' in CameraDirectorStateTreeSchema.h"
#endif
#define GAMEPLAYCAMERAS_CameraDirectorStateTreeSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCameraDirectorStateTreeSchema *******************************************
struct Z_Construct_UClass_UCameraDirectorStateTreeSchema_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraDirectorStateTreeSchema_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraDirectorStateTreeSchema(); \
	friend struct ::Z_Construct_UClass_UCameraDirectorStateTreeSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UCameraDirectorStateTreeSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraDirectorStateTreeSchema, UStateTreeSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UCameraDirectorStateTreeSchema_NoRegister) \
	DECLARE_SERIALIZER(UCameraDirectorStateTreeSchema)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h_37_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraDirectorStateTreeSchema(UCameraDirectorStateTreeSchema&&) = delete; \
	UCameraDirectorStateTreeSchema(const UCameraDirectorStateTreeSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UCameraDirectorStateTreeSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraDirectorStateTreeSchema); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCameraDirectorStateTreeSchema) \
	GAMEPLAYCAMERAS_API virtual ~UCameraDirectorStateTreeSchema();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h_34_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraDirectorStateTreeSchema;

// ********** End Class UCameraDirectorStateTreeSchema *********************************************

// ********** Begin ScriptStruct FCameraDirectorStateTreeEvaluationData ****************************
struct Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData_Statics;
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h_61_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


struct FCameraDirectorStateTreeEvaluationData;
// ********** End ScriptStruct FCameraDirectorStateTreeEvaluationData ******************************

// ********** Begin ScriptStruct FGameplayCamerasStateTreeTask *************************************
struct Z_Construct_UScriptStruct_FGameplayCamerasStateTreeTask_Statics;
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h_81_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayCamerasStateTreeTask_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct(); \
	typedef FStateTreeTaskBase Super;


struct FGameplayCamerasStateTreeTask;
// ********** End ScriptStruct FGameplayCamerasStateTreeTask ***************************************

// ********** Begin ScriptStruct FGameplayCamerasStateTreeCondition ********************************
struct Z_Construct_UScriptStruct_FGameplayCamerasStateTreeCondition_Statics;
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h_88_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayCamerasStateTreeCondition_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct(); \
	typedef FStateTreeConditionBase Super;


struct FGameplayCamerasStateTreeCondition;
// ********** End ScriptStruct FGameplayCamerasStateTreeCondition **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
