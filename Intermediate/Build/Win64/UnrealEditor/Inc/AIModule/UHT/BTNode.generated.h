// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/BTNode.h"

#ifdef AIMODULE_BTNode_generated_h
#error "BTNode.generated.h already included, missing '#pragma once' in BTNode.h"
#endif
#define AIMODULE_BTNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBTNode ******************************************************************
struct Z_Construct_UClass_UBTNode_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UBTNode_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUBTNode(); \
	friend struct ::Z_Construct_UClass_UBTNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UBTNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UBTNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UBTNode_NoRegister) \
	DECLARE_SERIALIZER(UBTNode) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UBTNode*>(this); }


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTNode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBTNode(UBTNode&&) = delete; \
	UBTNode(const UBTNode&) = delete; \
	AIMODULE_API virtual ~UBTNode();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_46_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_49_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBTNode;

// ********** End Class UBTNode ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
