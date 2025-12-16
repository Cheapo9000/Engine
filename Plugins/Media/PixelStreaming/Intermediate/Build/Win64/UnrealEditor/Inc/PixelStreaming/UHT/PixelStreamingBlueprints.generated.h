// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PixelStreamingBlueprints.h"

#ifdef PIXELSTREAMING_PixelStreamingBlueprints_generated_h
#error "PixelStreamingBlueprints.generated.h already included, missing '#pragma once' in PixelStreamingBlueprints.h"
#endif
#define PIXELSTREAMING_PixelStreamingBlueprints_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPixelStreamingDelegates;
class UTexture2D;

// ********** Begin Class UPixelStreamingBlueprints ************************************************
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPixelStreamingDelegates); \
	DECLARE_FUNCTION(execGetDefaultStreamerID); \
	DECLARE_FUNCTION(execStreamerGetConnectedPlayers); \
	DECLARE_FUNCTION(execGetConnectedPlayers); \
	DECLARE_FUNCTION(execStreamerSetPlayerLayerPreference); \
	DECLARE_FUNCTION(execSetPlayerLayerPreference); \
	DECLARE_FUNCTION(execStreamerKickPlayer); \
	DECLARE_FUNCTION(execKickPlayer); \
	DECLARE_FUNCTION(execStreamerUnfreezeStream); \
	DECLARE_FUNCTION(execStreamerFreezeStream); \
	DECLARE_FUNCTION(execUnfreezeFrame); \
	DECLARE_FUNCTION(execFreezeFrame); \
	DECLARE_FUNCTION(execForceKeyFrame); \
	DECLARE_FUNCTION(execStreamerSendFile); \
	DECLARE_FUNCTION(execSendFile); \
	DECLARE_FUNCTION(execStreamerSendFileAsByteArray); \
	DECLARE_FUNCTION(execSendFileAsByteArray);


struct Z_Construct_UClass_UPixelStreamingBlueprints_Statics;
PIXELSTREAMING_API UClass* Z_Construct_UClass_UPixelStreamingBlueprints_NoRegister();

#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPixelStreamingBlueprints(); \
	friend struct ::Z_Construct_UClass_UPixelStreamingBlueprints_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMING_API UClass* ::Z_Construct_UClass_UPixelStreamingBlueprints_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreamingBlueprints, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PixelStreaming"), Z_Construct_UClass_UPixelStreamingBlueprints_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreamingBlueprints)


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPixelStreamingBlueprints(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreamingBlueprints(UPixelStreamingBlueprints&&) = delete; \
	UPixelStreamingBlueprints(const UPixelStreamingBlueprints&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPixelStreamingBlueprints); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreamingBlueprints); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreamingBlueprints) \
	NO_API virtual ~UPixelStreamingBlueprints();


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_13_PROLOG
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreamingBlueprints;

// ********** End Class UPixelStreamingBlueprints **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
