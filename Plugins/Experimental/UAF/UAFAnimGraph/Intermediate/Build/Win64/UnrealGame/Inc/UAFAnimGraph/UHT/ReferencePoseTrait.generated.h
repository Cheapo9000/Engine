// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Traits/ReferencePoseTrait.h"

#ifdef UAFANIMGRAPH_ReferencePoseTrait_generated_h
#error "ReferencePoseTrait.generated.h already included, missing '#pragma once' in ReferencePoseTrait.h"
#endif
#define UAFANIMGRAPH_ReferencePoseTrait_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimNextReferencePoseTraitSharedData *****************************
struct Z_Construct_UScriptStruct_FAnimNextReferencePoseTraitSharedData_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Private_Traits_ReferencePoseTrait_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNextReferencePoseTraitSharedData_Statics; \
	UAFANIMGRAPH_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNextTraitSharedData Super;


struct FAnimNextReferencePoseTraitSharedData;
// ********** End ScriptStruct FAnimNextReferencePoseTraitSharedData *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Private_Traits_ReferencePoseTrait_h

// ********** Begin Enum EAnimNextReferencePoseType ************************************************
#define FOREACH_ENUM_EANIMNEXTREFERENCEPOSETYPE(op) \
	op(EAnimNextReferencePoseType::MeshLocalSpace) \
	op(EAnimNextReferencePoseType::AdditiveIdentity) 

enum class EAnimNextReferencePoseType : int32;
template<> struct TIsUEnumClass<EAnimNextReferencePoseType> { enum { Value = true }; };
template<> UAFANIMGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimNextReferencePoseType>();
// ********** End Enum EAnimNextReferencePoseType **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
