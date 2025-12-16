// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Module/RigVMTrait_ModuleEventDependency.h"

#ifdef UAF_RigVMTrait_ModuleEventDependency_generated_h
#error "RigVMTrait_ModuleEventDependency.generated.h already included, missing '#pragma once' in RigVMTrait_ModuleEventDependency.h"
#endif
#define UAF_RigVMTrait_ModuleEventDependency_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMTrait_ModuleEventDependency *********************************
struct Z_Construct_UScriptStruct_FRigVMTrait_ModuleEventDependency_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_Module_RigVMTrait_ModuleEventDependency_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_ModuleEventDependency_Statics; \
	UAF_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait Super;


struct FRigVMTrait_ModuleEventDependency;
// ********** End ScriptStruct FRigVMTrait_ModuleEventDependency ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_Module_RigVMTrait_ModuleEventDependency_h

// ********** Begin Enum EAnimNextModuleEventDependencyOrdering ************************************
#define FOREACH_ENUM_EANIMNEXTMODULEEVENTDEPENDENCYORDERING(op) \
	op(EAnimNextModuleEventDependencyOrdering::Before) \
	op(EAnimNextModuleEventDependencyOrdering::After) 

enum class EAnimNextModuleEventDependencyOrdering : uint8;
template<> struct TIsUEnumClass<EAnimNextModuleEventDependencyOrdering> { enum { Value = true }; };
template<> UAF_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimNextModuleEventDependencyOrdering>();
// ********** End Enum EAnimNextModuleEventDependencyOrdering **************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
