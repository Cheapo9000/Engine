// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNodes/AnimNode_PoseDriver.h"

#ifdef ANIMGRAPHRUNTIME_AnimNode_PoseDriver_generated_h
#error "AnimNode_PoseDriver.generated.h already included, missing '#pragma once' in AnimNode_PoseDriver.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_PoseDriver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPoseDriverTransform **********************************************
struct Z_Construct_UScriptStruct_FPoseDriverTransform_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPoseDriverTransform_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


struct FPoseDriverTransform;
// ********** End ScriptStruct FPoseDriverTransform ************************************************

// ********** Begin ScriptStruct FPoseDriverTarget *************************************************
struct Z_Construct_UScriptStruct_FPoseDriverTarget_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPoseDriverTarget_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


struct FPoseDriverTarget;
// ********** End ScriptStruct FPoseDriverTarget ***************************************************

// ********** Begin ScriptStruct FAnimNode_PoseDriver **********************************************
struct Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h_135_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_PoseHandler Super;


struct FAnimNode_PoseDriver;
// ********** End ScriptStruct FAnimNode_PoseDriver ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h

// ********** Begin Enum EPoseDriverType ***********************************************************
#define FOREACH_ENUM_EPOSEDRIVERTYPE(op) \
	op(EPoseDriverType::SwingAndTwist) \
	op(EPoseDriverType::SwingOnly) \
	op(EPoseDriverType::Translation) 

enum class EPoseDriverType : uint8;
template<> struct TIsUEnumClass<EPoseDriverType> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EPoseDriverType>();
// ********** End Enum EPoseDriverType *************************************************************

// ********** Begin Enum EPoseDriverSource *********************************************************
#define FOREACH_ENUM_EPOSEDRIVERSOURCE(op) \
	op(EPoseDriverSource::Rotation) \
	op(EPoseDriverSource::Translation) 

enum class EPoseDriverSource : uint8;
template<> struct TIsUEnumClass<EPoseDriverSource> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EPoseDriverSource>();
// ********** End Enum EPoseDriverSource ***********************************************************

// ********** Begin Enum EPoseDriverOutput *********************************************************
#define FOREACH_ENUM_EPOSEDRIVEROUTPUT(op) \
	op(EPoseDriverOutput::DrivePoses) \
	op(EPoseDriverOutput::DriveCurves) 

enum class EPoseDriverOutput : uint8;
template<> struct TIsUEnumClass<EPoseDriverOutput> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EPoseDriverOutput>();
// ********** End Enum EPoseDriverOutput ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
