// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Protocols/AudioCaptureProtocol.h"

#ifdef MOVIESCENECAPTURE_AudioCaptureProtocol_generated_h
#error "AudioCaptureProtocol.generated.h already included, missing '#pragma once' in AudioCaptureProtocol.h"
#endif
#define MOVIESCENECAPTURE_AudioCaptureProtocol_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNullAudioCaptureProtocol ************************************************
struct Z_Construct_UClass_UNullAudioCaptureProtocol_Statics;
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UNullAudioCaptureProtocol_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_AudioCaptureProtocol_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNullAudioCaptureProtocol(); \
	friend struct ::Z_Construct_UClass_UNullAudioCaptureProtocol_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENECAPTURE_API UClass* ::Z_Construct_UClass_UNullAudioCaptureProtocol_NoRegister(); \
public: \
	DECLARE_CLASS2(UNullAudioCaptureProtocol, UMovieSceneAudioCaptureProtocolBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), Z_Construct_UClass_UNullAudioCaptureProtocol_NoRegister) \
	DECLARE_SERIALIZER(UNullAudioCaptureProtocol)


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_AudioCaptureProtocol_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENECAPTURE_API UNullAudioCaptureProtocol(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNullAudioCaptureProtocol(UNullAudioCaptureProtocol&&) = delete; \
	UNullAudioCaptureProtocol(const UNullAudioCaptureProtocol&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENECAPTURE_API, UNullAudioCaptureProtocol); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNullAudioCaptureProtocol); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNullAudioCaptureProtocol) \
	MOVIESCENECAPTURE_API virtual ~UNullAudioCaptureProtocol();


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_AudioCaptureProtocol_h_18_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_AudioCaptureProtocol_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_AudioCaptureProtocol_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_AudioCaptureProtocol_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNullAudioCaptureProtocol;

// ********** End Class UNullAudioCaptureProtocol **************************************************

// ********** Begin Class UMasterAudioSubmixCaptureProtocol ****************************************
struct Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics;
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_AudioCaptureProtocol_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMasterAudioSubmixCaptureProtocol(); \
	friend struct ::Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENECAPTURE_API UClass* ::Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_NoRegister(); \
public: \
	DECLARE_CLASS2(UMasterAudioSubmixCaptureProtocol, UMovieSceneAudioCaptureProtocolBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_NoRegister) \
	DECLARE_SERIALIZER(UMasterAudioSubmixCaptureProtocol)


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_AudioCaptureProtocol_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMasterAudioSubmixCaptureProtocol(UMasterAudioSubmixCaptureProtocol&&) = delete; \
	UMasterAudioSubmixCaptureProtocol(const UMasterAudioSubmixCaptureProtocol&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENECAPTURE_API, UMasterAudioSubmixCaptureProtocol); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMasterAudioSubmixCaptureProtocol); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMasterAudioSubmixCaptureProtocol) \
	MOVIESCENECAPTURE_API virtual ~UMasterAudioSubmixCaptureProtocol();


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_AudioCaptureProtocol_h_30_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_AudioCaptureProtocol_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_AudioCaptureProtocol_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_AudioCaptureProtocol_h_34_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMasterAudioSubmixCaptureProtocol;

// ********** End Class UMasterAudioSubmixCaptureProtocol ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_AudioCaptureProtocol_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
