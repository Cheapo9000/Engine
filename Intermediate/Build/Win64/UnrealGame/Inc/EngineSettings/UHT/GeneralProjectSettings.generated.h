// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeneralProjectSettings.h"

#ifdef ENGINESETTINGS_GeneralProjectSettings_generated_h
#error "GeneralProjectSettings.generated.h already included, missing '#pragma once' in GeneralProjectSettings.h"
#endif
#define ENGINESETTINGS_GeneralProjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGeneralProjectSettings **************************************************
struct Z_Construct_UClass_UGeneralProjectSettings_Statics;
ENGINESETTINGS_API UClass* Z_Construct_UClass_UGeneralProjectSettings_NoRegister();

#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGeneralProjectSettings(); \
	friend struct ::Z_Construct_UClass_UGeneralProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINESETTINGS_API UClass* ::Z_Construct_UClass_UGeneralProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeneralProjectSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EngineSettings"), Z_Construct_UClass_UGeneralProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UGeneralProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINESETTINGS_API UGeneralProjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeneralProjectSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINESETTINGS_API, UGeneralProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeneralProjectSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeneralProjectSettings(UGeneralProjectSettings&&) = delete; \
	UGeneralProjectSettings(const UGeneralProjectSettings&) = delete; \
	ENGINESETTINGS_API virtual ~UGeneralProjectSettings();


#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_12_PROLOG
#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_16_INCLASS \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeneralProjectSettings;

// ********** End Class UGeneralProjectSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
