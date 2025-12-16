// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneStateObject.h"

#ifdef SCENESTATE_SceneStateObject_generated_h
#error "SceneStateObject.generated.h already included, missing '#pragma once' in SceneStateObject.h"
#endif
#define SCENESTATE_SceneStateObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USceneStateEventStream;

// ********** Begin Class USceneStateObject ********************************************************
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_SceneStateObject_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execGetEventStream); \
	DECLARE_FUNCTION(execGetContextObject);


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_SceneStateObject_h_36_CALLBACK_WRAPPERS
struct Z_Construct_UClass_USceneStateObject_Statics;
SCENESTATE_API UClass* Z_Construct_UClass_USceneStateObject_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_SceneStateObject_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneStateObject(); \
	friend struct ::Z_Construct_UClass_USceneStateObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATE_API UClass* ::Z_Construct_UClass_USceneStateObject_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneStateObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SceneState"), Z_Construct_UClass_USceneStateObject_NoRegister) \
	DECLARE_SERIALIZER(USceneStateObject)


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_SceneStateObject_h_36_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneStateObject(USceneStateObject&&) = delete; \
	USceneStateObject(const USceneStateObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCENESTATE_API, USceneStateObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneStateObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USceneStateObject) \
	SCENESTATE_API virtual ~USceneStateObject();


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_SceneStateObject_h_33_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_SceneStateObject_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_SceneStateObject_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_SceneStateObject_h_36_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_SceneStateObject_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_SceneStateObject_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneStateObject;

// ********** End Class USceneStateObject **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_SceneStateObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
