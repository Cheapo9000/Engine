// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Utility/BlueprintCameraNode.h"

#ifdef GAMEPLAYCAMERAS_BlueprintCameraNode_generated_h
#error "BlueprintCameraNode.generated.h already included, missing '#pragma once' in BlueprintCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_BlueprintCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APlayerController;
class UClass;
struct FBlueprintCameraEvaluationDataRef;
struct FBlueprintCameraPose;

// ********** Begin Class UBlueprintCameraNodeEvaluator ********************************************
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCameraPose); \
	DECLARE_FUNCTION(execGetCameraPose); \
	DECLARE_FUNCTION(execGetPlayerController); \
	DECLARE_FUNCTION(execSetDefaultOwningCameraRigParameters); \
	DECLARE_FUNCTION(execSetCurrentCameraPose); \
	DECLARE_FUNCTION(execGetCurrentCameraPose); \
	DECLARE_FUNCTION(execFindEvaluationContextOwnerActor);


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_30_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBlueprintCameraNodeEvaluator_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintCameraNodeEvaluator(); \
	friend struct ::Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UBlueprintCameraNodeEvaluator_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintCameraNodeEvaluator, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UBlueprintCameraNodeEvaluator_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintCameraNodeEvaluator)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UBlueprintCameraNodeEvaluator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintCameraNodeEvaluator(UBlueprintCameraNodeEvaluator&&) = delete; \
	UBlueprintCameraNodeEvaluator(const UBlueprintCameraNodeEvaluator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UBlueprintCameraNodeEvaluator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintCameraNodeEvaluator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintCameraNodeEvaluator) \
	GAMEPLAYCAMERAS_API virtual ~UBlueprintCameraNodeEvaluator();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_27_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_30_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintCameraNodeEvaluator;

// ********** End Class UBlueprintCameraNodeEvaluator **********************************************

// ********** Begin Class UBlueprintCameraNode *****************************************************
struct Z_Construct_UClass_UBlueprintCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBlueprintCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_148_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintCameraNode(); \
	friend struct ::Z_Construct_UClass_UBlueprintCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UBlueprintCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintCameraNode, UCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UBlueprintCameraNode_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintCameraNode) \
	virtual UObject* _getUObject() const override { return const_cast<UBlueprintCameraNode*>(this); }


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_148_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintCameraNode(UBlueprintCameraNode&&) = delete; \
	UBlueprintCameraNode(const UBlueprintCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UBlueprintCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~UBlueprintCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_143_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_148_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_148_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_148_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintCameraNode;

// ********** End Class UBlueprintCameraNode *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
