// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshResizing/UVUnwrapNode.h"

#ifdef MESHRESIZINGDATAFLOWNODES_UVUnwrapNode_generated_h
#error "UVUnwrapNode.generated.h already included, missing '#pragma once' in UVUnwrapNode.h"
#endif
#define MESHRESIZINGDATAFLOWNODES_UVUnwrapNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FUVUnwrapNode *****************************************************
struct Z_Construct_UScriptStruct_FUVUnwrapNode_Statics;
#define FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingNodes_Private_MeshResizing_UVUnwrapNode_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUVUnwrapNode_Statics; \
	MESHRESIZINGDATAFLOWNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FUVUnwrapNode;
// ********** End ScriptStruct FUVUnwrapNode *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingNodes_Private_MeshResizing_UVUnwrapNode_h

// ********** Begin Enum EUVUnwrapMethod ***********************************************************
#define FOREACH_ENUM_EUVUNWRAPMETHOD(op) \
	op(EUVUnwrapMethod::ExponentialMap) \
	op(EUVUnwrapMethod::ConformalFreeBoundary) \
	op(EUVUnwrapMethod::SpectralConformal) 

enum class EUVUnwrapMethod;
template<> struct TIsUEnumClass<EUVUnwrapMethod> { enum { Value = true }; };
template<> MESHRESIZINGDATAFLOWNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EUVUnwrapMethod>();
// ********** End Enum EUVUnwrapMethod *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
