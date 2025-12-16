// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PixelStreamingVideoInputMediaCapture.h"

#ifdef PIXELSTREAMING_PixelStreamingVideoInputMediaCapture_generated_h
#error "PixelStreamingVideoInputMediaCapture.generated.h already included, missing '#pragma once' in PixelStreamingVideoInputMediaCapture.h"
#endif
#define PIXELSTREAMING_PixelStreamingVideoInputMediaCapture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPixelStreamingMediaIOOutput *********************************************
struct Z_Construct_UClass_UPixelStreamingMediaIOOutput_Statics;
PIXELSTREAMING_API UClass* Z_Construct_UClass_UPixelStreamingMediaIOOutput_NoRegister();

#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Internal_PixelStreamingVideoInputMediaCapture_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPixelStreamingMediaIOOutput(); \
	friend struct ::Z_Construct_UClass_UPixelStreamingMediaIOOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMING_API UClass* ::Z_Construct_UClass_UPixelStreamingMediaIOOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreamingMediaIOOutput, UMediaOutput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PixelStreaming"), Z_Construct_UClass_UPixelStreamingMediaIOOutput_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreamingMediaIOOutput)


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Internal_PixelStreamingVideoInputMediaCapture_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPixelStreamingMediaIOOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreamingMediaIOOutput(UPixelStreamingMediaIOOutput&&) = delete; \
	UPixelStreamingMediaIOOutput(const UPixelStreamingMediaIOOutput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPixelStreamingMediaIOOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreamingMediaIOOutput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreamingMediaIOOutput) \
	NO_API virtual ~UPixelStreamingMediaIOOutput();


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Internal_PixelStreamingVideoInputMediaCapture_h_12_PROLOG
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Internal_PixelStreamingVideoInputMediaCapture_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Internal_PixelStreamingVideoInputMediaCapture_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Internal_PixelStreamingVideoInputMediaCapture_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreamingMediaIOOutput;

// ********** End Class UPixelStreamingMediaIOOutput ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Internal_PixelStreamingVideoInputMediaCapture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
