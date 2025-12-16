// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Common/AutoFocusCameraNode.h"

#ifdef GAMEPLAYCAMERAS_AutoFocusCameraNode_generated_h
#error "AutoFocusCameraNode.generated.h already included, missing '#pragma once' in AutoFocusCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_AutoFocusCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAutoFocusCameraNode *****************************************************
struct Z_Construct_UClass_UAutoFocusCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UAutoFocusCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_AutoFocusCameraNode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutoFocusCameraNode(); \
	friend struct ::Z_Construct_UClass_UAutoFocusCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UAutoFocusCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutoFocusCameraNode, UCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UAutoFocusCameraNode_NoRegister) \
	DECLARE_SERIALIZER(UAutoFocusCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_AutoFocusCameraNode_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutoFocusCameraNode(UAutoFocusCameraNode&&) = delete; \
	UAutoFocusCameraNode(const UAutoFocusCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UAutoFocusCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoFocusCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutoFocusCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~UAutoFocusCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_AutoFocusCameraNode_h_14_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_AutoFocusCameraNode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_AutoFocusCameraNode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_AutoFocusCameraNode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutoFocusCameraNode;

// ********** End Class UAutoFocusCameraNode *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_AutoFocusCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
