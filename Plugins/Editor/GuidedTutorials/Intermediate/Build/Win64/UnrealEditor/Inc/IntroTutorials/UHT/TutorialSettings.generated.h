// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TutorialSettings.h"

#ifdef INTROTUTORIALS_TutorialSettings_generated_h
#error "TutorialSettings.generated.h already included, missing '#pragma once' in TutorialSettings.h"
#endif
#define INTROTUTORIALS_TutorialSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTutorialSettings ********************************************************
struct Z_Construct_UClass_UTutorialSettings_Statics;
INTROTUTORIALS_API UClass* Z_Construct_UClass_UTutorialSettings_NoRegister();

#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_TutorialSettings_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTutorialSettings(); \
	friend struct ::Z_Construct_UClass_UTutorialSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTROTUTORIALS_API UClass* ::Z_Construct_UClass_UTutorialSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UTutorialSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IntroTutorials"), Z_Construct_UClass_UTutorialSettings_NoRegister) \
	DECLARE_SERIALIZER(UTutorialSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_TutorialSettings_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTutorialSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTutorialSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTutorialSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTutorialSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTutorialSettings(UTutorialSettings&&) = delete; \
	UTutorialSettings(const UTutorialSettings&) = delete; \
	NO_API virtual ~UTutorialSettings();


#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_TutorialSettings_h_13_PROLOG
#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_TutorialSettings_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_TutorialSettings_h_16_INCLASS \
	FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_TutorialSettings_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTutorialSettings;

// ********** End Class UTutorialSettings **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_TutorialSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
