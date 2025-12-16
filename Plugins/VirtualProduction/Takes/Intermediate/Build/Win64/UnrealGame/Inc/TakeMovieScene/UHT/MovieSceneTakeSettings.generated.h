// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneTakeSettings.h"

#ifdef TAKEMOVIESCENE_MovieSceneTakeSettings_generated_h
#error "MovieSceneTakeSettings.generated.h already included, missing '#pragma once' in MovieSceneTakeSettings.h"
#endif
#define TAKEMOVIESCENE_MovieSceneTakeSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneTakeSettings **************************************************
struct Z_Construct_UClass_UMovieSceneTakeSettings_Statics;
TAKEMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTakeSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTakeSettings(); \
	friend struct ::Z_Construct_UClass_UMovieSceneTakeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TAKEMOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneTakeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneTakeSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TakeMovieScene"), Z_Construct_UClass_UMovieSceneTakeSettings_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneTakeSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneTakeSettings(UMovieSceneTakeSettings&&) = delete; \
	UMovieSceneTakeSettings(const UMovieSceneTakeSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TAKEMOVIESCENE_API, UMovieSceneTakeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTakeSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneTakeSettings) \
	TAKEMOVIESCENE_API virtual ~UMovieSceneTakeSettings();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSettings_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSettings_h_15_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneTakeSettings;

// ********** End Class UMovieSceneTakeSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
