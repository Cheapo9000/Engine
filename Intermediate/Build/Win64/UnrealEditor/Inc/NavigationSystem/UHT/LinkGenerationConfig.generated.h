// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavMesh/LinkGenerationConfig.h"

#ifdef NAVIGATIONSYSTEM_LinkGenerationConfig_generated_h
#error "LinkGenerationConfig.generated.h already included, missing '#pragma once' in LinkGenerationConfig.h"
#endif
#define NAVIGATIONSYSTEM_LinkGenerationConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNavLinkGenerationJumpConfig **************************************
struct Z_Construct_UScriptStruct_FNavLinkGenerationJumpConfig_Statics;
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_LinkGenerationConfig_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNavLinkGenerationJumpConfig_Statics; \
	NAVIGATIONSYSTEM_API static class UScriptStruct* StaticStruct();


struct FNavLinkGenerationJumpConfig;
// ********** End ScriptStruct FNavLinkGenerationJumpConfig ****************************************

// ********** Begin ScriptStruct FNavLinkGenerationJumpDownConfig **********************************
struct Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics;
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_LinkGenerationConfig_h_161_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics; \
	NAVIGATIONSYSTEM_API static class UScriptStruct* StaticStruct();


struct FNavLinkGenerationJumpDownConfig;
// ********** End ScriptStruct FNavLinkGenerationJumpDownConfig ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_LinkGenerationConfig_h

// ********** Begin Enum ENavLinkBuilderFlags ******************************************************
#define FOREACH_ENUM_ENAVLINKBUILDERFLAGS(op) \
	op(ENavLinkBuilderFlags::CreateCenterPointLink) \
	op(ENavLinkBuilderFlags::CreateExtremityLink) 

enum class ENavLinkBuilderFlags : uint16;
template<> struct TIsUEnumClass<ENavLinkBuilderFlags> { enum { Value = true }; };
template<> NAVIGATIONSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<ENavLinkBuilderFlags>();
// ********** End Enum ENavLinkBuilderFlags ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
