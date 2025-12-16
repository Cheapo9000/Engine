// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PixelStreamingInputComponent.h"

#ifdef PIXELSTREAMING_PixelStreamingInputComponent_generated_h
#error "PixelStreamingInputComponent.generated.h already included, missing '#pragma once' in PixelStreamingInputComponent.h"
#endif
#define PIXELSTREAMING_PixelStreamingInputComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnInput **************************************************************
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingInputComponent_h_25_DELEGATE \
static void FOnInput_DelegateWrapper(const FMulticastScriptDelegate& OnInput, const FString& Descriptor);


// ********** End Delegate FOnInput ****************************************************************

// ********** Begin Class UPixelStreamingInput *****************************************************
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingInputComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddJsonStringValue); \
	DECLARE_FUNCTION(execGetJsonStringValue); \
	DECLARE_FUNCTION(execSendPixelStreamingResponse);


struct Z_Construct_UClass_UPixelStreamingInput_Statics;
PIXELSTREAMING_API UClass* Z_Construct_UClass_UPixelStreamingInput_NoRegister();

#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingInputComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPixelStreamingInput(); \
	friend struct ::Z_Construct_UClass_UPixelStreamingInput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMING_API UClass* ::Z_Construct_UClass_UPixelStreamingInput_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreamingInput, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PixelStreaming"), Z_Construct_UClass_UPixelStreamingInput_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreamingInput)


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingInputComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreamingInput(UPixelStreamingInput&&) = delete; \
	UPixelStreamingInput(const UPixelStreamingInput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPixelStreamingInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreamingInput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreamingInput) \
	NO_API virtual ~UPixelStreamingInput();


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingInputComponent_h_14_PROLOG
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingInputComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingInputComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingInputComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingInputComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreamingInput;

// ********** End Class UPixelStreamingInput *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingInputComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
