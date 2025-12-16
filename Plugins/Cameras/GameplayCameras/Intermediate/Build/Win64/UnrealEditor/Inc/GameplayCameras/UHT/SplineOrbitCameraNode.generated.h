// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Common/SplineOrbitCameraNode.h"

#ifdef GAMEPLAYCAMERAS_SplineOrbitCameraNode_generated_h
#error "SplineOrbitCameraNode.generated.h already included, missing '#pragma once' in SplineOrbitCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_SplineOrbitCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSplineOrbitControlPoint ******************************************
struct Z_Construct_UScriptStruct_FSplineOrbitControlPoint_Statics;
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SplineOrbitCameraNode_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSplineOrbitControlPoint_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


struct FSplineOrbitControlPoint;
// ********** End ScriptStruct FSplineOrbitControlPoint ********************************************

// ********** Begin Class USplineOrbitCameraNode ***************************************************
struct Z_Construct_UClass_USplineOrbitCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_USplineOrbitCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SplineOrbitCameraNode_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSplineOrbitCameraNode(); \
	friend struct ::Z_Construct_UClass_USplineOrbitCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_USplineOrbitCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(USplineOrbitCameraNode, UCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_USplineOrbitCameraNode_NoRegister) \
	DECLARE_SERIALIZER(USplineOrbitCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SplineOrbitCameraNode_h_61_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USplineOrbitCameraNode(USplineOrbitCameraNode&&) = delete; \
	USplineOrbitCameraNode(const USplineOrbitCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, USplineOrbitCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineOrbitCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineOrbitCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~USplineOrbitCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SplineOrbitCameraNode_h_58_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SplineOrbitCameraNode_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SplineOrbitCameraNode_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SplineOrbitCameraNode_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USplineOrbitCameraNode;

// ********** End Class USplineOrbitCameraNode *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SplineOrbitCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
