// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshResizing/CustomRegionResizing.h"

#ifdef MESHRESIZINGCORE_CustomRegionResizing_generated_h
#error "CustomRegionResizing.generated.h already included, missing '#pragma once' in CustomRegionResizing.h"
#endif
#define MESHRESIZINGCORE_CustomRegionResizing_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMeshResizingCustomRegion *****************************************
struct Z_Construct_UScriptStruct_FMeshResizingCustomRegion_Statics;
#define FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingCore_Public_MeshResizing_CustomRegionResizing_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeshResizingCustomRegion_Statics; \
	MESHRESIZINGCORE_API static class UScriptStruct* StaticStruct();


struct FMeshResizingCustomRegion;
// ********** End ScriptStruct FMeshResizingCustomRegion *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingCore_Public_MeshResizing_CustomRegionResizing_h

// ********** Begin Enum EMeshResizingCustomRegionType *********************************************
#define FOREACH_ENUM_EMESHRESIZINGCUSTOMREGIONTYPE(op) \
	op(EMeshResizingCustomRegionType::TrilinearInterpolation) 

enum class EMeshResizingCustomRegionType : uint8;
template<> struct TIsUEnumClass<EMeshResizingCustomRegionType> { enum { Value = true }; };
template<> MESHRESIZINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMeshResizingCustomRegionType>();
// ********** End Enum EMeshResizingCustomRegionType ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
