// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZoneGraphData.h"

#ifdef ZONEGRAPH_ZoneGraphData_generated_h
#error "ZoneGraphData.generated.h already included, missing '#pragma once' in ZoneGraphData.h"
#endif
#define ZONEGRAPH_ZoneGraphData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AZoneGraphData ***********************************************************
struct Z_Construct_UClass_AZoneGraphData_Statics;
ZONEGRAPH_API UClass* Z_Construct_UClass_AZoneGraphData_NoRegister();

#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphData_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZoneGraphData(); \
	friend struct ::Z_Construct_UClass_AZoneGraphData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ZONEGRAPH_API UClass* ::Z_Construct_UClass_AZoneGraphData_NoRegister(); \
public: \
	DECLARE_CLASS2(AZoneGraphData, AActor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZoneGraph"), Z_Construct_UClass_AZoneGraphData_NoRegister) \
	DECLARE_SERIALIZER(AZoneGraphData) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("ZoneGraph");} \



#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphData_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AZoneGraphData(AZoneGraphData&&) = delete; \
	AZoneGraphData(const AZoneGraphData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ZONEGRAPH_API, AZoneGraphData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZoneGraphData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZoneGraphData) \
	ZONEGRAPH_API virtual ~AZoneGraphData();


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphData_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphData_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphData_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphData_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AZoneGraphData;

// ********** End Class AZoneGraphData *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
