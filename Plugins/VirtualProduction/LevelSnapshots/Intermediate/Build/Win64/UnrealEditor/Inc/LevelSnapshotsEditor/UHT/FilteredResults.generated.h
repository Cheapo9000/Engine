// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/FilteredResults.h"

#ifdef LEVELSNAPSHOTSEDITOR_FilteredResults_generated_h
#error "FilteredResults.generated.h already included, missing '#pragma once' in FilteredResults.h"
#endif
#define LEVELSNAPSHOTSEDITOR_FilteredResults_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFilteredResults *********************************************************
struct Z_Construct_UClass_UFilteredResults_Statics;
LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_UFilteredResults_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FilteredResults_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFilteredResults(); \
	friend struct ::Z_Construct_UClass_UFilteredResults_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSNAPSHOTSEDITOR_API UClass* ::Z_Construct_UClass_UFilteredResults_NoRegister(); \
public: \
	DECLARE_CLASS2(UFilteredResults, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSnapshotsEditor"), Z_Construct_UClass_UFilteredResults_NoRegister) \
	DECLARE_SERIALIZER(UFilteredResults)


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FilteredResults_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFilteredResults(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFilteredResults(UFilteredResults&&) = delete; \
	UFilteredResults(const UFilteredResults&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFilteredResults); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFilteredResults); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFilteredResults) \
	NO_API virtual ~UFilteredResults();


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FilteredResults_h_17_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FilteredResults_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FilteredResults_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FilteredResults_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFilteredResults;

// ********** End Class UFilteredResults ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FilteredResults_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
