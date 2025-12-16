// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Teds/FabMyFolderIntegration.h"

#ifdef FAB_FabMyFolderIntegration_generated_h
#error "FabMyFolderIntegration.generated.h already included, missing '#pragma once' in FabMyFolderIntegration.h"
#endif
#define FAB_FabMyFolderIntegration_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFabFactory **************************************************************
struct Z_Construct_UClass_UFabFactory_Statics;
FAB_API UClass* Z_Construct_UClass_UFabFactory_NoRegister();

#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Teds_FabMyFolderIntegration_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFabFactory(); \
	friend struct ::Z_Construct_UClass_UFabFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FAB_API UClass* ::Z_Construct_UClass_UFabFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UFabFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Fab"), Z_Construct_UClass_UFabFactory_NoRegister) \
	DECLARE_SERIALIZER(UFabFactory)


#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Teds_FabMyFolderIntegration_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFabFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFabFactory(UFabFactory&&) = delete; \
	UFabFactory(const UFabFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFabFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFabFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFabFactory)


#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Teds_FabMyFolderIntegration_h_19_PROLOG
#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Teds_FabMyFolderIntegration_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Teds_FabMyFolderIntegration_h_22_INCLASS_NO_PURE_DECLS \
	FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Teds_FabMyFolderIntegration_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFabFactory;

// ********** End Class UFabFactory ****************************************************************

// ********** Begin ScriptStruct FFabDistributionMethodTag *****************************************
struct Z_Construct_UScriptStruct_FFabDistributionMethodTag_Statics;
#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Teds_FabMyFolderIntegration_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFabDistributionMethodTag_Statics; \
	FAB_API static class UScriptStruct* StaticStruct(); \
	typedef FEditorDataStorageTag Super; \
	struct EditorDataStorage_DynamicColumnTemplate{};


struct FFabDistributionMethodTag;
// ********** End ScriptStruct FFabDistributionMethodTag *******************************************

// ********** Begin ScriptStruct FFabObjectNameColumn **********************************************
struct Z_Construct_UScriptStruct_FFabObjectNameColumn_Statics;
#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Teds_FabMyFolderIntegration_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFabObjectNameColumn_Statics; \
	FAB_API static class UScriptStruct* StaticStruct(); \
	typedef FEditorDataStorageColumn Super;


struct FFabObjectNameColumn;
// ********** End ScriptStruct FFabObjectNameColumn ************************************************

// ********** Begin ScriptStruct FFabObjectColumn **************************************************
struct Z_Construct_UScriptStruct_FFabObjectColumn_Statics;
#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Teds_FabMyFolderIntegration_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFabObjectColumn_Statics; \
	FAB_API static class UScriptStruct* StaticStruct(); \
	typedef FEditorDataStorageColumn Super;


struct FFabObjectColumn;
// ********** End ScriptStruct FFabObjectColumn ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Teds_FabMyFolderIntegration_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
