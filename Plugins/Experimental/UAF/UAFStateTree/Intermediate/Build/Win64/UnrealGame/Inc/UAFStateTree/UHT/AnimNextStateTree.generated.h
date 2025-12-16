// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNextStateTree.h"

#ifdef UAFSTATETREE_AnimNextStateTree_generated_h
#error "AnimNextStateTree.generated.h already included, missing '#pragma once' in AnimNextStateTree.h"
#endif
#define UAFSTATETREE_AnimNextStateTree_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimNextStateTree *******************************************************
struct Z_Construct_UClass_UAnimNextStateTree_Statics;
UAFSTATETREE_API UClass* Z_Construct_UClass_UAnimNextStateTree_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAFStateTree_Source_UAFStateTree_Internal_AnimNextStateTree_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextStateTree(); \
	friend struct ::Z_Construct_UClass_UAnimNextStateTree_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAFSTATETREE_API UClass* ::Z_Construct_UClass_UAnimNextStateTree_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimNextStateTree, UAnimNextAnimationGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UAFStateTree"), Z_Construct_UClass_UAnimNextStateTree_NoRegister) \
	DECLARE_SERIALIZER(UAnimNextStateTree)


#define FID_Engine_Plugins_Experimental_UAF_UAFStateTree_Source_UAFStateTree_Internal_AnimNextStateTree_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNextStateTree(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimNextStateTree(UAnimNextStateTree&&) = delete; \
	UAnimNextStateTree(const UAnimNextStateTree&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNextStateTree); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextStateTree); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextStateTree) \
	NO_API virtual ~UAnimNextStateTree();


#define FID_Engine_Plugins_Experimental_UAF_UAFStateTree_Source_UAFStateTree_Internal_AnimNextStateTree_h_37_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAFStateTree_Source_UAFStateTree_Internal_AnimNextStateTree_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAFStateTree_Source_UAFStateTree_Internal_AnimNextStateTree_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAFStateTree_Source_UAFStateTree_Internal_AnimNextStateTree_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimNextStateTree;

// ********** End Class UAnimNextStateTree *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFStateTree_Source_UAFStateTree_Internal_AnimNextStateTree_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
