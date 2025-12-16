// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VCamPixelStreamingSubsystem.h"

#ifdef PIXELSTREAMINGVCAM_VCamPixelStreamingSubsystem_generated_h
#error "VCamPixelStreamingSubsystem.generated.h already included, missing '#pragma once' in VCamPixelStreamingSubsystem.h"
#endif
#define PIXELSTREAMINGVCAM_VCamPixelStreamingSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVCamPixelStreamingSubsystem *********************************************
struct Z_Construct_UClass_UVCamPixelStreamingSubsystem_Statics;
PIXELSTREAMINGVCAM_API UClass* Z_Construct_UClass_UVCamPixelStreamingSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_PixelStreamingVCam_Private_VCamPixelStreamingSubsystem_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamPixelStreamingSubsystem(); \
	friend struct ::Z_Construct_UClass_UVCamPixelStreamingSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMINGVCAM_API UClass* ::Z_Construct_UClass_UVCamPixelStreamingSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UVCamPixelStreamingSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PixelStreamingVCam"), Z_Construct_UClass_UVCamPixelStreamingSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UVCamPixelStreamingSubsystem)


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_PixelStreamingVCam_Private_VCamPixelStreamingSubsystem_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamPixelStreamingSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVCamPixelStreamingSubsystem(UVCamPixelStreamingSubsystem&&) = delete; \
	UVCamPixelStreamingSubsystem(const UVCamPixelStreamingSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamPixelStreamingSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamPixelStreamingSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVCamPixelStreamingSubsystem) \
	NO_API virtual ~UVCamPixelStreamingSubsystem();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_PixelStreamingVCam_Private_VCamPixelStreamingSubsystem_h_19_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_PixelStreamingVCam_Private_VCamPixelStreamingSubsystem_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_PixelStreamingVCam_Private_VCamPixelStreamingSubsystem_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_PixelStreamingVCam_Private_VCamPixelStreamingSubsystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVCamPixelStreamingSubsystem;

// ********** End Class UVCamPixelStreamingSubsystem ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_PixelStreamingVCam_Private_VCamPixelStreamingSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
