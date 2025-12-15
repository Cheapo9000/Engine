// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_LinkedInputPose.h"

#ifdef ANIMGRAPH_AnimGraphNode_LinkedInputPose_generated_h
#error "AnimGraphNode_LinkedInputPose.generated.h already included, missing '#pragma once' in AnimGraphNode_LinkedInputPose.h"
#endif
#define ANIMGRAPH_AnimGraphNode_LinkedInputPose_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimBlueprintFunctionPinInfo *************************************
struct Z_Construct_UScriptStruct_FAnimBlueprintFunctionPinInfo_Statics;
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedInputPose_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimBlueprintFunctionPinInfo_Statics; \
	ANIMGRAPH_API static class UScriptStruct* StaticStruct();


struct FAnimBlueprintFunctionPinInfo;
// ********** End ScriptStruct FAnimBlueprintFunctionPinInfo ***************************************

// ********** Begin Class UAnimGraphNode_LinkedInputPose *******************************************
struct Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedInputPose_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_LinkedInputPose(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_LinkedInputPose, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_LinkedInputPose) \
	virtual UObject* _getUObject() const override { return const_cast<UAnimGraphNode_LinkedInputPose*>(this); }


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedInputPose_h_48_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_LinkedInputPose(UAnimGraphNode_LinkedInputPose&&) = delete; \
	UAnimGraphNode_LinkedInputPose(const UAnimGraphNode_LinkedInputPose&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_LinkedInputPose); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_LinkedInputPose); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimGraphNode_LinkedInputPose) \
	ANIMGRAPH_API virtual ~UAnimGraphNode_LinkedInputPose();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedInputPose_h_45_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedInputPose_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedInputPose_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedInputPose_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_LinkedInputPose;

// ********** End Class UAnimGraphNode_LinkedInputPose *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedInputPose_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
