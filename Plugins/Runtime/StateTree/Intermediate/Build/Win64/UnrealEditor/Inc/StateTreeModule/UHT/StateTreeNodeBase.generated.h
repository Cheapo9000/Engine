// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreeNodeBase.h"

#ifdef STATETREEMODULE_StateTreeNodeBase_generated_h
#error "StateTreeNodeBase.generated.h already included, missing '#pragma once' in StateTreeNodeBase.h"
#endif
#define STATETREEMODULE_StateTreeNodeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FStateTreeNodeBase ************************************************
struct Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics;
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeNodeBase_h_65_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics; \
	STATETREEMODULE_API static class UScriptStruct* StaticStruct();


struct FStateTreeNodeBase;
// ********** End ScriptStruct FStateTreeNodeBase **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeNodeBase_h

// ********** Begin Enum EStateTreeNodeFormatting **************************************************
#define FOREACH_ENUM_ESTATETREENODEFORMATTING(op) \
	op(EStateTreeNodeFormatting::RichText) \
	op(EStateTreeNodeFormatting::Text) 

enum class EStateTreeNodeFormatting : uint8;
template<> struct TIsUEnumClass<EStateTreeNodeFormatting> { enum { Value = true }; };
template<> STATETREEMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStateTreeNodeFormatting>();
// ********** End Enum EStateTreeNodeFormatting ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
