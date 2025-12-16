// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaStreamObjectHandlerSubsystem.h"

#ifdef MEDIASTREAM_MediaStreamObjectHandlerSubsystem_generated_h
#error "MediaStreamObjectHandlerSubsystem.generated.h already included, missing '#pragma once' in MediaStreamObjectHandlerSubsystem.h"
#endif
#define MEDIASTREAM_MediaStreamObjectHandlerSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UMediaPlayer;
class UMediaStreamObjectHandlerSubsystem;
class UObject;
struct FMediaStreamObjectHandlerCreatePlayerParams;

// ********** Begin Class UMediaStreamObjectHandlerSubsystem ***************************************
#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamObjectHandlerSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateMediaPlayer); \
	DECLARE_FUNCTION(execHasObjectHandler); \
	DECLARE_FUNCTION(execCanHandleObject); \
	DECLARE_FUNCTION(execGet);


struct Z_Construct_UClass_UMediaStreamObjectHandlerSubsystem_Statics;
MEDIASTREAM_API UClass* Z_Construct_UClass_UMediaStreamObjectHandlerSubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamObjectHandlerSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaStreamObjectHandlerSubsystem(); \
	friend struct ::Z_Construct_UClass_UMediaStreamObjectHandlerSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIASTREAM_API UClass* ::Z_Construct_UClass_UMediaStreamObjectHandlerSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaStreamObjectHandlerSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaStream"), Z_Construct_UClass_UMediaStreamObjectHandlerSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMediaStreamObjectHandlerSubsystem)


#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamObjectHandlerSubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIASTREAM_API UMediaStreamObjectHandlerSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaStreamObjectHandlerSubsystem(UMediaStreamObjectHandlerSubsystem&&) = delete; \
	UMediaStreamObjectHandlerSubsystem(const UMediaStreamObjectHandlerSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIASTREAM_API, UMediaStreamObjectHandlerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaStreamObjectHandlerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMediaStreamObjectHandlerSubsystem) \
	MEDIASTREAM_API virtual ~UMediaStreamObjectHandlerSubsystem();


#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamObjectHandlerSubsystem_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamObjectHandlerSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamObjectHandlerSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamObjectHandlerSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamObjectHandlerSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaStreamObjectHandlerSubsystem;

// ********** End Class UMediaStreamObjectHandlerSubsystem *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamObjectHandlerSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
