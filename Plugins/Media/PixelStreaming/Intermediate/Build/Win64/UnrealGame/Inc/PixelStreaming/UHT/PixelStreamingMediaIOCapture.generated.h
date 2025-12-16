// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PixelStreamingMediaIOCapture.h"

#ifdef PIXELSTREAMING_PixelStreamingMediaIOCapture_generated_h
#error "PixelStreamingMediaIOCapture.generated.h already included, missing '#pragma once' in PixelStreamingMediaIOCapture.h"
#endif
#define PIXELSTREAMING_PixelStreamingMediaIOCapture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPixelStreamingMediaIOCapture ********************************************
struct Z_Construct_UClass_UPixelStreamingMediaIOCapture_Statics;
PIXELSTREAMING_API UClass* Z_Construct_UClass_UPixelStreamingMediaIOCapture_NoRegister();

#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Internal_PixelStreamingMediaIOCapture_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPixelStreamingMediaIOCapture(); \
	friend struct ::Z_Construct_UClass_UPixelStreamingMediaIOCapture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMING_API UClass* ::Z_Construct_UClass_UPixelStreamingMediaIOCapture_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreamingMediaIOCapture, UMediaCapture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PixelStreaming"), Z_Construct_UClass_UPixelStreamingMediaIOCapture_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreamingMediaIOCapture)


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Internal_PixelStreamingMediaIOCapture_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPixelStreamingMediaIOCapture(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreamingMediaIOCapture(UPixelStreamingMediaIOCapture&&) = delete; \
	UPixelStreamingMediaIOCapture(const UPixelStreamingMediaIOCapture&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPixelStreamingMediaIOCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreamingMediaIOCapture); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPixelStreamingMediaIOCapture) \
	NO_API virtual ~UPixelStreamingMediaIOCapture();


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Internal_PixelStreamingMediaIOCapture_h_12_PROLOG
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Internal_PixelStreamingMediaIOCapture_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Internal_PixelStreamingMediaIOCapture_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Internal_PixelStreamingMediaIOCapture_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreamingMediaIOCapture;

// ********** End Class UPixelStreamingMediaIOCapture **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Internal_PixelStreamingMediaIOCapture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
