// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/BTCompositeNode.h"

#ifdef AIMODULE_BTCompositeNode_generated_h
#error "BTCompositeNode.generated.h already included, missing '#pragma once' in BTCompositeNode.h"
#endif
#define AIMODULE_BTCompositeNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBTDecoratorLogic *************************************************
struct Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FBTDecoratorLogic;
// ********** End ScriptStruct FBTDecoratorLogic ***************************************************

// ********** Begin ScriptStruct FBTCompositeChild *************************************************
struct Z_Construct_UScriptStruct_FBTCompositeChild_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBTCompositeChild_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FBTCompositeChild;
// ********** End ScriptStruct FBTCompositeChild ***************************************************

// ********** Begin Class UBTCompositeNode *********************************************************
struct Z_Construct_UClass_UBTCompositeNode_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_89_INCLASS \
private: \
	static void StaticRegisterNativesUBTCompositeNode(); \
	friend struct ::Z_Construct_UClass_UBTCompositeNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UBTCompositeNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UBTCompositeNode, UBTNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UBTCompositeNode_NoRegister) \
	DECLARE_SERIALIZER(UBTCompositeNode)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_89_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTCompositeNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTCompositeNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTCompositeNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTCompositeNode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBTCompositeNode(UBTCompositeNode&&) = delete; \
	UBTCompositeNode(const UBTCompositeNode&) = delete;


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_86_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_89_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_89_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_89_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBTCompositeNode;

// ********** End Class UBTCompositeNode ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h

// ********** Begin Enum EBTChildIndex *************************************************************
#define FOREACH_ENUM_EBTCHILDINDEX(op) \
	op(EBTChildIndex::FirstNode) \
	op(EBTChildIndex::TaskNode) 

enum class EBTChildIndex : uint8;
template<> struct TIsUEnumClass<EBTChildIndex> { enum { Value = true }; };
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBTChildIndex>();
// ********** End Enum EBTChildIndex ***************************************************************

// ********** Begin Enum EBTDecoratorLogic *********************************************************
#define FOREACH_ENUM_EBTDECORATORLOGIC(op) \
	op(EBTDecoratorLogic::Invalid) \
	op(EBTDecoratorLogic::Test) \
	op(EBTDecoratorLogic::And) \
	op(EBTDecoratorLogic::Or) \
	op(EBTDecoratorLogic::Not) 

namespace EBTDecoratorLogic { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBTDecoratorLogic::Type>();
// ********** End Enum EBTDecoratorLogic ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
