// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Framing/DollyFramingCameraNode.h"

#ifdef GAMEPLAYCAMERAS_DollyFramingCameraNode_generated_h
#error "DollyFramingCameraNode.generated.h already included, missing '#pragma once' in DollyFramingCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_DollyFramingCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDollyFramingCameraNode **************************************************
struct Z_Construct_UClass_UDollyFramingCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UDollyFramingCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_DollyFramingCameraNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDollyFramingCameraNode(); \
	friend struct ::Z_Construct_UClass_UDollyFramingCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UDollyFramingCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UDollyFramingCameraNode, UBaseFramingCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UDollyFramingCameraNode_NoRegister) \
	DECLARE_SERIALIZER(UDollyFramingCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_DollyFramingCameraNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDollyFramingCameraNode(UDollyFramingCameraNode&&) = delete; \
	UDollyFramingCameraNode(const UDollyFramingCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UDollyFramingCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDollyFramingCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDollyFramingCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~UDollyFramingCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_DollyFramingCameraNode_h_13_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_DollyFramingCameraNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_DollyFramingCameraNode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_DollyFramingCameraNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDollyFramingCameraNode;

// ********** End Class UDollyFramingCameraNode ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_DollyFramingCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
