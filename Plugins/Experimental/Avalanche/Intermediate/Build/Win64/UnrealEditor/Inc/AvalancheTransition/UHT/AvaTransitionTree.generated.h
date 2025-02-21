// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaTransitionTree.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAvaTransitionInstancingMode : uint8;
#ifdef AVALANCHETRANSITION_AvaTransitionTree_generated_h
#error "AvaTransitionTree.generated.h already included, missing '#pragma once' in AvaTransitionTree.h"
#endif
#define AVALANCHETRANSITION_AvaTransitionTree_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_AvaTransitionTree_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInstancingMode);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_AvaTransitionTree_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaTransitionTree(); \
	friend struct Z_Construct_UClass_UAvaTransitionTree_Statics; \
public: \
	DECLARE_CLASS(UAvaTransitionTree, UStateTree, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheTransition"), AVALANCHETRANSITION_API) \
	DECLARE_SERIALIZER(UAvaTransitionTree)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_AvaTransitionTree_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHETRANSITION_API UAvaTransitionTree(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaTransitionTree(UAvaTransitionTree&&); \
	UAvaTransitionTree(const UAvaTransitionTree&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHETRANSITION_API, UAvaTransitionTree); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTransitionTree); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaTransitionTree) \
	AVALANCHETRANSITION_API virtual ~UAvaTransitionTree();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_AvaTransitionTree_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_AvaTransitionTree_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_AvaTransitionTree_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_AvaTransitionTree_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_AvaTransitionTree_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHETRANSITION_API UClass* StaticClass<class UAvaTransitionTree>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_AvaTransitionTree_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
