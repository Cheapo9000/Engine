// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PixelStreamingStreamerComponent.h"

#ifdef PIXELSTREAMINGBLUEPRINT_PixelStreamingStreamerComponent_generated_h
#error "PixelStreamingStreamerComponent.generated.h already included, missing '#pragma once' in PixelStreamingStreamerComponent.h"
#endif
#define PIXELSTREAMINGBLUEPRINT_PixelStreamingStreamerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;

// ********** Begin Class UPixelStreamingStreamerComponent *****************************************
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Private_PixelStreamingStreamerComponent_h_14_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSendPlayerMessage); \
	DECLARE_FUNCTION(execUnfreezeStream); \
	DECLARE_FUNCTION(execFreezeStream); \
	DECLARE_FUNCTION(execForceKeyFrame); \
	DECLARE_FUNCTION(execIsStreaming); \
	DECLARE_FUNCTION(execStopStreaming); \
	DECLARE_FUNCTION(execStartStreaming); \
	DECLARE_FUNCTION(execIsSignallingConnected); \
	DECLARE_FUNCTION(execGetId);


struct Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics;
PIXELSTREAMINGBLUEPRINT_API UClass* Z_Construct_UClass_UPixelStreamingStreamerComponent_NoRegister();

#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Private_PixelStreamingStreamerComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUPixelStreamingStreamerComponent(); \
	friend struct ::Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMINGBLUEPRINT_API UClass* ::Z_Construct_UClass_UPixelStreamingStreamerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreamingStreamerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PixelStreamingBlueprint"), Z_Construct_UClass_UPixelStreamingStreamerComponent_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreamingStreamerComponent)


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Private_PixelStreamingStreamerComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPixelStreamingStreamerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreamingStreamerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPixelStreamingStreamerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreamingStreamerComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreamingStreamerComponent(UPixelStreamingStreamerComponent&&) = delete; \
	UPixelStreamingStreamerComponent(const UPixelStreamingStreamerComponent&) = delete;


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Private_PixelStreamingStreamerComponent_h_11_PROLOG
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Private_PixelStreamingStreamerComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Private_PixelStreamingStreamerComponent_h_14_RPC_WRAPPERS \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Private_PixelStreamingStreamerComponent_h_14_INCLASS \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Private_PixelStreamingStreamerComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreamingStreamerComponent;

// ********** End Class UPixelStreamingStreamerComponent *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Private_PixelStreamingStreamerComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
