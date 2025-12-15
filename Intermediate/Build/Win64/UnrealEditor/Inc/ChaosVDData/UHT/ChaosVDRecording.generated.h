// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosVDRecording.h"

#ifdef CHAOSVDDATA_ChaosVDRecording_generated_h
#error "ChaosVDRecording.generated.h already included, missing '#pragma once' in ChaosVDRecording.h"
#endif
#define CHAOSVDDATA_ChaosVDRecording_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChaosVDGameFrameDataWrapper **************************************
struct Z_Construct_UScriptStruct_FChaosVDGameFrameDataWrapper_Statics;
#define FID_Engine_Source_Runtime_Experimental_ChaosVDData_Public_ChaosVDRecording_h_388_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosVDGameFrameDataWrapper_Statics; \
	CHAOSVDDATA_API static class UScriptStruct* StaticStruct();


struct FChaosVDGameFrameDataWrapper;
// ********** End ScriptStruct FChaosVDGameFrameDataWrapper ****************************************

// ********** Begin ScriptStruct FChaosVDGameFrameDataWrapperContext *******************************
struct Z_Construct_UScriptStruct_FChaosVDGameFrameDataWrapperContext_Statics;
#define FID_Engine_Source_Runtime_Experimental_ChaosVDData_Public_ChaosVDRecording_h_396_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosVDGameFrameDataWrapperContext_Statics; \
	CHAOSVDDATA_API static class UScriptStruct* StaticStruct();


struct FChaosVDGameFrameDataWrapperContext;
// ********** End ScriptStruct FChaosVDGameFrameDataWrapperContext *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_ChaosVDData_Public_ChaosVDRecording_h

// ********** Begin Enum EChaosVDSolverFrameAttributes *********************************************
#define FOREACH_ENUM_ECHAOSVDSOLVERFRAMEATTRIBUTES(op) \
	op(EChaosVDSolverFrameAttributes::None) \
	op(EChaosVDSolverFrameAttributes::HasGTDataToReRoute) 

enum class EChaosVDSolverFrameAttributes : uint16;
template<> struct TIsUEnumClass<EChaosVDSolverFrameAttributes> { enum { Value = true }; };
template<> CHAOSVDDATA_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDSolverFrameAttributes>();
// ********** End Enum EChaosVDSolverFrameAttributes ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
