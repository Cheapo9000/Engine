// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Shakes/EnvelopeShakeCameraNode.h"

#ifdef GAMEPLAYCAMERAS_EnvelopeShakeCameraNode_generated_h
#error "EnvelopeShakeCameraNode.generated.h already included, missing '#pragma once' in EnvelopeShakeCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_EnvelopeShakeCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEnvelopeShakeCameraNode *************************************************
struct Z_Construct_UClass_UEnvelopeShakeCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UEnvelopeShakeCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_EnvelopeShakeCameraNode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnvelopeShakeCameraNode(); \
	friend struct ::Z_Construct_UClass_UEnvelopeShakeCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UEnvelopeShakeCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnvelopeShakeCameraNode, UShakeCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UEnvelopeShakeCameraNode_NoRegister) \
	DECLARE_SERIALIZER(UEnvelopeShakeCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_EnvelopeShakeCameraNode_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvelopeShakeCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnvelopeShakeCameraNode(UEnvelopeShakeCameraNode&&) = delete; \
	UEnvelopeShakeCameraNode(const UEnvelopeShakeCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvelopeShakeCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvelopeShakeCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvelopeShakeCameraNode) \
	NO_API virtual ~UEnvelopeShakeCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_EnvelopeShakeCameraNode_h_11_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_EnvelopeShakeCameraNode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_EnvelopeShakeCameraNode_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_EnvelopeShakeCameraNode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnvelopeShakeCameraNode;

// ********** End Class UEnvelopeShakeCameraNode ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_EnvelopeShakeCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
