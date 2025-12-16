// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Common/SplineOffsetCameraNode.h"

#ifdef GAMEPLAYCAMERAS_SplineOffsetCameraNode_generated_h
#error "SplineOffsetCameraNode.generated.h already included, missing '#pragma once' in SplineOffsetCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_SplineOffsetCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USplineOffsetCameraNode **************************************************
struct Z_Construct_UClass_USplineOffsetCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_USplineOffsetCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SplineOffsetCameraNode_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSplineOffsetCameraNode(); \
	friend struct ::Z_Construct_UClass_USplineOffsetCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_USplineOffsetCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(USplineOffsetCameraNode, UCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_USplineOffsetCameraNode_NoRegister) \
	DECLARE_SERIALIZER(USplineOffsetCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SplineOffsetCameraNode_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API USplineOffsetCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USplineOffsetCameraNode(USplineOffsetCameraNode&&) = delete; \
	USplineOffsetCameraNode(const USplineOffsetCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, USplineOffsetCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineOffsetCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineOffsetCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~USplineOffsetCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SplineOffsetCameraNode_h_16_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SplineOffsetCameraNode_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SplineOffsetCameraNode_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SplineOffsetCameraNode_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USplineOffsetCameraNode;

// ********** End Class USplineOffsetCameraNode ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SplineOffsetCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
