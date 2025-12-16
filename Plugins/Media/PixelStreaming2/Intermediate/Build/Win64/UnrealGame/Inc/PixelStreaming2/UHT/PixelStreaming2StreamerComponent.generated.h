// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/PixelStreaming2StreamerComponent.h"

#ifdef PIXELSTREAMING2_PixelStreaming2StreamerComponent_generated_h
#error "PixelStreaming2StreamerComponent.generated.h already included, missing '#pragma once' in PixelStreaming2StreamerComponent.h"
#endif
#define PIXELSTREAMING2_PixelStreaming2StreamerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;

// ********** Begin Class UPixelStreaming2StreamerComponent ****************************************
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2StreamerComponent_h_14_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSendPlayerMessage); \
	DECLARE_FUNCTION(execSendAllPlayersMessage); \
	DECLARE_FUNCTION(execUnfreezeStream); \
	DECLARE_FUNCTION(execFreezeStream); \
	DECLARE_FUNCTION(execForceKeyFrame); \
	DECLARE_FUNCTION(execIsStreaming); \
	DECLARE_FUNCTION(execStopStreaming); \
	DECLARE_FUNCTION(execStartStreaming); \
	DECLARE_FUNCTION(execGetId);


struct Z_Construct_UClass_UPixelStreaming2StreamerComponent_Statics;
PIXELSTREAMING2_API UClass* Z_Construct_UClass_UPixelStreaming2StreamerComponent_NoRegister();

#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2StreamerComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUPixelStreaming2StreamerComponent(); \
	friend struct ::Z_Construct_UClass_UPixelStreaming2StreamerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMING2_API UClass* ::Z_Construct_UClass_UPixelStreaming2StreamerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreaming2StreamerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PixelStreaming2"), Z_Construct_UClass_UPixelStreaming2StreamerComponent_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreaming2StreamerComponent)


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2StreamerComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPixelStreaming2StreamerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreaming2StreamerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPixelStreaming2StreamerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreaming2StreamerComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreaming2StreamerComponent(UPixelStreaming2StreamerComponent&&) = delete; \
	UPixelStreaming2StreamerComponent(const UPixelStreaming2StreamerComponent&) = delete; \
	NO_API virtual ~UPixelStreaming2StreamerComponent();


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2StreamerComponent_h_11_PROLOG
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2StreamerComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2StreamerComponent_h_14_RPC_WRAPPERS \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2StreamerComponent_h_14_INCLASS \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2StreamerComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreaming2StreamerComponent;

// ********** End Class UPixelStreaming2StreamerComponent ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2StreamerComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
