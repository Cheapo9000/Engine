// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Common/FilmbackCameraNode.h"

#ifdef GAMEPLAYCAMERAS_FilmbackCameraNode_generated_h
#error "FilmbackCameraNode.generated.h already included, missing '#pragma once' in FilmbackCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_FilmbackCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFilmbackCameraNode ******************************************************
struct Z_Construct_UClass_UFilmbackCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UFilmbackCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_FilmbackCameraNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFilmbackCameraNode(); \
	friend struct ::Z_Construct_UClass_UFilmbackCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UFilmbackCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UFilmbackCameraNode, UCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UFilmbackCameraNode_NoRegister) \
	DECLARE_SERIALIZER(UFilmbackCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_FilmbackCameraNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFilmbackCameraNode(UFilmbackCameraNode&&) = delete; \
	UFilmbackCameraNode(const UFilmbackCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UFilmbackCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFilmbackCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFilmbackCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~UFilmbackCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_FilmbackCameraNode_h_13_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_FilmbackCameraNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_FilmbackCameraNode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_FilmbackCameraNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFilmbackCameraNode;

// ********** End Class UFilmbackCameraNode ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_FilmbackCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
