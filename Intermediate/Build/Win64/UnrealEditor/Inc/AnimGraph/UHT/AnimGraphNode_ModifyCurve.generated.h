// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_ModifyCurve.h"

#ifdef ANIMGRAPH_AnimGraphNode_ModifyCurve_generated_h
#error "AnimGraphNode_ModifyCurve.generated.h already included, missing '#pragma once' in AnimGraphNode_ModifyCurve.h"
#endif
#define ANIMGRAPH_AnimGraphNode_ModifyCurve_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_ModifyCurve ***********************************************
struct Z_Construct_UClass_UAnimGraphNode_ModifyCurve_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_ModifyCurve_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ModifyCurve_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_ModifyCurve(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_ModifyCurve_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_ModifyCurve_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_ModifyCurve, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_ModifyCurve_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_ModifyCurve)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ModifyCurve_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_ModifyCurve(UAnimGraphNode_ModifyCurve&&) = delete; \
	UAnimGraphNode_ModifyCurve(const UAnimGraphNode_ModifyCurve&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_ModifyCurve); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_ModifyCurve); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimGraphNode_ModifyCurve) \
	ANIMGRAPH_API virtual ~UAnimGraphNode_ModifyCurve();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ModifyCurve_h_14_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ModifyCurve_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ModifyCurve_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ModifyCurve_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_ModifyCurve;

// ********** End Class UAnimGraphNode_ModifyCurve *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ModifyCurve_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
