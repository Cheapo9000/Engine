// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanLocalLiveLinkSourceBlueprint.h"

#ifdef METAHUMANLOCALLIVELINKSOURCE_MetaHumanLocalLiveLinkSourceBlueprint_generated_h
#error "MetaHumanLocalLiveLinkSourceBlueprint.generated.h already included, missing '#pragma once' in MetaHumanLocalLiveLinkSourceBlueprint.h"
#endif
#define METAHUMANLOCALLIVELINKSOURCE_MetaHumanLocalLiveLinkSourceBlueprint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FLiveLinkSourceHandle;
struct FLiveLinkSubjectKey;
struct FMetaHumanLiveLinkAudioDevice;
struct FMetaHumanLiveLinkAudioFormat;
struct FMetaHumanLiveLinkAudioTrack;
struct FMetaHumanLiveLinkVideoDevice;
struct FMetaHumanLiveLinkVideoFormat;
struct FMetaHumanLiveLinkVideoTrack;

// ********** Begin ScriptStruct FMetaHumanLiveLinkVideoDevice *************************************
struct Z_Construct_UScriptStruct_FMetaHumanLiveLinkVideoDevice_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanLocalLiveLinkSourceBlueprint_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanLiveLinkVideoDevice_Statics; \
	METAHUMANLOCALLIVELINKSOURCE_API static class UScriptStruct* StaticStruct();


struct FMetaHumanLiveLinkVideoDevice;
// ********** End ScriptStruct FMetaHumanLiveLinkVideoDevice ***************************************

// ********** Begin ScriptStruct FMetaHumanLiveLinkVideoTrack **************************************
struct Z_Construct_UScriptStruct_FMetaHumanLiveLinkVideoTrack_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanLocalLiveLinkSourceBlueprint_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanLiveLinkVideoTrack_Statics; \
	METAHUMANLOCALLIVELINKSOURCE_API static class UScriptStruct* StaticStruct();


struct FMetaHumanLiveLinkVideoTrack;
// ********** End ScriptStruct FMetaHumanLiveLinkVideoTrack ****************************************

// ********** Begin ScriptStruct FMetaHumanLiveLinkVideoFormat *************************************
struct Z_Construct_UScriptStruct_FMetaHumanLiveLinkVideoFormat_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanLocalLiveLinkSourceBlueprint_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanLiveLinkVideoFormat_Statics; \
	METAHUMANLOCALLIVELINKSOURCE_API static class UScriptStruct* StaticStruct();


struct FMetaHumanLiveLinkVideoFormat;
// ********** End ScriptStruct FMetaHumanLiveLinkVideoFormat ***************************************

// ********** Begin ScriptStruct FMetaHumanLiveLinkAudioDevice *************************************
struct Z_Construct_UScriptStruct_FMetaHumanLiveLinkAudioDevice_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanLocalLiveLinkSourceBlueprint_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanLiveLinkAudioDevice_Statics; \
	METAHUMANLOCALLIVELINKSOURCE_API static class UScriptStruct* StaticStruct();


struct FMetaHumanLiveLinkAudioDevice;
// ********** End ScriptStruct FMetaHumanLiveLinkAudioDevice ***************************************

// ********** Begin ScriptStruct FMetaHumanLiveLinkAudioTrack **************************************
struct Z_Construct_UScriptStruct_FMetaHumanLiveLinkAudioTrack_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanLocalLiveLinkSourceBlueprint_h_92_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanLiveLinkAudioTrack_Statics; \
	METAHUMANLOCALLIVELINKSOURCE_API static class UScriptStruct* StaticStruct();


struct FMetaHumanLiveLinkAudioTrack;
// ********** End ScriptStruct FMetaHumanLiveLinkAudioTrack ****************************************

// ********** Begin ScriptStruct FMetaHumanLiveLinkAudioFormat *************************************
struct Z_Construct_UScriptStruct_FMetaHumanLiveLinkAudioFormat_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanLocalLiveLinkSourceBlueprint_h_107_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanLiveLinkAudioFormat_Statics; \
	METAHUMANLOCALLIVELINKSOURCE_API static class UScriptStruct* StaticStruct();


struct FMetaHumanLiveLinkAudioFormat;
// ********** End ScriptStruct FMetaHumanLiveLinkAudioFormat ***************************************

// ********** Begin Class UMetaHumanLocalLiveLinkSourceBlueprint ***********************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanLocalLiveLinkSourceBlueprint_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSubjectSettings); \
	DECLARE_FUNCTION(execCreateAudioSubject); \
	DECLARE_FUNCTION(execCreateAudioSource); \
	DECLARE_FUNCTION(execGetAudioFormats); \
	DECLARE_FUNCTION(execGetAudioTracks); \
	DECLARE_FUNCTION(execGetAudioDevices); \
	DECLARE_FUNCTION(execCreateVideoSubject); \
	DECLARE_FUNCTION(execCreateVideoSource); \
	DECLARE_FUNCTION(execGetVideoFormats); \
	DECLARE_FUNCTION(execGetVideoTracks); \
	DECLARE_FUNCTION(execGetVideoDevices);


struct Z_Construct_UClass_UMetaHumanLocalLiveLinkSourceBlueprint_Statics;
METAHUMANLOCALLIVELINKSOURCE_API UClass* Z_Construct_UClass_UMetaHumanLocalLiveLinkSourceBlueprint_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanLocalLiveLinkSourceBlueprint_h_134_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanLocalLiveLinkSourceBlueprint(); \
	friend struct ::Z_Construct_UClass_UMetaHumanLocalLiveLinkSourceBlueprint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANLOCALLIVELINKSOURCE_API UClass* ::Z_Construct_UClass_UMetaHumanLocalLiveLinkSourceBlueprint_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanLocalLiveLinkSourceBlueprint, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanLocalLiveLinkSource"), Z_Construct_UClass_UMetaHumanLocalLiveLinkSourceBlueprint_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanLocalLiveLinkSourceBlueprint)


#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanLocalLiveLinkSourceBlueprint_h_134_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanLocalLiveLinkSourceBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanLocalLiveLinkSourceBlueprint(UMetaHumanLocalLiveLinkSourceBlueprint&&) = delete; \
	UMetaHumanLocalLiveLinkSourceBlueprint(const UMetaHumanLocalLiveLinkSourceBlueprint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanLocalLiveLinkSourceBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanLocalLiveLinkSourceBlueprint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanLocalLiveLinkSourceBlueprint) \
	NO_API virtual ~UMetaHumanLocalLiveLinkSourceBlueprint();


#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanLocalLiveLinkSourceBlueprint_h_128_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanLocalLiveLinkSourceBlueprint_h_134_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanLocalLiveLinkSourceBlueprint_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanLocalLiveLinkSourceBlueprint_h_134_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanLocalLiveLinkSourceBlueprint_h_134_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanLocalLiveLinkSourceBlueprint;

// ********** End Class UMetaHumanLocalLiveLinkSourceBlueprint *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanLocalLiveLinkSourceBlueprint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
