// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNextStateTree.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXTSTATETREE_AnimNextStateTree_generated_h
#error "AnimNextStateTree.generated.h already included, missing '#pragma once' in AnimNextStateTree.h"
#endif
#define ANIMNEXTSTATETREE_AnimNextStateTree_generated_h

#define FID_Engine_Plugins_Experimental_AnimNextStateTree_Source_AnimNextStateTree_Public_AnimNextStateTree_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextStateTree(); \
	friend struct Z_Construct_UClass_UAnimNextStateTree_Statics; \
public: \
	DECLARE_CLASS(UAnimNextStateTree, UAnimNextAnimationGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimNextStateTree"), NO_API) \
	DECLARE_SERIALIZER(UAnimNextStateTree)


#define FID_Engine_Plugins_Experimental_AnimNextStateTree_Source_AnimNextStateTree_Public_AnimNextStateTree_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNextStateTree(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimNextStateTree(UAnimNextStateTree&&); \
	UAnimNextStateTree(const UAnimNextStateTree&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNextStateTree); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextStateTree); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextStateTree) \
	NO_API virtual ~UAnimNextStateTree();


#define FID_Engine_Plugins_Experimental_AnimNextStateTree_Source_AnimNextStateTree_Public_AnimNextStateTree_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_AnimNextStateTree_Source_AnimNextStateTree_Public_AnimNextStateTree_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AnimNextStateTree_Source_AnimNextStateTree_Public_AnimNextStateTree_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AnimNextStateTree_Source_AnimNextStateTree_Public_AnimNextStateTree_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMNEXTSTATETREE_API UClass* StaticClass<class UAnimNextStateTree>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNextStateTree_Source_AnimNextStateTree_Public_AnimNextStateTree_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
