// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowSelection.h"

#ifdef DATAFLOWCORE_DataflowSelection_generated_h
#error "DataflowSelection.generated.h already included, missing '#pragma once' in DataflowSelection.h"
#endif
#define DATAFLOWCORE_DataflowSelection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDataflowSelection ************************************************
struct Z_Construct_UScriptStruct_FDataflowSelection_Statics;
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSelection_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowSelection_Statics; \
	DATAFLOWCORE_API static class UScriptStruct* StaticStruct();


struct FDataflowSelection;
// ********** End ScriptStruct FDataflowSelection **************************************************

// ********** Begin ScriptStruct FDataflowTransformSelection ***************************************
struct Z_Construct_UScriptStruct_FDataflowTransformSelection_Statics;
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSelection_h_86_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowTransformSelection_Statics; \
	DATAFLOWCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowSelection Super;


struct FDataflowTransformSelection;
// ********** End ScriptStruct FDataflowTransformSelection *****************************************

// ********** Begin ScriptStruct FDataflowVertexSelection ******************************************
struct Z_Construct_UScriptStruct_FDataflowVertexSelection_Statics;
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSelection_h_99_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowVertexSelection_Statics; \
	DATAFLOWCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowSelection Super;


struct FDataflowVertexSelection;
// ********** End ScriptStruct FDataflowVertexSelection ********************************************

// ********** Begin ScriptStruct FDataflowFaceSelection ********************************************
struct Z_Construct_UScriptStruct_FDataflowFaceSelection_Statics;
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSelection_h_112_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowFaceSelection_Statics; \
	DATAFLOWCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowSelection Super;


struct FDataflowFaceSelection;
// ********** End ScriptStruct FDataflowFaceSelection **********************************************

// ********** Begin ScriptStruct FDataflowGeometrySelection ****************************************
struct Z_Construct_UScriptStruct_FDataflowGeometrySelection_Statics;
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSelection_h_124_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowGeometrySelection_Statics; \
	DATAFLOWCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowSelection Super;


struct FDataflowGeometrySelection;
// ********** End ScriptStruct FDataflowGeometrySelection ******************************************

// ********** Begin ScriptStruct FDataflowMaterialSelection ****************************************
struct Z_Construct_UScriptStruct_FDataflowMaterialSelection_Statics;
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSelection_h_136_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowMaterialSelection_Statics; \
	DATAFLOWCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowSelection Super;


struct FDataflowMaterialSelection;
// ********** End ScriptStruct FDataflowMaterialSelection ******************************************

// ********** Begin ScriptStruct FDataflowCurveSelection *******************************************
struct Z_Construct_UScriptStruct_FDataflowCurveSelection_Statics;
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSelection_h_148_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowCurveSelection_Statics; \
	DATAFLOWCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowSelection Super;


struct FDataflowCurveSelection;
// ********** End ScriptStruct FDataflowCurveSelection *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSelection_h

// ********** Begin Enum EDataflowSelectionType ****************************************************
#define FOREACH_ENUM_EDATAFLOWSELECTIONTYPE(op) \
	op(EDataflowSelectionType::Transform) \
	op(EDataflowSelectionType::Vertices) \
	op(EDataflowSelectionType::Faces) \
	op(EDataflowSelectionType::Geometry) \
	op(EDataflowSelectionType::Curves) 

enum class EDataflowSelectionType : uint8;
template<> struct TIsUEnumClass<EDataflowSelectionType> { enum { Value = true }; };
template<> DATAFLOWCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataflowSelectionType>();
// ********** End Enum EDataflowSelectionType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
