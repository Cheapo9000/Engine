// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGSplineMeshParams.h"

#ifdef PCG_PCGSplineMeshParams_generated_h
#error "PCGSplineMeshParams.generated.h already included, missing '#pragma once' in PCGSplineMeshParams.h"
#endif
#define PCG_PCGSplineMeshParams_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGSplineMeshParams **********************************************
struct Z_Construct_UScriptStruct_FPCGSplineMeshParams_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineMeshParams_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGSplineMeshParams_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGSplineMeshParams;
// ********** End ScriptStruct FPCGSplineMeshParams ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineMeshParams_h

// ********** Begin Enum EPCGSplineMeshForwardAxis *************************************************
#define FOREACH_ENUM_EPCGSPLINEMESHFORWARDAXIS(op) \
	op(EPCGSplineMeshForwardAxis::X) \
	op(EPCGSplineMeshForwardAxis::Y) \
	op(EPCGSplineMeshForwardAxis::Z) 

enum class EPCGSplineMeshForwardAxis : uint32;
template<> struct TIsUEnumClass<EPCGSplineMeshForwardAxis> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGSplineMeshForwardAxis>();
// ********** End Enum EPCGSplineMeshForwardAxis ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
