// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PSDFile.h"

#ifdef PSDIMPORTER_PSDFile_generated_h
#error "PSDFile.generated.h already included, missing '#pragma once' in PSDFile.h"
#endif
#define PSDIMPORTER_PSDFile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPSDFileLayerId ***************************************************
struct Z_Construct_UScriptStruct_FPSDFileLayerId_Statics;
#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDFile_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPSDFileLayerId_Statics; \
	PSDIMPORTER_API static class UScriptStruct* StaticStruct();


struct FPSDFileLayerId;
// ********** End ScriptStruct FPSDFileLayerId *****************************************************

// ********** Begin ScriptStruct FPSDFileLayer *****************************************************
struct Z_Construct_UScriptStruct_FPSDFileLayer_Statics;
#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDFile_h_82_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPSDFileLayer_Statics; \
	PSDIMPORTER_API static class UScriptStruct* StaticStruct();


struct FPSDFileLayer;
// ********** End ScriptStruct FPSDFileLayer *******************************************************

// ********** Begin ScriptStruct FPSDFileDocument **************************************************
struct Z_Construct_UScriptStruct_FPSDFileDocument_Statics;
#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDFile_h_212_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPSDFileDocument_Statics; \
	PSDIMPORTER_API static class UScriptStruct* StaticStruct();


struct FPSDFileDocument;
// ********** End ScriptStruct FPSDFileDocument ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDFile_h

// ********** Begin Enum EPSDFileLayerImportOperation **********************************************
#define FOREACH_ENUM_EPSDFILELAYERIMPORTOPERATION(op) \
	op(EPSDFileLayerImportOperation::Ignore) \
	op(EPSDFileLayerImportOperation::Import) \
	op(EPSDFileLayerImportOperation::ImportMerged) \
	op(EPSDFileLayerImportOperation::Rasterize) 

enum class EPSDFileLayerImportOperation : uint8;
template<> struct TIsUEnumClass<EPSDFileLayerImportOperation> { enum { Value = true }; };
template<> PSDIMPORTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EPSDFileLayerImportOperation>();
// ********** End Enum EPSDFileLayerImportOperation ************************************************

// ********** Begin Enum EPSDFileLayerType *********************************************************
#define FOREACH_ENUM_EPSDFILELAYERTYPE(op) \
	op(EPSDFileLayerType::Any) \
	op(EPSDFileLayerType::Group) 

enum class EPSDFileLayerType : uint8;
template<> struct TIsUEnumClass<EPSDFileLayerType> { enum { Value = true }; };
template<> PSDIMPORTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EPSDFileLayerType>();
// ********** End Enum EPSDFileLayerType ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
