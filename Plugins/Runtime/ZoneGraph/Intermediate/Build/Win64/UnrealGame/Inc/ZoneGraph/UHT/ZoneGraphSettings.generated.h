// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZoneGraphSettings.h"

#ifdef ZONEGRAPH_ZoneGraphSettings_generated_h
#error "ZoneGraphSettings.generated.h already included, missing '#pragma once' in ZoneGraphSettings.h"
#endif
#define ZONEGRAPH_ZoneGraphSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UZoneGraphSettings *******************************************************
struct Z_Construct_UClass_UZoneGraphSettings_Statics;
ZONEGRAPH_API UClass* Z_Construct_UClass_UZoneGraphSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSettings_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZoneGraphSettings(); \
	friend struct ::Z_Construct_UClass_UZoneGraphSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ZONEGRAPH_API UClass* ::Z_Construct_UClass_UZoneGraphSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UZoneGraphSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZoneGraph"), Z_Construct_UClass_UZoneGraphSettings_NoRegister) \
	DECLARE_SERIALIZER(UZoneGraphSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Plugins");} \



#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSettings_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZoneGraphSettings(UZoneGraphSettings&&) = delete; \
	UZoneGraphSettings(const UZoneGraphSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ZONEGRAPH_API, UZoneGraphSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZoneGraphSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZoneGraphSettings) \
	ZONEGRAPH_API virtual ~UZoneGraphSettings();


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSettings_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSettings_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSettings_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSettings_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZoneGraphSettings;

// ********** End Class UZoneGraphSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
