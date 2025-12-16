// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/PixelStreaming2Blueprints.h"

#ifdef PIXELSTREAMING2_PixelStreaming2Blueprints_generated_h
#error "PixelStreaming2Blueprints.generated.h already included, missing '#pragma once' in PixelStreaming2Blueprints.h"
#endif
#define PIXELSTREAMING2_PixelStreaming2Blueprints_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPixelStreaming2Delegates;
class UTexture2D;

// ********** Begin Class UPixelStreaming2Blueprints ***********************************************
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2Blueprints_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDelegates); \
	DECLARE_FUNCTION(execAddJsonStringValue); \
	DECLARE_FUNCTION(execGetJsonStringValue); \
	DECLARE_FUNCTION(execGetDefaultStreamerID); \
	DECLARE_FUNCTION(execStreamerGetConnectedPlayers); \
	DECLARE_FUNCTION(execGetConnectedPlayers); \
	DECLARE_FUNCTION(execStreamerKickPlayer); \
	DECLARE_FUNCTION(execKickPlayer); \
	DECLARE_FUNCTION(execStreamerUnfreezeStream); \
	DECLARE_FUNCTION(execStreamerFreezeStream); \
	DECLARE_FUNCTION(execUnfreezeFrame); \
	DECLARE_FUNCTION(execFreezeFrame); \
	DECLARE_FUNCTION(execStreamerForceKeyFrame); \
	DECLARE_FUNCTION(execForceKeyFrame); \
	DECLARE_FUNCTION(execStreamerSendFile); \
	DECLARE_FUNCTION(execSendFile); \
	DECLARE_FUNCTION(execStreamerSendFileAsByteArray); \
	DECLARE_FUNCTION(execSendFileAsByteArray); \
	DECLARE_FUNCTION(execStreamerSendResponse); \
	DECLARE_FUNCTION(execSendResponse);


struct Z_Construct_UClass_UPixelStreaming2Blueprints_Statics;
PIXELSTREAMING2_API UClass* Z_Construct_UClass_UPixelStreaming2Blueprints_NoRegister();

#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2Blueprints_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPixelStreaming2Blueprints(); \
	friend struct ::Z_Construct_UClass_UPixelStreaming2Blueprints_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMING2_API UClass* ::Z_Construct_UClass_UPixelStreaming2Blueprints_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreaming2Blueprints, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PixelStreaming2"), Z_Construct_UClass_UPixelStreaming2Blueprints_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreaming2Blueprints)


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2Blueprints_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPixelStreaming2Blueprints(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreaming2Blueprints(UPixelStreaming2Blueprints&&) = delete; \
	UPixelStreaming2Blueprints(const UPixelStreaming2Blueprints&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPixelStreaming2Blueprints); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreaming2Blueprints); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreaming2Blueprints) \
	NO_API virtual ~UPixelStreaming2Blueprints();


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2Blueprints_h_13_PROLOG
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2Blueprints_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2Blueprints_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2Blueprints_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2Blueprints_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreaming2Blueprints;

// ********** End Class UPixelStreaming2Blueprints *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2Blueprints_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
