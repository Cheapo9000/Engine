// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_CustomProperty.h"

#ifdef ANIMGRAPH_AnimGraphNode_CustomProperty_generated_h
#error "AnimGraphNode_CustomProperty.generated.h already included, missing '#pragma once' in AnimGraphNode_CustomProperty.h"
#endif
#define ANIMGRAPH_AnimGraphNode_CustomProperty_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_CustomProperty ********************************************
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CustomProperty_h_23_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_CustomProperty, ANIMGRAPH_API)


struct Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_CustomProperty_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CustomProperty_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_CustomProperty(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_CustomProperty_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_CustomProperty, UAnimGraphNode_Base, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_CustomProperty_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_CustomProperty) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CustomProperty_h_23_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAnimGraphNode_CustomProperty*>(this); }


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CustomProperty_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_CustomProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_CustomProperty(UAnimGraphNode_CustomProperty&&) = delete; \
	UAnimGraphNode_CustomProperty(const UAnimGraphNode_CustomProperty&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_CustomProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_CustomProperty); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_CustomProperty) \
	ANIMGRAPH_API virtual ~UAnimGraphNode_CustomProperty();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CustomProperty_h_20_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CustomProperty_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CustomProperty_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CustomProperty_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_CustomProperty;

// ********** End Class UAnimGraphNode_CustomProperty **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CustomProperty_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
