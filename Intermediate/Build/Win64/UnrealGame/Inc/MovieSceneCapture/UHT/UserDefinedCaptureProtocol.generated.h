// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Protocols/UserDefinedCaptureProtocol.h"

#ifdef MOVIESCENECAPTURE_UserDefinedCaptureProtocol_generated_h
#error "UserDefinedCaptureProtocol.generated.h already included, missing '#pragma once' in UserDefinedCaptureProtocol.h"
#endif
#define MOVIESCENECAPTURE_UserDefinedCaptureProtocol_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
struct FCapturedPixels;
struct FCapturedPixelsID;
struct FFrameMetrics;

// ********** Begin ScriptStruct FCapturedPixelsID *************************************************
struct Z_Construct_UScriptStruct_FCapturedPixelsID_Statics;
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCapturedPixelsID_Statics; \
	MOVIESCENECAPTURE_API static class UScriptStruct* StaticStruct();


struct FCapturedPixelsID;
// ********** End ScriptStruct FCapturedPixelsID ***************************************************

// ********** Begin ScriptStruct FCapturedPixels ***************************************************
struct Z_Construct_UScriptStruct_FCapturedPixels_Statics;
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCapturedPixels_Statics; \
	MOVIESCENECAPTURE_API static class UScriptStruct* StaticStruct();


struct FCapturedPixels;
// ********** End ScriptStruct FCapturedPixels *****************************************************

// ********** Begin Class UUserDefinedCaptureProtocol **********************************************
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentFrameMetrics); \
	DECLARE_FUNCTION(execGenerateFilename); \
	DECLARE_FUNCTION(execStopCapturingFinalPixels); \
	DECLARE_FUNCTION(execStartCapturingFinalPixels); \
	DECLARE_FUNCTION(execResolveBuffer); \
	DECLARE_FUNCTION(execOnCanFinalize); \
	DECLARE_FUNCTION(execOnSetup);


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_50_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics;
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UUserDefinedCaptureProtocol_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserDefinedCaptureProtocol(); \
	friend struct ::Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENECAPTURE_API UClass* ::Z_Construct_UClass_UUserDefinedCaptureProtocol_NoRegister(); \
public: \
	DECLARE_CLASS2(UUserDefinedCaptureProtocol, UMovieSceneImageCaptureProtocolBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), Z_Construct_UClass_UUserDefinedCaptureProtocol_NoRegister) \
	DECLARE_SERIALIZER(UUserDefinedCaptureProtocol)


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_50_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUserDefinedCaptureProtocol(UUserDefinedCaptureProtocol&&) = delete; \
	UUserDefinedCaptureProtocol(const UUserDefinedCaptureProtocol&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENECAPTURE_API, UUserDefinedCaptureProtocol); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserDefinedCaptureProtocol); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserDefinedCaptureProtocol) \
	MOVIESCENECAPTURE_API virtual ~UUserDefinedCaptureProtocol();


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_44_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_50_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_50_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUserDefinedCaptureProtocol;

// ********** End Class UUserDefinedCaptureProtocol ************************************************

// ********** Begin Class UUserDefinedImageCaptureProtocol *****************************************
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_240_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWriteImageToDisk); \
	DECLARE_FUNCTION(execGenerateFilenameForCurrentFrame); \
	DECLARE_FUNCTION(execGenerateFilenameForBuffer);


struct Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics;
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UUserDefinedImageCaptureProtocol_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_240_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserDefinedImageCaptureProtocol(); \
	friend struct ::Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENECAPTURE_API UClass* ::Z_Construct_UClass_UUserDefinedImageCaptureProtocol_NoRegister(); \
public: \
	DECLARE_CLASS2(UUserDefinedImageCaptureProtocol, UUserDefinedCaptureProtocol, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), Z_Construct_UClass_UUserDefinedImageCaptureProtocol_NoRegister) \
	DECLARE_SERIALIZER(UUserDefinedImageCaptureProtocol) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_240_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUserDefinedImageCaptureProtocol(UUserDefinedImageCaptureProtocol&&) = delete; \
	UUserDefinedImageCaptureProtocol(const UUserDefinedImageCaptureProtocol&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENECAPTURE_API, UUserDefinedImageCaptureProtocol); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserDefinedImageCaptureProtocol); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserDefinedImageCaptureProtocol) \
	MOVIESCENECAPTURE_API virtual ~UUserDefinedImageCaptureProtocol();


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_234_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_240_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_240_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_240_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_240_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUserDefinedImageCaptureProtocol;

// ********** End Class UUserDefinedImageCaptureProtocol *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
