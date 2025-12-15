// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataWrappers/ChaosVDQueryDataWrappers.h"

#ifdef CHAOSVDRUNTIME_ChaosVDQueryDataWrappers_generated_h
#error "ChaosVDQueryDataWrappers.generated.h already included, missing '#pragma once' in ChaosVDQueryDataWrappers.h"
#endif
#define CHAOSVDRUNTIME_ChaosVDQueryDataWrappers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChaosVDCollisionResponseParams ***********************************
struct Z_Construct_UScriptStruct_FChaosVDCollisionResponseParams_Statics;
#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDQueryDataWrappers_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosVDCollisionResponseParams_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


struct FChaosVDCollisionResponseParams;
// ********** End ScriptStruct FChaosVDCollisionResponseParams *************************************

// ********** Begin ScriptStruct FChaosVDCollisionObjectQueryParams ********************************
struct Z_Construct_UScriptStruct_FChaosVDCollisionObjectQueryParams_Statics;
#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDQueryDataWrappers_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosVDCollisionObjectQueryParams_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


struct FChaosVDCollisionObjectQueryParams;
// ********** End ScriptStruct FChaosVDCollisionObjectQueryParams **********************************

// ********** Begin ScriptStruct FChaosVDCollisionQueryParams **************************************
struct Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics;
#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDQueryDataWrappers_h_130_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


struct FChaosVDCollisionQueryParams;
// ********** End ScriptStruct FChaosVDCollisionQueryParams ****************************************

// ********** Begin ScriptStruct FChaosVDQueryFastData *********************************************
struct Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics;
#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDQueryDataWrappers_h_239_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


struct FChaosVDQueryFastData;
// ********** End ScriptStruct FChaosVDQueryFastData ***********************************************

// ********** Begin ScriptStruct FChaosVDQueryHitData **********************************************
struct Z_Construct_UScriptStruct_FChaosVDQueryHitData_Statics;
#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDQueryDataWrappers_h_298_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosVDQueryHitData_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


struct FChaosVDQueryHitData;
// ********** End ScriptStruct FChaosVDQueryHitData ************************************************

// ********** Begin ScriptStruct FChaosVDQueryVisitStep ********************************************
struct Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics;
#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDQueryDataWrappers_h_367_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


struct FChaosVDQueryVisitStep;
// ********** End ScriptStruct FChaosVDQueryVisitStep **********************************************

// ********** Begin ScriptStruct FChaosVDQueryDataWrapper ******************************************
struct Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics;
#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDQueryDataWrappers_h_423_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct();


struct FChaosVDQueryDataWrapper;
// ********** End ScriptStruct FChaosVDQueryDataWrapper ********************************************

// ********** Begin ScriptStruct FChaosVDSceneQueriesDataContainer *********************************
struct Z_Construct_UScriptStruct_FChaosVDSceneQueriesDataContainer_Statics;
#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDQueryDataWrappers_h_498_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosVDSceneQueriesDataContainer_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct();


struct FChaosVDSceneQueriesDataContainer;
// ********** End ScriptStruct FChaosVDSceneQueriesDataContainer ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDQueryDataWrappers_h

// ********** Begin Enum EChaosVDSceneQueryType ****************************************************
#define FOREACH_ENUM_ECHAOSVDSCENEQUERYTYPE(op) \
	op(EChaosVDSceneQueryType::Invalid) \
	op(EChaosVDSceneQueryType::Sweep) \
	op(EChaosVDSceneQueryType::Overlap) \
	op(EChaosVDSceneQueryType::RayCast) 

enum class EChaosVDSceneQueryType;
template<> struct TIsUEnumClass<EChaosVDSceneQueryType> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDSceneQueryType>();
// ********** End Enum EChaosVDSceneQueryType ******************************************************

// ********** Begin Enum EChaosVDSceneQueryMode ****************************************************
#define FOREACH_ENUM_ECHAOSVDSCENEQUERYMODE(op) \
	op(EChaosVDSceneQueryMode::Single) \
	op(EChaosVDSceneQueryMode::Multi) \
	op(EChaosVDSceneQueryMode::Test) \
	op(EChaosVDSceneQueryMode::Invalid) 

enum class EChaosVDSceneQueryMode;
template<> struct TIsUEnumClass<EChaosVDSceneQueryMode> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDSceneQueryMode>();
// ********** End Enum EChaosVDSceneQueryMode ******************************************************

// ********** Begin Enum EChaosVDCollisionQueryParamsFlags *****************************************
#define FOREACH_ENUM_ECHAOSVDCOLLISIONQUERYPARAMSFLAGS(op) \
	op(EChaosVDCollisionQueryParamsFlags::None) \
	op(EChaosVDCollisionQueryParamsFlags::TraceComplex) \
	op(EChaosVDCollisionQueryParamsFlags::FindInitialOverlaps) \
	op(EChaosVDCollisionQueryParamsFlags::ReturnFaceIndex) \
	op(EChaosVDCollisionQueryParamsFlags::ReturnPhysicalMaterial) \
	op(EChaosVDCollisionQueryParamsFlags::IgnoreBlocks) \
	op(EChaosVDCollisionQueryParamsFlags::IgnoreTouches) \
	op(EChaosVDCollisionQueryParamsFlags::SkipNarrowPhase) \
	op(EChaosVDCollisionQueryParamsFlags::TraceIntoSubComponents) \
	op(EChaosVDCollisionQueryParamsFlags::ReplaceHitWithSubComponents) 

enum class EChaosVDCollisionQueryParamsFlags : uint16;
template<> struct TIsUEnumClass<EChaosVDCollisionQueryParamsFlags> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDCollisionQueryParamsFlags>();
// ********** End Enum EChaosVDCollisionQueryParamsFlags *******************************************

// ********** Begin Enum EChaosVDQueryFastDataParallelFlags ****************************************
#define FOREACH_ENUM_ECHAOSVDQUERYFASTDATAPARALLELFLAGS(op) \
	op(EChaosVDQueryFastDataParallelFlags::None) \
	op(EChaosVDQueryFastDataParallelFlags::Parallel0) \
	op(EChaosVDQueryFastDataParallelFlags::Parallel1) \
	op(EChaosVDQueryFastDataParallelFlags::Parallel2) 

enum class EChaosVDQueryFastDataParallelFlags : uint8;
template<> struct TIsUEnumClass<EChaosVDQueryFastDataParallelFlags> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDQueryFastDataParallelFlags>();
// ********** End Enum EChaosVDQueryFastDataParallelFlags ******************************************

// ********** Begin Enum EChaosVDSQHitFlags ********************************************************
#define FOREACH_ENUM_ECHAOSVDSQHITFLAGS(op) \
	op(EChaosVDSQHitFlags::None) \
	op(EChaosVDSQHitFlags::Position) \
	op(EChaosVDSQHitFlags::Normal) \
	op(EChaosVDSQHitFlags::Distance) \
	op(EChaosVDSQHitFlags::UV) \
	op(EChaosVDSQHitFlags::MTD) \
	op(EChaosVDSQHitFlags::FaceIndex) 

enum class EChaosVDSQHitFlags : uint16;
template<> struct TIsUEnumClass<EChaosVDSQHitFlags> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDSQHitFlags>();
// ********** End Enum EChaosVDSQHitFlags **********************************************************

// ********** Begin Enum EChaosVDCollisionQueryHitType *********************************************
#define FOREACH_ENUM_ECHAOSVDCOLLISIONQUERYHITTYPE(op) \
	op(EChaosVDCollisionQueryHitType::None) \
	op(EChaosVDCollisionQueryHitType::Touch) \
	op(EChaosVDCollisionQueryHitType::Block) 

enum class EChaosVDCollisionQueryHitType;
template<> struct TIsUEnumClass<EChaosVDCollisionQueryHitType> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDCollisionQueryHitType>();
// ********** End Enum EChaosVDCollisionQueryHitType ***********************************************

// ********** Begin Enum EChaosVDSQVisitRejectReason ***********************************************
#define FOREACH_ENUM_ECHAOSVDSQVISITREJECTREASON(op) \
	op(EChaosVDSQVisitRejectReason::None) \
	op(EChaosVDSQVisitRejectReason::NoHit) \
	op(EChaosVDSQVisitRejectReason::PreFilter) \
	op(EChaosVDSQVisitRejectReason::PostFilter) \
	op(EChaosVDSQVisitRejectReason::ColocatedHitHasWorseNormal) \
	op(EChaosVDSQVisitRejectReason::FailedFastBoundTest) 

enum class EChaosVDSQVisitRejectReason;
template<> struct TIsUEnumClass<EChaosVDSQVisitRejectReason> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDSQVisitRejectReason>();
// ********** End Enum EChaosVDSQVisitRejectReason *************************************************

// ********** Begin Enum EChaosVDSceneQueryVisitorType *********************************************
#define FOREACH_ENUM_ECHAOSVDSCENEQUERYVISITORTYPE(op) \
	op(EChaosVDSceneQueryVisitorType::Invalid) \
	op(EChaosVDSceneQueryVisitorType::BroadPhase) \
	op(EChaosVDSceneQueryVisitorType::NarrowPhase) 

enum class EChaosVDSceneQueryVisitorType;
template<> struct TIsUEnumClass<EChaosVDSceneQueryVisitorType> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDSceneQueryVisitorType>();
// ********** End Enum EChaosVDSceneQueryVisitorType ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
