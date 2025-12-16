// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Blends/SimpleBlendCameraNode.h"

#ifdef GAMEPLAYCAMERAS_SimpleBlendCameraNode_generated_h
#error "SimpleBlendCameraNode.generated.h already included, missing '#pragma once' in SimpleBlendCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_SimpleBlendCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USimpleBlendCameraNode ***************************************************
struct Z_Construct_UClass_USimpleBlendCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_USimpleBlendCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_SimpleBlendCameraNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleBlendCameraNode(); \
	friend struct ::Z_Construct_UClass_USimpleBlendCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_USimpleBlendCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(USimpleBlendCameraNode, UBlendCameraNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_USimpleBlendCameraNode_NoRegister) \
	DECLARE_SERIALIZER(USimpleBlendCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_SimpleBlendCameraNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API USimpleBlendCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USimpleBlendCameraNode(USimpleBlendCameraNode&&) = delete; \
	USimpleBlendCameraNode(const USimpleBlendCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, USimpleBlendCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleBlendCameraNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleBlendCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~USimpleBlendCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_SimpleBlendCameraNode_h_13_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_SimpleBlendCameraNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_SimpleBlendCameraNode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_SimpleBlendCameraNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USimpleBlendCameraNode;

// ********** End Class USimpleBlendCameraNode *****************************************************

// ********** Begin Class USimpleFixedTimeBlendCameraNode ******************************************
struct Z_Construct_UClass_USimpleFixedTimeBlendCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_USimpleFixedTimeBlendCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_SimpleBlendCameraNode_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleFixedTimeBlendCameraNode(); \
	friend struct ::Z_Construct_UClass_USimpleFixedTimeBlendCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_USimpleFixedTimeBlendCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(USimpleFixedTimeBlendCameraNode, USimpleBlendCameraNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_USimpleFixedTimeBlendCameraNode_NoRegister) \
	DECLARE_SERIALIZER(USimpleFixedTimeBlendCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_SimpleBlendCameraNode_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API USimpleFixedTimeBlendCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USimpleFixedTimeBlendCameraNode(USimpleFixedTimeBlendCameraNode&&) = delete; \
	USimpleFixedTimeBlendCameraNode(const USimpleFixedTimeBlendCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, USimpleFixedTimeBlendCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleFixedTimeBlendCameraNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleFixedTimeBlendCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~USimpleFixedTimeBlendCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_SimpleBlendCameraNode_h_22_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_SimpleBlendCameraNode_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_SimpleBlendCameraNode_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_SimpleBlendCameraNode_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USimpleFixedTimeBlendCameraNode;

// ********** End Class USimpleFixedTimeBlendCameraNode ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_SimpleBlendCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
