// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Common/ArrayCameraNode.h"

#ifdef GAMEPLAYCAMERAS_ArrayCameraNode_generated_h
#error "ArrayCameraNode.generated.h already included, missing '#pragma once' in ArrayCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_ArrayCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UArrayCameraNode *********************************************************
struct Z_Construct_UClass_UArrayCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UArrayCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_ArrayCameraNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArrayCameraNode(); \
	friend struct ::Z_Construct_UClass_UArrayCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UArrayCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UArrayCameraNode, UCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UArrayCameraNode_NoRegister) \
	DECLARE_SERIALIZER(UArrayCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_ArrayCameraNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UArrayCameraNode(UArrayCameraNode&&) = delete; \
	UArrayCameraNode(const UArrayCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UArrayCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArrayCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArrayCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~UArrayCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_ArrayCameraNode_h_13_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_ArrayCameraNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_ArrayCameraNode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_ArrayCameraNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UArrayCameraNode;

// ********** End Class UArrayCameraNode ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_ArrayCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
