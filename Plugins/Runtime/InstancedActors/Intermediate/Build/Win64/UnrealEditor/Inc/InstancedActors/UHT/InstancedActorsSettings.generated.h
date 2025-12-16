// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InstancedActorsSettings.h"

#ifdef INSTANCEDACTORS_InstancedActorsSettings_generated_h
#error "InstancedActorsSettings.generated.h already included, missing '#pragma once' in InstancedActorsSettings.h"
#endif
#define INSTANCEDACTORS_InstancedActorsSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FInstancedActorsConfig ********************************************
struct Z_Construct_UScriptStruct_FInstancedActorsConfig_Statics;
#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsSettings_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInstancedActorsConfig_Statics; \
	INSTANCEDACTORS_API static class UScriptStruct* StaticStruct();


struct FInstancedActorsConfig;
// ********** End ScriptStruct FInstancedActorsConfig **********************************************

// ********** Begin ScriptStruct FClassConfigOverrideEntry *****************************************
struct Z_Construct_UScriptStruct_FClassConfigOverrideEntry_Statics;
#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsSettings_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FClassConfigOverrideEntry_Statics; \
	INSTANCEDACTORS_API static class UScriptStruct* StaticStruct();


struct FClassConfigOverrideEntry;
// ********** End ScriptStruct FClassConfigOverrideEntry *******************************************

// ********** Begin Class UInstancedActorsProjectSettings ******************************************
struct Z_Construct_UClass_UInstancedActorsProjectSettings_Statics;
INSTANCEDACTORS_API UClass* Z_Construct_UClass_UInstancedActorsProjectSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsSettings_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInstancedActorsProjectSettings(); \
	friend struct ::Z_Construct_UClass_UInstancedActorsProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INSTANCEDACTORS_API UClass* ::Z_Construct_UClass_UInstancedActorsProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UInstancedActorsProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/InstancedActors"), Z_Construct_UClass_UInstancedActorsProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UInstancedActorsProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("InstancedActors");} \



#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsSettings_h_53_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInstancedActorsProjectSettings(UInstancedActorsProjectSettings&&) = delete; \
	UInstancedActorsProjectSettings(const UInstancedActorsProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INSTANCEDACTORS_API, UInstancedActorsProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInstancedActorsProjectSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInstancedActorsProjectSettings) \
	INSTANCEDACTORS_API virtual ~UInstancedActorsProjectSettings();


#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsSettings_h_50_PROLOG
#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsSettings_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsSettings_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsSettings_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInstancedActorsProjectSettings;

// ********** End Class UInstancedActorsProjectSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
