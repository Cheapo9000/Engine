// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Media/PixelStreamingMediaOutput.h"

#ifdef PIXELSTREAMINGVCAM_PixelStreamingMediaOutput_generated_h
#error "PixelStreamingMediaOutput.generated.h already included, missing '#pragma once' in PixelStreamingMediaOutput.h"
#endif
#define PIXELSTREAMINGVCAM_PixelStreamingMediaOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPixelStreamingMediaOutput ***********************************************
struct Z_Construct_UClass_UPixelStreamingMediaOutput_Statics;
PIXELSTREAMINGVCAM_API UClass* Z_Construct_UClass_UPixelStreamingMediaOutput_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_PixelStreamingVCam_Private_Media_PixelStreamingMediaOutput_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPixelStreamingMediaOutput(); \
	friend struct ::Z_Construct_UClass_UPixelStreamingMediaOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMINGVCAM_API UClass* ::Z_Construct_UClass_UPixelStreamingMediaOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreamingMediaOutput, UMediaOutput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PixelStreamingVCam"), Z_Construct_UClass_UPixelStreamingMediaOutput_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreamingMediaOutput)


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_PixelStreamingVCam_Private_Media_PixelStreamingMediaOutput_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPixelStreamingMediaOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreamingMediaOutput(UPixelStreamingMediaOutput&&) = delete; \
	UPixelStreamingMediaOutput(const UPixelStreamingMediaOutput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPixelStreamingMediaOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreamingMediaOutput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreamingMediaOutput) \
	NO_API virtual ~UPixelStreamingMediaOutput();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_PixelStreamingVCam_Private_Media_PixelStreamingMediaOutput_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_PixelStreamingVCam_Private_Media_PixelStreamingMediaOutput_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_PixelStreamingVCam_Private_Media_PixelStreamingMediaOutput_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_PixelStreamingVCam_Private_Media_PixelStreamingMediaOutput_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreamingMediaOutput;

// ********** End Class UPixelStreamingMediaOutput *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_PixelStreamingVCam_Private_Media_PixelStreamingMediaOutput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
