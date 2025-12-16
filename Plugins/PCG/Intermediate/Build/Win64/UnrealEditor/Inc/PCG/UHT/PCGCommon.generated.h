// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGCommon.h"

#ifdef PCG_PCGCommon_generated_h
#error "PCGCommon.generated.h already included, missing '#pragma once' in PCGCommon.h"
#endif
#define PCG_PCGCommon_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGRuntimeGenerationRadii ****************************************
struct Z_Construct_UScriptStruct_FPCGRuntimeGenerationRadii_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGCommon_h_440_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGRuntimeGenerationRadii_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGRuntimeGenerationRadii;
// ********** End ScriptStruct FPCGRuntimeGenerationRadii ******************************************

// ********** Begin ScriptStruct FPCGPartitionActorRecord ******************************************
struct Z_Construct_UScriptStruct_FPCGPartitionActorRecord_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGCommon_h_532_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGPartitionActorRecord_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGPartitionActorRecord;
// ********** End ScriptStruct FPCGPartitionActorRecord ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_PCGCommon_h

// ********** Begin Enum EPCGChangeType ************************************************************
#define FOREACH_ENUM_EPCGCHANGETYPE(op) \
	op(EPCGChangeType::None) \
	op(EPCGChangeType::Cosmetic) \
	op(EPCGChangeType::Settings) \
	op(EPCGChangeType::Input) \
	op(EPCGChangeType::Edge) \
	op(EPCGChangeType::Node) \
	op(EPCGChangeType::Structural) \
	op(EPCGChangeType::GenerationGrid) \
	op(EPCGChangeType::ShaderSource) \
	op(EPCGChangeType::GraphCustomization) 

enum class EPCGChangeType : uint32;
template<> struct TIsUEnumClass<EPCGChangeType> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGChangeType>();
// ********** End Enum EPCGChangeType **************************************************************

// ********** Begin Enum EPCGDataType **************************************************************
#define FOREACH_ENUM_EPCGDATATYPE(op) \
	op(EPCGDataType::None) \
	op(EPCGDataType::Point) \
	op(EPCGDataType::Spline) \
	op(EPCGDataType::LandscapeSpline) \
	op(EPCGDataType::Polygon2D) \
	op(EPCGDataType::PolyLine) \
	op(EPCGDataType::Landscape) \
	op(EPCGDataType::Texture) \
	op(EPCGDataType::RenderTarget) \
	op(EPCGDataType::VirtualTexture) \
	op(EPCGDataType::BaseTexture) \
	op(EPCGDataType::Surface) \
	op(EPCGDataType::Volume) \
	op(EPCGDataType::Primitive) \
	op(EPCGDataType::DynamicMesh) \
	op(EPCGDataType::StaticMeshResource) \
	op(EPCGDataType::Concrete) \
	op(EPCGDataType::Composite) \
	op(EPCGDataType::Spatial) \
	op(EPCGDataType::Resource) \
	op(EPCGDataType::ProxyForGPU) \
	op(EPCGDataType::Param) \
	op(EPCGDataType::PointOrParam) \
	op(EPCGDataType::VolumeOrPrimitiveOrDynamicMesh) \
	op(EPCGDataType::PointOrSpline) \
	op(EPCGDataType::Settings) \
	op(EPCGDataType::Other) \
	op(EPCGDataType::Any) \
	op(EPCGDataType::DeprecationSentinel) 

enum class EPCGDataType : uint32;
template<> struct TIsUEnumClass<EPCGDataType> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGDataType>();
// ********** End Enum EPCGDataType ****************************************************************

// ********** Begin Enum EPCGExclusiveDataType *****************************************************
#define FOREACH_ENUM_EPCGEXCLUSIVEDATATYPE(op) \
	op(EPCGExclusiveDataType::None) \
	op(EPCGExclusiveDataType::Point) \
	op(EPCGExclusiveDataType::Spline) \
	op(EPCGExclusiveDataType::LandscapeSpline) \
	op(EPCGExclusiveDataType::PolyLine) \
	op(EPCGExclusiveDataType::Landscape) \
	op(EPCGExclusiveDataType::Texture) \
	op(EPCGExclusiveDataType::RenderTarget) \
	op(EPCGExclusiveDataType::VirtualTexture) \
	op(EPCGExclusiveDataType::BaseTexture) \
	op(EPCGExclusiveDataType::Surface) \
	op(EPCGExclusiveDataType::Volume) \
	op(EPCGExclusiveDataType::Primitive) \
	op(EPCGExclusiveDataType::Concrete) \
	op(EPCGExclusiveDataType::Composite) \
	op(EPCGExclusiveDataType::Spatial) \
	op(EPCGExclusiveDataType::Param) \
	op(EPCGExclusiveDataType::Settings) \
	op(EPCGExclusiveDataType::Other) \
	op(EPCGExclusiveDataType::Any) \
	op(EPCGExclusiveDataType::PointOrParam) \
	op(EPCGExclusiveDataType::DynamicMesh) \
	op(EPCGExclusiveDataType::StaticMeshResource) \
	op(EPCGExclusiveDataType::Resource) \
	op(EPCGExclusiveDataType::Polygon2D) 

enum class EPCGExclusiveDataType : uint8;
template<> struct TIsUEnumClass<EPCGExclusiveDataType> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExclusiveDataType>();
// ********** End Enum EPCGExclusiveDataType *******************************************************

// ********** Begin Enum EPCGContainerType *********************************************************
#define FOREACH_ENUM_EPCGCONTAINERTYPE(op) \
	op(EPCGContainerType::Element) \
	op(EPCGContainerType::None) \
	op(EPCGContainerType::Array) \
	op(EPCGContainerType::Map) \
	op(EPCGContainerType::Set) 

enum class EPCGContainerType : uint8;
template<> struct TIsUEnumClass<EPCGContainerType> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGContainerType>();
// ********** End Enum EPCGContainerType ***********************************************************

// ********** Begin Enum EPCGCoordinateSpace *******************************************************
#define FOREACH_ENUM_EPCGCOORDINATESPACE(op) \
	op(EPCGCoordinateSpace::World) \
	op(EPCGCoordinateSpace::OriginalComponent) \
	op(EPCGCoordinateSpace::LocalComponent) 

enum class EPCGCoordinateSpace : uint8;
template<> struct TIsUEnumClass<EPCGCoordinateSpace> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGCoordinateSpace>();
// ********** End Enum EPCGCoordinateSpace *********************************************************

// ********** Begin Enum EPCGStringMatchingOperator ************************************************
#define FOREACH_ENUM_EPCGSTRINGMATCHINGOPERATOR(op) \
	op(EPCGStringMatchingOperator::Equal) \
	op(EPCGStringMatchingOperator::Substring) \
	op(EPCGStringMatchingOperator::Matches) 

enum class EPCGStringMatchingOperator : uint8;
template<> struct TIsUEnumClass<EPCGStringMatchingOperator> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGStringMatchingOperator>();
// ********** End Enum EPCGStringMatchingOperator **************************************************

// ********** Begin Enum EPCGHiGenGrid *************************************************************
#define FOREACH_ENUM_EPCGHIGENGRID(op) \
	op(EPCGHiGenGrid::Uninitialized) \
	op(EPCGHiGenGrid::Grid4) \
	op(EPCGHiGenGrid::Grid8) \
	op(EPCGHiGenGrid::Grid16) \
	op(EPCGHiGenGrid::Grid32) \
	op(EPCGHiGenGrid::Grid64) \
	op(EPCGHiGenGrid::Grid128) \
	op(EPCGHiGenGrid::Grid256) \
	op(EPCGHiGenGrid::Grid512) \
	op(EPCGHiGenGrid::Grid1024) \
	op(EPCGHiGenGrid::Grid2048) \
	op(EPCGHiGenGrid::Grid4096) \
	op(EPCGHiGenGrid::Grid8192) \
	op(EPCGHiGenGrid::Grid16384) \
	op(EPCGHiGenGrid::Grid32768) \
	op(EPCGHiGenGrid::Grid65536) \
	op(EPCGHiGenGrid::Grid131072) \
	op(EPCGHiGenGrid::Grid262144) \
	op(EPCGHiGenGrid::Grid524288) \
	op(EPCGHiGenGrid::Grid1048576) \
	op(EPCGHiGenGrid::Grid2097152) \
	op(EPCGHiGenGrid::Grid4194304) \
	op(EPCGHiGenGrid::GridMin) \
	op(EPCGHiGenGrid::GridMax) \
	op(EPCGHiGenGrid::Unbounded) 

enum class EPCGHiGenGrid : uint32;
template<> struct TIsUEnumClass<EPCGHiGenGrid> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGHiGenGrid>();
// ********** End Enum EPCGHiGenGrid ***************************************************************

// ********** Begin Enum EPCGAttachOptions *********************************************************
#define FOREACH_ENUM_EPCGATTACHOPTIONS(op) \
	op(EPCGAttachOptions::NotAttached) \
	op(EPCGAttachOptions::Attached) \
	op(EPCGAttachOptions::InFolder) \
	op(EPCGAttachOptions::InGraphFolder) \
	op(EPCGAttachOptions::InGeneratedFolder) 

enum class EPCGAttachOptions : uint32;
template<> struct TIsUEnumClass<EPCGAttachOptions> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGAttachOptions>();
// ********** End Enum EPCGAttachOptions ***********************************************************

// ********** Begin Enum EPCGEditorDirtyMode *******************************************************
#define FOREACH_ENUM_EPCGEDITORDIRTYMODE(op) \
	op(EPCGEditorDirtyMode::Normal) \
	op(EPCGEditorDirtyMode::Preview) \
	op(EPCGEditorDirtyMode::LoadAsPreview) 

enum class EPCGEditorDirtyMode : uint8;
template<> struct TIsUEnumClass<EPCGEditorDirtyMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGEditorDirtyMode>();
// ********** End Enum EPCGEditorDirtyMode *********************************************************

// ********** Begin Enum EPCGNodeTitleType *********************************************************
#define FOREACH_ENUM_EPCGNODETITLETYPE(op) \
	op(EPCGNodeTitleType::FullTitle) \
	op(EPCGNodeTitleType::ListView) 

enum class EPCGNodeTitleType : uint8;
template<> struct TIsUEnumClass<EPCGNodeTitleType> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGNodeTitleType>();
// ********** End Enum EPCGNodeTitleType ***********************************************************

// ********** Begin Enum EPCGDensityMergeOperation *************************************************
#define FOREACH_ENUM_EPCGDENSITYMERGEOPERATION(op) \
	op(EPCGDensityMergeOperation::Set) \
	op(EPCGDensityMergeOperation::Ignore) \
	op(EPCGDensityMergeOperation::Minimum) \
	op(EPCGDensityMergeOperation::Maximum) \
	op(EPCGDensityMergeOperation::Add) \
	op(EPCGDensityMergeOperation::Subtract) \
	op(EPCGDensityMergeOperation::Multiply) \
	op(EPCGDensityMergeOperation::Divide) 

enum class EPCGDensityMergeOperation : uint8;
template<> struct TIsUEnumClass<EPCGDensityMergeOperation> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGDensityMergeOperation>();
// ********** End Enum EPCGDensityMergeOperation ***************************************************

// ********** Begin Enum EPCGGenerationStatus ******************************************************
#define FOREACH_ENUM_EPCGGENERATIONSTATUS(op) \
	op(EPCGGenerationStatus::Completed) \
	op(EPCGGenerationStatus::Aborted) 

enum class EPCGGenerationStatus : uint8;
template<> struct TIsUEnumClass<EPCGGenerationStatus> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGGenerationStatus>();
// ********** End Enum EPCGGenerationStatus ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
