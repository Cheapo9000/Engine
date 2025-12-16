// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VideoProducerMediaCapture.h"

#ifdef PIXELSTREAMING2_VideoProducerMediaCapture_generated_h
#error "VideoProducerMediaCapture.generated.h already included, missing '#pragma once' in VideoProducerMediaCapture.h"
#endif
#define PIXELSTREAMING2_VideoProducerMediaCapture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPixelStreaming2MediaIOOutput ********************************************
struct Z_Construct_UClass_UPixelStreaming2MediaIOOutput_Statics;
PIXELSTREAMING2_API UClass* Z_Construct_UClass_UPixelStreaming2MediaIOOutput_NoRegister();

#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Internal_VideoProducerMediaCapture_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPixelStreaming2MediaIOOutput(); \
	friend struct ::Z_Construct_UClass_UPixelStreaming2MediaIOOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMING2_API UClass* ::Z_Construct_UClass_UPixelStreaming2MediaIOOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreaming2MediaIOOutput, UMediaOutput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PixelStreaming2"), Z_Construct_UClass_UPixelStreaming2MediaIOOutput_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreaming2MediaIOOutput)


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Internal_VideoProducerMediaCapture_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPixelStreaming2MediaIOOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreaming2MediaIOOutput(UPixelStreaming2MediaIOOutput&&) = delete; \
	UPixelStreaming2MediaIOOutput(const UPixelStreaming2MediaIOOutput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPixelStreaming2MediaIOOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreaming2MediaIOOutput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreaming2MediaIOOutput) \
	NO_API virtual ~UPixelStreaming2MediaIOOutput();


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Internal_VideoProducerMediaCapture_h_13_PROLOG
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Internal_VideoProducerMediaCapture_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Internal_VideoProducerMediaCapture_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Internal_VideoProducerMediaCapture_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreaming2MediaIOOutput;

// ********** End Class UPixelStreaming2MediaIOOutput **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Internal_VideoProducerMediaCapture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
