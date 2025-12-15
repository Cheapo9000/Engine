// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimExecutionContext.h"

#ifdef ENGINE_AnimExecutionContext_generated_h
#error "AnimExecutionContext.generated.h already included, missing '#pragma once' in AnimExecutionContext.h"
#endif
#define ENGINE_AnimExecutionContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimExecutionContext *********************************************
struct Z_Construct_UScriptStruct_FAnimExecutionContext_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimExecutionContext_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimExecutionContext_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimExecutionContext;
// ********** End ScriptStruct FAnimExecutionContext ***********************************************

// ********** Begin ScriptStruct FAnimInitializationContext ****************************************
struct Z_Construct_UScriptStruct_FAnimInitializationContext_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimExecutionContext_h_139_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimInitializationContext_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimExecutionContext Super;


struct FAnimInitializationContext;
// ********** End ScriptStruct FAnimInitializationContext ******************************************

// ********** Begin ScriptStruct FAnimUpdateContext ************************************************
struct Z_Construct_UScriptStruct_FAnimUpdateContext_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimExecutionContext_h_159_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimUpdateContext_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimExecutionContext Super;


struct FAnimUpdateContext;
// ********** End ScriptStruct FAnimUpdateContext **************************************************

// ********** Begin ScriptStruct FAnimPoseContext **************************************************
struct Z_Construct_UScriptStruct_FAnimPoseContext_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimExecutionContext_h_179_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimPoseContext_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimExecutionContext Super;


struct FAnimPoseContext;
// ********** End ScriptStruct FAnimPoseContext ****************************************************

// ********** Begin ScriptStruct FAnimComponentSpacePoseContext ************************************
struct Z_Construct_UScriptStruct_FAnimComponentSpacePoseContext_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimExecutionContext_h_199_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimComponentSpacePoseContext_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimExecutionContext Super;


struct FAnimComponentSpacePoseContext;
// ********** End ScriptStruct FAnimComponentSpacePoseContext **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimExecutionContext_h

// ********** Begin Enum EAnimExecutionContextConversionResult *************************************
#define FOREACH_ENUM_EANIMEXECUTIONCONTEXTCONVERSIONRESULT(op) \
	op(EAnimExecutionContextConversionResult::Succeeded) \
	op(EAnimExecutionContextConversionResult::Failed) 

enum class EAnimExecutionContextConversionResult : uint8;
template<> struct TIsUEnumClass<EAnimExecutionContextConversionResult> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimExecutionContextConversionResult>();
// ********** End Enum EAnimExecutionContextConversionResult ***************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
