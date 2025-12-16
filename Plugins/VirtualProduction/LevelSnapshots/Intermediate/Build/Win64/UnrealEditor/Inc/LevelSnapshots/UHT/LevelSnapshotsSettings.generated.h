// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/LevelSnapshotsSettings.h"

#ifdef LEVELSNAPSHOTS_LevelSnapshotsSettings_generated_h
#error "LevelSnapshotsSettings.generated.h already included, missing '#pragma once' in LevelSnapshotsSettings.h"
#endif
#define LEVELSNAPSHOTS_LevelSnapshotsSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULevelSnapshotsSettings **************************************************
struct Z_Construct_UClass_ULevelSnapshotsSettings_Statics;
LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_ULevelSnapshotsSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_LevelSnapshotsSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSnapshotsSettings(); \
	friend struct ::Z_Construct_UClass_ULevelSnapshotsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSNAPSHOTS_API UClass* ::Z_Construct_UClass_ULevelSnapshotsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelSnapshotsSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelSnapshots"), Z_Construct_UClass_ULevelSnapshotsSettings_NoRegister) \
	DECLARE_SERIALIZER(ULevelSnapshotsSettings)


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_LevelSnapshotsSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSnapshotsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelSnapshotsSettings(ULevelSnapshotsSettings&&) = delete; \
	ULevelSnapshotsSettings(const ULevelSnapshotsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSnapshotsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSnapshotsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSnapshotsSettings) \
	NO_API virtual ~ULevelSnapshotsSettings();


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_LevelSnapshotsSettings_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_LevelSnapshotsSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_LevelSnapshotsSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_LevelSnapshotsSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelSnapshotsSettings;

// ********** End Class ULevelSnapshotsSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_LevelSnapshotsSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
