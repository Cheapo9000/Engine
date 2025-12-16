// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/PixelStreaming2InputComponent.h"

#ifdef PIXELSTREAMING2_PixelStreaming2InputComponent_generated_h
#error "PixelStreaming2InputComponent.generated.h already included, missing '#pragma once' in PixelStreaming2InputComponent.h"
#endif
#define PIXELSTREAMING2_PixelStreaming2InputComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnInput **************************************************************
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Internal_Blueprints_PixelStreaming2InputComponent_h_25_DELEGATE \
static PIXELSTREAMING2_API void FOnInput_DelegateWrapper(const FMulticastScriptDelegate& OnInput, const FString& Descriptor);


// ********** End Delegate FOnInput ****************************************************************

// ********** Begin Class UPixelStreaming2Input ****************************************************
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Internal_Blueprints_PixelStreaming2InputComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddJsonStringValue); \
	DECLARE_FUNCTION(execGetJsonStringValue); \
	DECLARE_FUNCTION(execSendPixelStreaming2Response);


struct Z_Construct_UClass_UPixelStreaming2Input_Statics;
PIXELSTREAMING2_API UClass* Z_Construct_UClass_UPixelStreaming2Input_NoRegister();

#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Internal_Blueprints_PixelStreaming2InputComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPixelStreaming2Input(); \
	friend struct ::Z_Construct_UClass_UPixelStreaming2Input_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMING2_API UClass* ::Z_Construct_UClass_UPixelStreaming2Input_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreaming2Input, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PixelStreaming2"), Z_Construct_UClass_UPixelStreaming2Input_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreaming2Input)


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Internal_Blueprints_PixelStreaming2InputComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreaming2Input(UPixelStreaming2Input&&) = delete; \
	UPixelStreaming2Input(const UPixelStreaming2Input&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPixelStreaming2Input); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreaming2Input); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreaming2Input) \
	NO_API virtual ~UPixelStreaming2Input();


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Internal_Blueprints_PixelStreaming2InputComponent_h_14_PROLOG
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Internal_Blueprints_PixelStreaming2InputComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Internal_Blueprints_PixelStreaming2InputComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Internal_Blueprints_PixelStreaming2InputComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Internal_Blueprints_PixelStreaming2InputComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreaming2Input;

// ********** End Class UPixelStreaming2Input ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Internal_Blueprints_PixelStreaming2InputComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
