// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshDrawCommandStatsSettings.h"

#ifdef ENGINE_MeshDrawCommandStatsSettings_generated_h
#error "MeshDrawCommandStatsSettings.generated.h already included, missing '#pragma once' in MeshDrawCommandStatsSettings.h"
#endif
#define ENGINE_MeshDrawCommandStatsSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMeshDrawCommandStatsBudget ***************************************
struct Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_MeshDrawCommandStatsSettings_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMeshDrawCommandStatsBudget;
// ********** End ScriptStruct FMeshDrawCommandStatsBudget *****************************************

// ********** Begin ScriptStruct FMeshDrawCommandStatsBudgetTotals *********************************
struct Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudgetTotals_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_MeshDrawCommandStatsSettings_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudgetTotals_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMeshDrawCommandStatsBudgetTotals;
// ********** End ScriptStruct FMeshDrawCommandStatsBudgetTotals ***********************************

// ********** Begin Class UMeshDrawCommandStatsSettings ********************************************
struct Z_Construct_UClass_UMeshDrawCommandStatsSettings_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMeshDrawCommandStatsSettings_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_MeshDrawCommandStatsSettings_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshDrawCommandStatsSettings(); \
	friend struct ::Z_Construct_UClass_UMeshDrawCommandStatsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMeshDrawCommandStatsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshDrawCommandStatsSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_PerPlatformConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMeshDrawCommandStatsSettings_NoRegister) \
	DECLARE_SERIALIZER(UMeshDrawCommandStatsSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Public_MeshDrawCommandStatsSettings_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMeshDrawCommandStatsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshDrawCommandStatsSettings(UMeshDrawCommandStatsSettings&&) = delete; \
	UMeshDrawCommandStatsSettings(const UMeshDrawCommandStatsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMeshDrawCommandStatsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshDrawCommandStatsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshDrawCommandStatsSettings) \
	ENGINE_API virtual ~UMeshDrawCommandStatsSettings();


#define FID_Engine_Source_Runtime_Engine_Public_MeshDrawCommandStatsSettings_h_54_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_MeshDrawCommandStatsSettings_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_MeshDrawCommandStatsSettings_h_57_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_MeshDrawCommandStatsSettings_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshDrawCommandStatsSettings;

// ********** End Class UMeshDrawCommandStatsSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_MeshDrawCommandStatsSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
