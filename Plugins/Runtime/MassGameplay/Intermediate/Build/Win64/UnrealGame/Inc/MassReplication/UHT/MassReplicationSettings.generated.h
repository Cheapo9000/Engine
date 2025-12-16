// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassReplicationSettings.h"

#ifdef MASSREPLICATION_MassReplicationSettings_generated_h
#error "MassReplicationSettings.generated.h already included, missing '#pragma once' in MassReplicationSettings.h"
#endif
#define MASSREPLICATION_MassReplicationSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassReplicationSettings *************************************************
struct Z_Construct_UClass_UMassReplicationSettings_Statics;
MASSREPLICATION_API UClass* Z_Construct_UClass_UMassReplicationSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSettings_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassReplicationSettings(); \
	friend struct ::Z_Construct_UClass_UMassReplicationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSREPLICATION_API UClass* ::Z_Construct_UClass_UMassReplicationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassReplicationSettings, UMassModuleSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassReplication"), Z_Construct_UClass_UMassReplicationSettings_NoRegister) \
	DECLARE_SERIALIZER(UMassReplicationSettings)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSettings_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSREPLICATION_API UMassReplicationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassReplicationSettings(UMassReplicationSettings&&) = delete; \
	UMassReplicationSettings(const UMassReplicationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSREPLICATION_API, UMassReplicationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassReplicationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassReplicationSettings) \
	MASSREPLICATION_API virtual ~UMassReplicationSettings();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSettings_h_8_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSettings_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSettings_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSettings_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassReplicationSettings;

// ********** End Class UMassReplicationSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
