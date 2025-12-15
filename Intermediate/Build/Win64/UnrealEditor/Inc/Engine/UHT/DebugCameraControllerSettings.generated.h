// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/DebugCameraControllerSettings.h"

#ifdef ENGINE_DebugCameraControllerSettings_generated_h
#error "DebugCameraControllerSettings.generated.h already included, missing '#pragma once' in DebugCameraControllerSettings.h"
#endif
#define ENGINE_DebugCameraControllerSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDebugCameraControllerSettingsViewModeIndex ***********************
struct Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FDebugCameraControllerSettingsViewModeIndex;
// ********** End ScriptStruct FDebugCameraControllerSettingsViewModeIndex *************************

// ********** Begin Class UDebugCameraControllerSettings *******************************************
struct Z_Construct_UClass_UDebugCameraControllerSettings_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDebugCameraControllerSettings_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUDebugCameraControllerSettings(); \
	friend struct ::Z_Construct_UClass_UDebugCameraControllerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDebugCameraControllerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDebugCameraControllerSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDebugCameraControllerSettings_NoRegister) \
	DECLARE_SERIALIZER(UDebugCameraControllerSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDebugCameraControllerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDebugCameraControllerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDebugCameraControllerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDebugCameraControllerSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDebugCameraControllerSettings(UDebugCameraControllerSettings&&) = delete; \
	UDebugCameraControllerSettings(const UDebugCameraControllerSettings&) = delete; \
	ENGINE_API virtual ~UDebugCameraControllerSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_31_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_34_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDebugCameraControllerSettings;

// ********** End Class UDebugCameraControllerSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
