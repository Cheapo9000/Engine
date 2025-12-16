// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaStreamSchemeHandlerSubsystem.h"

#ifdef MEDIASTREAM_MediaStreamSchemeHandlerSubsystem_generated_h
#error "MediaStreamSchemeHandlerSubsystem.generated.h already included, missing '#pragma once' in MediaStreamSchemeHandlerSubsystem.h"
#endif
#define MEDIASTREAM_MediaStreamSchemeHandlerSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaPlayer;
class UMediaStreamSchemeHandlerSubsystem;
class UObject;
struct FMediaStreamSchemeHandlerCreatePlayerParams;
struct FMediaStreamSource;

// ********** Begin Class UMediaStreamSchemeHandlerSubsystem ***************************************
#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSchemeHandlerSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateOrUpdatePlayer); \
	DECLARE_FUNCTION(execCreateSource); \
	DECLARE_FUNCTION(execGetSchemeHandlerNames); \
	DECLARE_FUNCTION(execHasSchemeHandler); \
	DECLARE_FUNCTION(execGet);


struct Z_Construct_UClass_UMediaStreamSchemeHandlerSubsystem_Statics;
MEDIASTREAM_API UClass* Z_Construct_UClass_UMediaStreamSchemeHandlerSubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSchemeHandlerSubsystem_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaStreamSchemeHandlerSubsystem(); \
	friend struct ::Z_Construct_UClass_UMediaStreamSchemeHandlerSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIASTREAM_API UClass* ::Z_Construct_UClass_UMediaStreamSchemeHandlerSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaStreamSchemeHandlerSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaStream"), Z_Construct_UClass_UMediaStreamSchemeHandlerSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMediaStreamSchemeHandlerSubsystem)


#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSchemeHandlerSubsystem_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIASTREAM_API UMediaStreamSchemeHandlerSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaStreamSchemeHandlerSubsystem(UMediaStreamSchemeHandlerSubsystem&&) = delete; \
	UMediaStreamSchemeHandlerSubsystem(const UMediaStreamSchemeHandlerSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIASTREAM_API, UMediaStreamSchemeHandlerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaStreamSchemeHandlerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMediaStreamSchemeHandlerSubsystem) \
	MEDIASTREAM_API virtual ~UMediaStreamSchemeHandlerSubsystem();


#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSchemeHandlerSubsystem_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSchemeHandlerSubsystem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSchemeHandlerSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSchemeHandlerSubsystem_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSchemeHandlerSubsystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaStreamSchemeHandlerSubsystem;

// ********** End Class UMediaStreamSchemeHandlerSubsystem *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSchemeHandlerSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
