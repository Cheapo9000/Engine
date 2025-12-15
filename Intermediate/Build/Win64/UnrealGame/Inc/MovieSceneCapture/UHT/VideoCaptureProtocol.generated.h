// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Protocols/VideoCaptureProtocol.h"

#ifdef MOVIESCENECAPTURE_VideoCaptureProtocol_generated_h
#error "VideoCaptureProtocol.generated.h already included, missing '#pragma once' in VideoCaptureProtocol.h"
#endif
#define MOVIESCENECAPTURE_VideoCaptureProtocol_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVideoCaptureProtocol ****************************************************
struct Z_Construct_UClass_UVideoCaptureProtocol_Statics;
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UVideoCaptureProtocol_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_VideoCaptureProtocol_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVideoCaptureProtocol(); \
	friend struct ::Z_Construct_UClass_UVideoCaptureProtocol_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENECAPTURE_API UClass* ::Z_Construct_UClass_UVideoCaptureProtocol_NoRegister(); \
public: \
	DECLARE_CLASS2(UVideoCaptureProtocol, UFrameGrabberProtocol, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), Z_Construct_UClass_UVideoCaptureProtocol_NoRegister) \
	DECLARE_SERIALIZER(UVideoCaptureProtocol)


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_VideoCaptureProtocol_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVideoCaptureProtocol(UVideoCaptureProtocol&&) = delete; \
	UVideoCaptureProtocol(const UVideoCaptureProtocol&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENECAPTURE_API, UVideoCaptureProtocol); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVideoCaptureProtocol); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVideoCaptureProtocol) \
	MOVIESCENECAPTURE_API virtual ~UVideoCaptureProtocol();


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_VideoCaptureProtocol_h_14_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_VideoCaptureProtocol_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_VideoCaptureProtocol_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_VideoCaptureProtocol_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVideoCaptureProtocol;

// ********** End Class UVideoCaptureProtocol ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_VideoCaptureProtocol_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
