// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Input/RawInputAxisBinding2DCameraNode.h"

#ifdef GAMEPLAYCAMERAS_RawInputAxisBinding2DCameraNode_generated_h
#error "RawInputAxisBinding2DCameraNode.generated.h already included, missing '#pragma once' in RawInputAxisBinding2DCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_RawInputAxisBinding2DCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URawInputAxisBinding2DCameraNode *****************************************
struct Z_Construct_UClass_URawInputAxisBinding2DCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_URawInputAxisBinding2DCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_RawInputAxisBinding2DCameraNode_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURawInputAxisBinding2DCameraNode(); \
	friend struct ::Z_Construct_UClass_URawInputAxisBinding2DCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_URawInputAxisBinding2DCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(URawInputAxisBinding2DCameraNode, UInput2DCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_URawInputAxisBinding2DCameraNode_NoRegister) \
	DECLARE_SERIALIZER(URawInputAxisBinding2DCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_RawInputAxisBinding2DCameraNode_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API URawInputAxisBinding2DCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URawInputAxisBinding2DCameraNode(URawInputAxisBinding2DCameraNode&&) = delete; \
	URawInputAxisBinding2DCameraNode(const URawInputAxisBinding2DCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, URawInputAxisBinding2DCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URawInputAxisBinding2DCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URawInputAxisBinding2DCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~URawInputAxisBinding2DCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_RawInputAxisBinding2DCameraNode_h_17_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_RawInputAxisBinding2DCameraNode_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_RawInputAxisBinding2DCameraNode_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_RawInputAxisBinding2DCameraNode_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URawInputAxisBinding2DCameraNode;

// ********** End Class URawInputAxisBinding2DCameraNode *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_RawInputAxisBinding2DCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
