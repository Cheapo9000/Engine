// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TileMapAssetImportData.h"

#ifdef PAPER2DEDITOR_TileMapAssetImportData_generated_h
#error "TileMapAssetImportData.generated.h already included, missing '#pragma once' in TileMapAssetImportData.h"
#endif
#define PAPER2DEDITOR_TileMapAssetImportData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTileSetImportMapping *********************************************
struct Z_Construct_UScriptStruct_FTileSetImportMapping_Statics;
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapAssetImportData_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTileSetImportMapping_Statics; \
	PAPER2DEDITOR_API static class UScriptStruct* StaticStruct();


struct FTileSetImportMapping;
// ********** End ScriptStruct FTileSetImportMapping ***********************************************

// ********** Begin Class UTileMapAssetImportData **************************************************
struct Z_Construct_UClass_UTileMapAssetImportData_Statics;
PAPER2DEDITOR_API UClass* Z_Construct_UClass_UTileMapAssetImportData_NoRegister();

#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapAssetImportData_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUTileMapAssetImportData(); \
	friend struct ::Z_Construct_UClass_UTileMapAssetImportData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PAPER2DEDITOR_API UClass* ::Z_Construct_UClass_UTileMapAssetImportData_NoRegister(); \
public: \
	DECLARE_CLASS2(UTileMapAssetImportData, UAssetImportData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Paper2DEditor"), Z_Construct_UClass_UTileMapAssetImportData_NoRegister) \
	DECLARE_SERIALIZER(UTileMapAssetImportData)


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapAssetImportData_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PAPER2DEDITOR_API UTileMapAssetImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTileMapAssetImportData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PAPER2DEDITOR_API, UTileMapAssetImportData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTileMapAssetImportData); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTileMapAssetImportData(UTileMapAssetImportData&&) = delete; \
	UTileMapAssetImportData(const UTileMapAssetImportData&) = delete; \
	PAPER2DEDITOR_API virtual ~UTileMapAssetImportData();


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapAssetImportData_h_30_PROLOG
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapAssetImportData_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapAssetImportData_h_33_INCLASS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapAssetImportData_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTileMapAssetImportData;

// ********** End Class UTileMapAssetImportData ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapAssetImportData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
