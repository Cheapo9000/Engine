// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataflowEditorTools/DataflowEditorToolEnums.h"

#ifdef DATAFLOWEDITOR_DataflowEditorToolEnums_generated_h
#error "DataflowEditorToolEnums.generated.h already included, missing '#pragma once' in DataflowEditorToolEnums.h"
#endif
#define DATAFLOWEDITOR_DataflowEditorToolEnums_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_DataflowEditorTools_DataflowEditorToolEnums_h

// ********** Begin Enum EDataflowEditorToolEditMode ***********************************************
#define FOREACH_ENUM_EDATAFLOWEDITORTOOLEDITMODE(op) \
	op(EDataflowEditorToolEditMode::Brush) \
	op(EDataflowEditorToolEditMode::Mesh) 

enum class EDataflowEditorToolEditMode : uint8;
template<> struct TIsUEnumClass<EDataflowEditorToolEditMode> { enum { Value = true }; };
template<> DATAFLOWEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataflowEditorToolEditMode>();
// ********** End Enum EDataflowEditorToolEditMode *************************************************

// ********** Begin Enum EDataflowEditorToolBrushAreaType ******************************************
#define FOREACH_ENUM_EDATAFLOWEDITORTOOLBRUSHAREATYPE(op) \
	op(EDataflowEditorToolBrushAreaType::Connected) \
	op(EDataflowEditorToolBrushAreaType::Volumetric) 

enum class EDataflowEditorToolBrushAreaType : uint8;
template<> struct TIsUEnumClass<EDataflowEditorToolBrushAreaType> { enum { Value = true }; };
template<> DATAFLOWEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataflowEditorToolBrushAreaType>();
// ********** End Enum EDataflowEditorToolBrushAreaType ********************************************

// ********** Begin Enum EDataflowEditorToolEditOperation ******************************************
#define FOREACH_ENUM_EDATAFLOWEDITORTOOLEDITOPERATION(op) \
	op(EDataflowEditorToolEditOperation::Add) \
	op(EDataflowEditorToolEditOperation::Replace) \
	op(EDataflowEditorToolEditOperation::Multiply) \
	op(EDataflowEditorToolEditOperation::Invert) \
	op(EDataflowEditorToolEditOperation::Relax) 

enum class EDataflowEditorToolEditOperation : uint8;
template<> struct TIsUEnumClass<EDataflowEditorToolEditOperation> { enum { Value = true }; };
template<> DATAFLOWEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataflowEditorToolEditOperation>();
// ********** End Enum EDataflowEditorToolEditOperation ********************************************

// ********** Begin Enum EDataflowEditorToolColorMode **********************************************
#define FOREACH_ENUM_EDATAFLOWEDITORTOOLCOLORMODE(op) \
	op(EDataflowEditorToolColorMode::Greyscale) \
	op(EDataflowEditorToolColorMode::Ramp) \
	op(EDataflowEditorToolColorMode::FullMaterial) 

enum class EDataflowEditorToolColorMode : uint8;
template<> struct TIsUEnumClass<EDataflowEditorToolColorMode> { enum { Value = true }; };
template<> DATAFLOWEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataflowEditorToolColorMode>();
// ********** End Enum EDataflowEditorToolColorMode ************************************************

// ********** Begin Enum EDataflowEditorToolVisibilityType *****************************************
#define FOREACH_ENUM_EDATAFLOWEDITORTOOLVISIBILITYTYPE(op) \
	op(EDataflowEditorToolVisibilityType::None) \
	op(EDataflowEditorToolVisibilityType::Unoccluded) 

enum class EDataflowEditorToolVisibilityType : uint8;
template<> struct TIsUEnumClass<EDataflowEditorToolVisibilityType> { enum { Value = true }; };
template<> DATAFLOWEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataflowEditorToolVisibilityType>();
// ********** End Enum EDataflowEditorToolVisibilityType *******************************************

// ********** Begin Enum EDataflowEditorToolMirrorDirection ****************************************
#define FOREACH_ENUM_EDATAFLOWEDITORTOOLMIRRORDIRECTION(op) \
	op(EDataflowEditorToolMirrorDirection::PositiveToNegative) \
	op(EDataflowEditorToolMirrorDirection::NegativeToPositive) 

enum class EDataflowEditorToolMirrorDirection : uint8;
template<> struct TIsUEnumClass<EDataflowEditorToolMirrorDirection> { enum { Value = true }; };
template<> DATAFLOWEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataflowEditorToolMirrorDirection>();
// ********** End Enum EDataflowEditorToolMirrorDirection ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
