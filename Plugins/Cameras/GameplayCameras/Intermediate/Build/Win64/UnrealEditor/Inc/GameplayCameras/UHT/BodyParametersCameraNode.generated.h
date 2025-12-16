// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Common/BodyParametersCameraNode.h"

#ifdef GAMEPLAYCAMERAS_BodyParametersCameraNode_generated_h
#error "BodyParametersCameraNode.generated.h already included, missing '#pragma once' in BodyParametersCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_BodyParametersCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBodyParametersCameraNode ************************************************
struct Z_Construct_UClass_UBodyParametersCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBodyParametersCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_BodyParametersCameraNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBodyParametersCameraNode(); \
	friend struct ::Z_Construct_UClass_UBodyParametersCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UBodyParametersCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UBodyParametersCameraNode, UCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UBodyParametersCameraNode_NoRegister) \
	DECLARE_SERIALIZER(UBodyParametersCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_BodyParametersCameraNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UBodyParametersCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBodyParametersCameraNode(UBodyParametersCameraNode&&) = delete; \
	UBodyParametersCameraNode(const UBodyParametersCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UBodyParametersCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyParametersCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyParametersCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~UBodyParametersCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_BodyParametersCameraNode_h_13_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_BodyParametersCameraNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_BodyParametersCameraNode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_BodyParametersCameraNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBodyParametersCameraNode;

// ********** End Class UBodyParametersCameraNode **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_BodyParametersCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
