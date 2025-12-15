// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_Base.h"

#ifdef ANIMGRAPH_AnimGraphNode_Base_generated_h
#error "AnimGraphNode_Base.generated.h already included, missing '#pragma once' in AnimGraphNode_Base.h"
#endif
#define ANIMGRAPH_AnimGraphNode_Base_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimGraphNodePropertyBinding *************************************
struct Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics;
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_140_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics; \
	ANIMGRAPH_API static class UScriptStruct* StaticStruct();


struct FAnimGraphNodePropertyBinding;
// ********** End ScriptStruct FAnimGraphNodePropertyBinding ***************************************

// ********** Begin Class UAnimGraphNode_Base ******************************************************
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_202_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_Base, ANIMGRAPH_API)


struct Z_Construct_UClass_UAnimGraphNode_Base_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_202_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_Base(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_Base_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_Base_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_Base, UK2Node, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_Base_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_Base) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_202_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_202_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_Base); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_Base(UAnimGraphNode_Base&&) = delete; \
	UAnimGraphNode_Base(const UAnimGraphNode_Base&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_Base();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_199_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_202_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_202_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_202_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_Base;

// ********** End Class UAnimGraphNode_Base ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h

// ********** Begin Enum EBlueprintUsage ***********************************************************
#define FOREACH_ENUM_EBLUEPRINTUSAGE(op) \
	op(EBlueprintUsage::NoProperties) \
	op(EBlueprintUsage::DoesNotUseBlueprint) \
	op(EBlueprintUsage::UsesBlueprint) 

enum class EBlueprintUsage : uint8;
template<> struct TIsUEnumClass<EBlueprintUsage> { enum { Value = true }; };
template<> ANIMGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlueprintUsage>();
// ********** End Enum EBlueprintUsage *************************************************************

// ********** Begin Enum EAnimGraphNodePropertyBindingType *****************************************
#define FOREACH_ENUM_EANIMGRAPHNODEPROPERTYBINDINGTYPE(op) \
	op(EAnimGraphNodePropertyBindingType::None) \
	op(EAnimGraphNodePropertyBindingType::Property) \
	op(EAnimGraphNodePropertyBindingType::Function) 

enum class EAnimGraphNodePropertyBindingType;
template<> struct TIsUEnumClass<EAnimGraphNodePropertyBindingType> { enum { Value = true }; };
template<> ANIMGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimGraphNodePropertyBindingType>();
// ********** End Enum EAnimGraphNodePropertyBindingType *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
