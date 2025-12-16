// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Common/LensParametersCameraNode.h"

#ifdef GAMEPLAYCAMERAS_LensParametersCameraNode_generated_h
#error "LensParametersCameraNode.generated.h already included, missing '#pragma once' in LensParametersCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_LensParametersCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULensParametersCameraNode ************************************************
struct Z_Construct_UClass_ULensParametersCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_ULensParametersCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_LensParametersCameraNode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULensParametersCameraNode(); \
	friend struct ::Z_Construct_UClass_ULensParametersCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_ULensParametersCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(ULensParametersCameraNode, UCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_ULensParametersCameraNode_NoRegister) \
	DECLARE_SERIALIZER(ULensParametersCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_LensParametersCameraNode_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API ULensParametersCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULensParametersCameraNode(ULensParametersCameraNode&&) = delete; \
	ULensParametersCameraNode(const ULensParametersCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, ULensParametersCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensParametersCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULensParametersCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~ULensParametersCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_LensParametersCameraNode_h_14_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_LensParametersCameraNode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_LensParametersCameraNode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_LensParametersCameraNode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULensParametersCameraNode;

// ********** End Class ULensParametersCameraNode **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_LensParametersCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
