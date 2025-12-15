// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_LinkedAnimGraphBase.h"

#ifdef ANIMGRAPH_AnimGraphNode_LinkedAnimGraphBase_generated_h
#error "AnimGraphNode_LinkedAnimGraphBase.generated.h already included, missing '#pragma once' in AnimGraphNode_LinkedAnimGraphBase.h"
#endif
#define ANIMGRAPH_AnimGraphNode_LinkedAnimGraphBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_LinkedAnimGraphBase ***************************************
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraphBase_h_24_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_LinkedAnimGraphBase, ANIMGRAPH_API)


struct Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraphBase_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_LinkedAnimGraphBase(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_LinkedAnimGraphBase, UAnimGraphNode_CustomProperty, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_LinkedAnimGraphBase) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraphBase_h_24_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAnimGraphNode_LinkedAnimGraphBase*>(this); }


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraphBase_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_LinkedAnimGraphBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_LinkedAnimGraphBase(UAnimGraphNode_LinkedAnimGraphBase&&) = delete; \
	UAnimGraphNode_LinkedAnimGraphBase(const UAnimGraphNode_LinkedAnimGraphBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_LinkedAnimGraphBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_LinkedAnimGraphBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_LinkedAnimGraphBase) \
	ANIMGRAPH_API virtual ~UAnimGraphNode_LinkedAnimGraphBase();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraphBase_h_21_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraphBase_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraphBase_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraphBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_LinkedAnimGraphBase;

// ********** End Class UAnimGraphNode_LinkedAnimGraphBase *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraphBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
