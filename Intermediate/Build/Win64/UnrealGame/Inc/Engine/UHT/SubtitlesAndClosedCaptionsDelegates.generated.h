// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subtitles/SubtitlesAndClosedCaptionsDelegates.h"

#ifdef ENGINE_SubtitlesAndClosedCaptionsDelegates_generated_h
#error "SubtitlesAndClosedCaptionsDelegates.generated.h already included, missing '#pragma once' in SubtitlesAndClosedCaptionsDelegates.h"
#endif
#define ENGINE_SubtitlesAndClosedCaptionsDelegates_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSubtitleAssetData ************************************************
struct Z_Construct_UScriptStruct_FSubtitleAssetData_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Subtitles_SubtitlesAndClosedCaptionsDelegates_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSubtitleAssetData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSubtitleAssetData;
// ********** End ScriptStruct FSubtitleAssetData **************************************************

// ********** Begin Class USubtitleAssetUserData ***************************************************
struct Z_Construct_UClass_USubtitleAssetUserData_Statics;
ENGINE_API UClass* Z_Construct_UClass_USubtitleAssetUserData_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Subtitles_SubtitlesAndClosedCaptionsDelegates_h_113_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubtitleAssetUserData(); \
	friend struct ::Z_Construct_UClass_USubtitleAssetUserData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USubtitleAssetUserData_NoRegister(); \
public: \
	DECLARE_CLASS2(USubtitleAssetUserData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USubtitleAssetUserData_NoRegister) \
	DECLARE_SERIALIZER(USubtitleAssetUserData)


#define FID_Engine_Source_Runtime_Engine_Public_Subtitles_SubtitlesAndClosedCaptionsDelegates_h_113_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USubtitleAssetUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubtitleAssetUserData(USubtitleAssetUserData&&) = delete; \
	USubtitleAssetUserData(const USubtitleAssetUserData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USubtitleAssetUserData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubtitleAssetUserData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubtitleAssetUserData) \
	ENGINE_API virtual ~USubtitleAssetUserData();


#define FID_Engine_Source_Runtime_Engine_Public_Subtitles_SubtitlesAndClosedCaptionsDelegates_h_110_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Subtitles_SubtitlesAndClosedCaptionsDelegates_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subtitles_SubtitlesAndClosedCaptionsDelegates_h_113_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subtitles_SubtitlesAndClosedCaptionsDelegates_h_113_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubtitleAssetUserData;

// ********** End Class USubtitleAssetUserData *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Subtitles_SubtitlesAndClosedCaptionsDelegates_h

// ********** Begin Enum ESubtitleTiming ***********************************************************
#define FOREACH_ENUM_ESUBTITLETIMING(op) \
	op(ESubtitleTiming::InternallyTimed) \
	op(ESubtitleTiming::ExternallyTimed) 

enum class ESubtitleTiming : uint8;
template<> struct TIsUEnumClass<ESubtitleTiming> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESubtitleTiming>();
// ********** End Enum ESubtitleTiming *************************************************************

// ********** Begin Enum ESubtitleDurationType *****************************************************
#define FOREACH_ENUM_ESUBTITLEDURATIONTYPE(op) \
	op(ESubtitleDurationType::UseSoundDuration) \
	op(ESubtitleDurationType::UseDurationProperty) 

enum class ESubtitleDurationType : uint8;
template<> struct TIsUEnumClass<ESubtitleDurationType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESubtitleDurationType>();
// ********** End Enum ESubtitleDurationType *******************************************************

// ********** Begin Enum ESubtitleType *************************************************************
#define FOREACH_ENUM_ESUBTITLETYPE(op) \
	op(ESubtitleType::Subtitle) \
	op(ESubtitleType::ClosedCaption) \
	op(ESubtitleType::AudioDescription) 

enum class ESubtitleType : uint8;
template<> struct TIsUEnumClass<ESubtitleType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESubtitleType>();
// ********** End Enum ESubtitleType ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
