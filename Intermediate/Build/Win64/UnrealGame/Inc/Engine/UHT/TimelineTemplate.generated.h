// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TimelineTemplate.h"

#ifdef ENGINE_TimelineTemplate_generated_h
#error "TimelineTemplate.generated.h already included, missing '#pragma once' in TimelineTemplate.h"
#endif
#define ENGINE_TimelineTemplate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTTTrackBase ******************************************************
struct Z_Construct_UScriptStruct_FTTTrackBase_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTTTrackBase_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTTTrackBase;
// ********** End ScriptStruct FTTTrackBase ********************************************************

// ********** Begin ScriptStruct FTTTrackId ********************************************************
struct Z_Construct_UScriptStruct_FTTTrackId_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTTTrackId_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTTTrackId;
// ********** End ScriptStruct FTTTrackId **********************************************************

// ********** Begin ScriptStruct FTTEventTrack *****************************************************
struct Z_Construct_UScriptStruct_FTTEventTrack_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_89_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTTEventTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTTTrackBase Super;


struct FTTEventTrack;
// ********** End ScriptStruct FTTEventTrack *******************************************************

// ********** Begin ScriptStruct FTTPropertyTrack **************************************************
struct Z_Construct_UScriptStruct_FTTPropertyTrack_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_115_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTTPropertyTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTTTrackBase Super;


struct FTTPropertyTrack;
// ********** End ScriptStruct FTTPropertyTrack ****************************************************

// ********** Begin ScriptStruct FTTFloatTrack *****************************************************
struct Z_Construct_UScriptStruct_FTTFloatTrack_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_129_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTTFloatTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTTPropertyTrack Super;


struct FTTFloatTrack;
// ********** End ScriptStruct FTTFloatTrack *******************************************************

// ********** Begin ScriptStruct FTTVectorTrack ****************************************************
struct Z_Construct_UScriptStruct_FTTVectorTrack_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_149_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTTVectorTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTTPropertyTrack Super;


struct FTTVectorTrack;
// ********** End ScriptStruct FTTVectorTrack ******************************************************

// ********** Begin ScriptStruct FTTLinearColorTrack ***********************************************
struct Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_169_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTTPropertyTrack Super;


struct FTTLinearColorTrack;
// ********** End ScriptStruct FTTLinearColorTrack *************************************************

// ********** Begin Class UTimelineTemplate ********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTimelineTemplate, ENGINE_API)


struct Z_Construct_UClass_UTimelineTemplate_Statics;
ENGINE_API UClass* Z_Construct_UClass_UTimelineTemplate_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_INCLASS \
private: \
	static void StaticRegisterNativesUTimelineTemplate(); \
	friend struct ::Z_Construct_UClass_UTimelineTemplate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UTimelineTemplate_NoRegister(); \
public: \
	DECLARE_CLASS2(UTimelineTemplate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UTimelineTemplate_NoRegister) \
	DECLARE_SERIALIZER(UTimelineTemplate) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTimelineTemplate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimelineTemplate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTimelineTemplate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimelineTemplate); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTimelineTemplate(UTimelineTemplate&&) = delete; \
	UTimelineTemplate(const UTimelineTemplate&) = delete; \
	ENGINE_API virtual ~UTimelineTemplate();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_185_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTimelineTemplate;

// ********** End Class UTimelineTemplate **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
