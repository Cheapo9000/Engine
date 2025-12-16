// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PixelStreamingAudioComponent.h"

#ifdef PIXELSTREAMING_PixelStreamingAudioComponent_generated_h
#error "PixelStreamingAudioComponent.generated.h already included, missing '#pragma once' in PixelStreamingAudioComponent.h"
#endif
#define PIXELSTREAMING_PixelStreamingAudioComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPixelStreamingAudioComponent ********************************************
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingAudioComponent_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execIsListeningToPlayer); \
	DECLARE_FUNCTION(execStreamerListenTo); \
	DECLARE_FUNCTION(execListenTo);


struct Z_Construct_UClass_UPixelStreamingAudioComponent_Statics;
PIXELSTREAMING_API UClass* Z_Construct_UClass_UPixelStreamingAudioComponent_NoRegister();

#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingAudioComponent_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPixelStreamingAudioComponent(); \
	friend struct ::Z_Construct_UClass_UPixelStreamingAudioComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMING_API UClass* ::Z_Construct_UClass_UPixelStreamingAudioComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreamingAudioComponent, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PixelStreaming"), Z_Construct_UClass_UPixelStreamingAudioComponent_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreamingAudioComponent)


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingAudioComponent_h_60_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreamingAudioComponent(UPixelStreamingAudioComponent&&) = delete; \
	UPixelStreamingAudioComponent(const UPixelStreamingAudioComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPixelStreamingAudioComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreamingAudioComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreamingAudioComponent) \
	NO_API virtual ~UPixelStreamingAudioComponent();


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingAudioComponent_h_57_PROLOG
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingAudioComponent_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingAudioComponent_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingAudioComponent_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingAudioComponent_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreamingAudioComponent;

// ********** End Class UPixelStreamingAudioComponent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingAudioComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
