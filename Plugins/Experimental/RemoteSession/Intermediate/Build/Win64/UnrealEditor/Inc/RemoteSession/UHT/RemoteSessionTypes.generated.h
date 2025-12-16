// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RemoteSessionTypes.h"

#ifdef REMOTESESSION_RemoteSessionTypes_generated_h
#error "RemoteSessionTypes.generated.h already included, missing '#pragma once' in RemoteSessionTypes.h"
#endif
#define REMOTESESSION_RemoteSessionTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRemoteSessionChannelInfo *****************************************
struct Z_Construct_UScriptStruct_FRemoteSessionChannelInfo_Statics;
#define FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRemoteSessionChannelInfo_Statics; \
	REMOTESESSION_API static class UScriptStruct* StaticStruct();


struct FRemoteSessionChannelInfo;
// ********** End ScriptStruct FRemoteSessionChannelInfo *******************************************

// ********** Begin Class URemoteSessionSettings ***************************************************
struct Z_Construct_UClass_URemoteSessionSettings_Statics;
REMOTESESSION_API UClass* Z_Construct_UClass_URemoteSessionSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemoteSessionSettings(); \
	friend struct ::Z_Construct_UClass_URemoteSessionSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTESESSION_API UClass* ::Z_Construct_UClass_URemoteSessionSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(URemoteSessionSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RemoteSession"), Z_Construct_UClass_URemoteSessionSettings_NoRegister) \
	DECLARE_SERIALIZER(URemoteSessionSettings)


#define FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	REMOTESESSION_API URemoteSessionSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URemoteSessionSettings(URemoteSessionSettings&&) = delete; \
	URemoteSessionSettings(const URemoteSessionSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REMOTESESSION_API, URemoteSessionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteSessionSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URemoteSessionSettings) \
	REMOTESESSION_API virtual ~URemoteSessionSettings();


#define FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_62_PROLOG
#define FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_65_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URemoteSessionSettings;

// ********** End Class URemoteSessionSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h

// ********** Begin Enum ERemoteSessionChannelMode *************************************************
#define FOREACH_ENUM_EREMOTESESSIONCHANNELMODE(op) \
	op(ERemoteSessionChannelMode::Unknown) \
	op(ERemoteSessionChannelMode::Read) \
	op(ERemoteSessionChannelMode::Write) \
	op(ERemoteSessionChannelMode::MaxValue) 

enum class ERemoteSessionChannelMode : int32;
template<> struct TIsUEnumClass<ERemoteSessionChannelMode> { enum { Value = true }; };
template<> REMOTESESSION_NON_ATTRIBUTED_API UEnum* StaticEnum<ERemoteSessionChannelMode>();
// ********** End Enum ERemoteSessionChannelMode ***************************************************

// ********** Begin Enum ERemoteSessionChannelChange ***********************************************
#define FOREACH_ENUM_EREMOTESESSIONCHANNELCHANGE(op) \
	op(ERemoteSessionChannelChange::Created) \
	op(ERemoteSessionChannelChange::Destroyed) 

enum class ERemoteSessionChannelChange : int32;
template<> struct TIsUEnumClass<ERemoteSessionChannelChange> { enum { Value = true }; };
template<> REMOTESESSION_NON_ATTRIBUTED_API UEnum* StaticEnum<ERemoteSessionChannelChange>();
// ********** End Enum ERemoteSessionChannelChange *************************************************

// ********** Begin Enum ERemoteSessionConnectionChange ********************************************
#define FOREACH_ENUM_EREMOTESESSIONCONNECTIONCHANGE(op) \
	op(ERemoteSessionConnectionChange::Connected) \
	op(ERemoteSessionConnectionChange::Disconnected) 

enum class ERemoteSessionConnectionChange : int32;
template<> struct TIsUEnumClass<ERemoteSessionConnectionChange> { enum { Value = true }; };
template<> REMOTESESSION_NON_ATTRIBUTED_API UEnum* StaticEnum<ERemoteSessionConnectionChange>();
// ********** End Enum ERemoteSessionConnectionChange **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
