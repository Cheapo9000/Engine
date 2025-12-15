// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_Slot.h"

#ifdef ANIMGRAPH_AnimGraphNode_Slot_generated_h
#error "AnimGraphNode_Slot.generated.h already included, missing '#pragma once' in AnimGraphNode_Slot.h"
#endif
#define ANIMGRAPH_AnimGraphNode_Slot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_Slot ******************************************************
struct Z_Construct_UClass_UAnimGraphNode_Slot_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Slot_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Slot_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_Slot(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_Slot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_Slot_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_Slot, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_Slot_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_Slot)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Slot_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_Slot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_Slot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_Slot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_Slot); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_Slot(UAnimGraphNode_Slot&&) = delete; \
	UAnimGraphNode_Slot(const UAnimGraphNode_Slot&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_Slot();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Slot_h_12_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Slot_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Slot_h_15_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Slot_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_Slot;

// ********** End Class UAnimGraphNode_Slot ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Slot_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
