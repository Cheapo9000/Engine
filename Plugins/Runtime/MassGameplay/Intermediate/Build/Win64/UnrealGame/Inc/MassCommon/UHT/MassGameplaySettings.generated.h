// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassGameplaySettings.h"

#ifdef MASSCOMMON_MassGameplaySettings_generated_h
#error "MassGameplaySettings.generated.h already included, missing '#pragma once' in MassGameplaySettings.h"
#endif
#define MASSCOMMON_MassGameplaySettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassGameplaySettings ****************************************************
struct Z_Construct_UClass_UMassGameplaySettings_Statics;
MASSCOMMON_API UClass* Z_Construct_UClass_UMassGameplaySettings_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassCommon_Public_MassGameplaySettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassGameplaySettings(); \
	friend struct ::Z_Construct_UClass_UMassGameplaySettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSCOMMON_API UClass* ::Z_Construct_UClass_UMassGameplaySettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassGameplaySettings, UMassModuleSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassCommon"), Z_Construct_UClass_UMassGameplaySettings_NoRegister) \
	DECLARE_SERIALIZER(UMassGameplaySettings)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassCommon_Public_MassGameplaySettings_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSCOMMON_API UMassGameplaySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassGameplaySettings(UMassGameplaySettings&&) = delete; \
	UMassGameplaySettings(const UMassGameplaySettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSCOMMON_API, UMassGameplaySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassGameplaySettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassGameplaySettings) \
	MASSCOMMON_API virtual ~UMassGameplaySettings();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassCommon_Public_MassGameplaySettings_h_9_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassCommon_Public_MassGameplaySettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassCommon_Public_MassGameplaySettings_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassCommon_Public_MassGameplaySettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassGameplaySettings;

// ********** End Class UMassGameplaySettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassCommon_Public_MassGameplaySettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
