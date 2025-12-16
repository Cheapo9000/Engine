// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/GeometryScriptSelectionTypes.h"

#ifdef GEOMETRYSCRIPTINGCORE_GeometryScriptSelectionTypes_generated_h
#error "GeometryScriptSelectionTypes.generated.h already included, missing '#pragma once' in GeometryScriptSelectionTypes.h"
#endif
#define GEOMETRYSCRIPTINGCORE_GeometryScriptSelectionTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGeometryScriptMeshSelection **************************************
struct Z_Construct_UScriptStruct_FGeometryScriptMeshSelection_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_GeometryScriptSelectionTypes_h_79_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptMeshSelection_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptMeshSelection;
// ********** End ScriptStruct FGeometryScriptMeshSelection ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_GeometryScriptSelectionTypes_h

// ********** Begin Enum EGeometryScriptMeshSelectionType ******************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTMESHSELECTIONTYPE(op) \
	op(EGeometryScriptMeshSelectionType::Vertices) \
	op(EGeometryScriptMeshSelectionType::Edges) \
	op(EGeometryScriptMeshSelectionType::Triangles) \
	op(EGeometryScriptMeshSelectionType::Polygroups) 

enum class EGeometryScriptMeshSelectionType : uint8;
template<> struct TIsUEnumClass<EGeometryScriptMeshSelectionType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptMeshSelectionType>();
// ********** End Enum EGeometryScriptMeshSelectionType ********************************************

// ********** Begin Enum EGeometryScriptMeshSelectionConversionType ********************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTMESHSELECTIONCONVERSIONTYPE(op) \
	op(EGeometryScriptMeshSelectionConversionType::NoConversion) \
	op(EGeometryScriptMeshSelectionConversionType::ToVertices) \
	op(EGeometryScriptMeshSelectionConversionType::ToTriangles) \
	op(EGeometryScriptMeshSelectionConversionType::ToPolygroups) 

enum class EGeometryScriptMeshSelectionConversionType : uint8;
template<> struct TIsUEnumClass<EGeometryScriptMeshSelectionConversionType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptMeshSelectionConversionType>();
// ********** End Enum EGeometryScriptMeshSelectionConversionType **********************************

// ********** Begin Enum EGeometryScriptCombineSelectionMode ***************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTCOMBINESELECTIONMODE(op) \
	op(EGeometryScriptCombineSelectionMode::Add) \
	op(EGeometryScriptCombineSelectionMode::Subtract) \
	op(EGeometryScriptCombineSelectionMode::Intersection) 

enum class EGeometryScriptCombineSelectionMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptCombineSelectionMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptCombineSelectionMode>();
// ********** End Enum EGeometryScriptCombineSelectionMode *****************************************

// ********** Begin Enum EGeometryScriptEmptySelectionBehavior *************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTEMPTYSELECTIONBEHAVIOR(op) \
	op(EGeometryScriptEmptySelectionBehavior::FullMeshSelection) \
	op(EGeometryScriptEmptySelectionBehavior::EmptySelection) 

enum class EGeometryScriptEmptySelectionBehavior : uint8;
template<> struct TIsUEnumClass<EGeometryScriptEmptySelectionBehavior> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptEmptySelectionBehavior>();
// ********** End Enum EGeometryScriptEmptySelectionBehavior ***************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
