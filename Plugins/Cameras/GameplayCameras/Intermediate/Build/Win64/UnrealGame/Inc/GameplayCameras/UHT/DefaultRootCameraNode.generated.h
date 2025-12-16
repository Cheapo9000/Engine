// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/DefaultRootCameraNode.h"

#ifdef GAMEPLAYCAMERAS_DefaultRootCameraNode_generated_h
#error "DefaultRootCameraNode.generated.h already included, missing '#pragma once' in DefaultRootCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_DefaultRootCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDefaultRootCameraNode ***************************************************
struct Z_Construct_UClass_UDefaultRootCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UDefaultRootCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_DefaultRootCameraNode_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDefaultRootCameraNode(); \
	friend struct ::Z_Construct_UClass_UDefaultRootCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UDefaultRootCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UDefaultRootCameraNode, URootCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UDefaultRootCameraNode_NoRegister) \
	DECLARE_SERIALIZER(UDefaultRootCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_DefaultRootCameraNode_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDefaultRootCameraNode(UDefaultRootCameraNode&&) = delete; \
	UDefaultRootCameraNode(const UDefaultRootCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UDefaultRootCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDefaultRootCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDefaultRootCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~UDefaultRootCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_DefaultRootCameraNode_h_16_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_DefaultRootCameraNode_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_DefaultRootCameraNode_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_DefaultRootCameraNode_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDefaultRootCameraNode;

// ********** End Class UDefaultRootCameraNode *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_DefaultRootCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
