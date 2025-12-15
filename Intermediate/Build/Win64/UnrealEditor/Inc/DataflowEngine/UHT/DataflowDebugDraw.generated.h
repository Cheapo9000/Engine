// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowDebugDraw.h"

#ifdef DATAFLOWENGINE_DataflowDebugDraw_generated_h
#error "DataflowDebugDraw.generated.h already included, missing '#pragma once' in DataflowDebugDraw.h"
#endif
#define DATAFLOWENGINE_DataflowDebugDraw_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDataflowNodeDebugDrawSettings ************************************
struct Z_Construct_UScriptStruct_FDataflowNodeDebugDrawSettings_Statics;
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowDebugDraw_h_91_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowNodeDebugDrawSettings_Statics; \
	DATAFLOWENGINE_API static class UScriptStruct* StaticStruct();


struct FDataflowNodeDebugDrawSettings;
// ********** End ScriptStruct FDataflowNodeDebugDrawSettings **************************************

// ********** Begin ScriptStruct FDataflowNodeSphereCoveringDebugDrawSettings **********************
struct Z_Construct_UScriptStruct_FDataflowNodeSphereCoveringDebugDrawSettings_Statics;
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowDebugDraw_h_122_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowNodeSphereCoveringDebugDrawSettings_Statics; \
	DATAFLOWENGINE_API static class UScriptStruct* StaticStruct();


struct FDataflowNodeSphereCoveringDebugDrawSettings;
// ********** End ScriptStruct FDataflowNodeSphereCoveringDebugDrawSettings ************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowDebugDraw_h

// ********** Begin Enum EDataflowDebugDrawRenderType **********************************************
#define FOREACH_ENUM_EDATAFLOWDEBUGDRAWRENDERTYPE(op) \
	op(EDataflowDebugDrawRenderType::Wireframe) \
	op(EDataflowDebugDrawRenderType::Shaded) 

enum class EDataflowDebugDrawRenderType : uint8;
template<> struct TIsUEnumClass<EDataflowDebugDrawRenderType> { enum { Value = true }; };
template<> DATAFLOWENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataflowDebugDrawRenderType>();
// ********** End Enum EDataflowDebugDrawRenderType ************************************************

// ********** Begin Enum EDataflowSphereCoveringColorMethod ****************************************
#define FOREACH_ENUM_EDATAFLOWSPHERECOVERINGCOLORMETHOD(op) \
	op(EDataflowSphereCoveringColorMethod::Single) \
	op(EDataflowSphereCoveringColorMethod::ColorByRadius) \
	op(EDataflowSphereCoveringColorMethod::Random) 

enum class EDataflowSphereCoveringColorMethod : uint8;
template<> struct TIsUEnumClass<EDataflowSphereCoveringColorMethod> { enum { Value = true }; };
template<> DATAFLOWENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataflowSphereCoveringColorMethod>();
// ********** End Enum EDataflowSphereCoveringColorMethod ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
