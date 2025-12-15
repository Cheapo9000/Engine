// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameSessionSettings.h"

#ifdef ENGINESETTINGS_GameSessionSettings_generated_h
#error "GameSessionSettings.generated.h already included, missing '#pragma once' in GameSessionSettings.h"
#endif
#define ENGINESETTINGS_GameSessionSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameSessionSettings *****************************************************
struct Z_Construct_UClass_UGameSessionSettings_Statics;
ENGINESETTINGS_API UClass* Z_Construct_UClass_UGameSessionSettings_NoRegister();

#define FID_Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGameSessionSettings(); \
	friend struct ::Z_Construct_UClass_UGameSessionSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINESETTINGS_API UClass* ::Z_Construct_UClass_UGameSessionSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameSessionSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EngineSettings"), Z_Construct_UClass_UGameSessionSettings_NoRegister) \
	DECLARE_SERIALIZER(UGameSessionSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINESETTINGS_API UGameSessionSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSessionSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINESETTINGS_API, UGameSessionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSessionSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameSessionSettings(UGameSessionSettings&&) = delete; \
	UGameSessionSettings(const UGameSessionSettings&) = delete; \
	ENGINESETTINGS_API virtual ~UGameSessionSettings();


#define FID_Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_11_PROLOG
#define FID_Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_15_INCLASS \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameSessionSettings;

// ********** End Class UGameSessionSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
