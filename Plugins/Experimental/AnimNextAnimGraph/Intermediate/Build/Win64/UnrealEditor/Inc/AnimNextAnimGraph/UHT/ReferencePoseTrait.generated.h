// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Traits/ReferencePoseTrait.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXTANIMGRAPH_ReferencePoseTrait_generated_h
#error "ReferencePoseTrait.generated.h already included, missing '#pragma once' in ReferencePoseTrait.h"
#endif
#define ANIMNEXTANIMGRAPH_ReferencePoseTrait_generated_h

#define FID_Engine_Plugins_Experimental_AnimNextAnimGraph_Source_AnimNextAnimGraph_Private_Traits_ReferencePoseTrait_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNextReferencePoseTraitSharedData_Statics; \
	ANIMNEXTANIMGRAPH_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNextTraitSharedData Super;


template<> ANIMNEXTANIMGRAPH_API UScriptStruct* StaticStruct<struct FAnimNextReferencePoseTraitSharedData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNextAnimGraph_Source_AnimNextAnimGraph_Private_Traits_ReferencePoseTrait_h


#define FOREACH_ENUM_EANIMNEXTREFERENCEPOSETYPE(op) \
	op(EAnimNextReferencePoseType::MeshLocalSpace) \
	op(EAnimNextReferencePoseType::AdditiveIdentity) 

enum class EAnimNextReferencePoseType : int32;
template<> struct TIsUEnumClass<EAnimNextReferencePoseType> { enum { Value = true }; };
template<> ANIMNEXTANIMGRAPH_API UEnum* StaticEnum<EAnimNextReferencePoseType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
