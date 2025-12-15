// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshBudgetProjectSettings.h"

#ifdef ENGINE_MeshBudgetProjectSettings_generated_h
#error "MeshBudgetProjectSettings.generated.h already included, missing '#pragma once' in MeshBudgetProjectSettings.h"
#endif
#define ENGINE_MeshBudgetProjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FStaticMeshBudgetInfo *********************************************
struct Z_Construct_UScriptStruct_FStaticMeshBudgetInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_MeshBudgetProjectSettings_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStaticMeshBudgetInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FStaticMeshBudgetInfo;
// ********** End ScriptStruct FStaticMeshBudgetInfo ***********************************************

// ********** Begin Class UMeshBudgetProjectSettings ***********************************************
struct Z_Construct_UClass_UMeshBudgetProjectSettings_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMeshBudgetProjectSettings_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_MeshBudgetProjectSettings_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshBudgetProjectSettings(); \
	friend struct ::Z_Construct_UClass_UMeshBudgetProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMeshBudgetProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshBudgetProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMeshBudgetProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UMeshBudgetProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Public_MeshBudgetProjectSettings_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMeshBudgetProjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshBudgetProjectSettings(UMeshBudgetProjectSettings&&) = delete; \
	UMeshBudgetProjectSettings(const UMeshBudgetProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMeshBudgetProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshBudgetProjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshBudgetProjectSettings) \
	ENGINE_API virtual ~UMeshBudgetProjectSettings();


#define FID_Engine_Source_Runtime_Engine_Public_MeshBudgetProjectSettings_h_30_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_MeshBudgetProjectSettings_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_MeshBudgetProjectSettings_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_MeshBudgetProjectSettings_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshBudgetProjectSettings;

// ********** End Class UMeshBudgetProjectSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_MeshBudgetProjectSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
