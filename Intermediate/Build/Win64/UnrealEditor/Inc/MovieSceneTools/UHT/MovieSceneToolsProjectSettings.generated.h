// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneToolsProjectSettings.h"

#ifdef MOVIESCENETOOLS_MovieSceneToolsProjectSettings_generated_h
#error "MovieSceneToolsProjectSettings.generated.h already included, missing '#pragma once' in MovieSceneToolsProjectSettings.h"
#endif
#define MOVIESCENETOOLS_MovieSceneToolsProjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneToolsPropertyTrackSettings *****************************
struct Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics;
#define FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics; \
	MOVIESCENETOOLS_API static class UScriptStruct* StaticStruct();


struct FMovieSceneToolsPropertyTrackSettings;
// ********** End ScriptStruct FMovieSceneToolsPropertyTrackSettings *******************************

// ********** Begin ScriptStruct FMovieSceneToolsFbxSettings ***************************************
struct Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics;
#define FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics; \
	MOVIESCENETOOLS_API static class UScriptStruct* StaticStruct();


struct FMovieSceneToolsFbxSettings;
// ********** End ScriptStruct FMovieSceneToolsFbxSettings *****************************************

// ********** Begin Class UMovieSceneToolsProjectSettings ******************************************
struct Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics;
MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UMovieSceneToolsProjectSettings_NoRegister();

#define FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneToolsProjectSettings(); \
	friend struct ::Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETOOLS_API UClass* ::Z_Construct_UClass_UMovieSceneToolsProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneToolsProjectSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneTools"), Z_Construct_UClass_UMovieSceneToolsProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneToolsProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_60_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneToolsProjectSettings(UMovieSceneToolsProjectSettings&&) = delete; \
	UMovieSceneToolsProjectSettings(const UMovieSceneToolsProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETOOLS_API, UMovieSceneToolsProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneToolsProjectSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneToolsProjectSettings) \
	MOVIESCENETOOLS_API virtual ~UMovieSceneToolsProjectSettings();


#define FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_57_PROLOG
#define FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneToolsProjectSettings;

// ********** End Class UMovieSceneToolsProjectSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h

// ********** Begin Enum EMovieSceneToolsPropertyTrackType *****************************************
#define FOREACH_ENUM_EMOVIESCENETOOLSPROPERTYTRACKTYPE(op) \
	op(EMovieSceneToolsPropertyTrackType::FloatTrack) \
	op(EMovieSceneToolsPropertyTrackType::DoubleTrack) 

enum class EMovieSceneToolsPropertyTrackType;
template<> struct TIsUEnumClass<EMovieSceneToolsPropertyTrackType> { enum { Value = true }; };
template<> MOVIESCENETOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieSceneToolsPropertyTrackType>();
// ********** End Enum EMovieSceneToolsPropertyTrackType *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
