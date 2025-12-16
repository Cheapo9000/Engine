// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/AnimNextSkeletalMeshComponentLibrary.h"

#ifdef UAFANIMGRAPH_AnimNextSkeletalMeshComponentLibrary_generated_h
#error "AnimNextSkeletalMeshComponentLibrary.generated.h already included, missing '#pragma once' in AnimNextSkeletalMeshComponentLibrary.h"
#endif
#define UAFANIMGRAPH_AnimNextSkeletalMeshComponentLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
struct FAnimNextGraphReferencePose;

// ********** Begin Class UAnimNextSkeletalMeshComponentLibrary ************************************
#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Private_Graph_AnimNextSkeletalMeshComponentLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetReferencePose);


struct Z_Construct_UClass_UAnimNextSkeletalMeshComponentLibrary_Statics;
UAFANIMGRAPH_API UClass* Z_Construct_UClass_UAnimNextSkeletalMeshComponentLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Private_Graph_AnimNextSkeletalMeshComponentLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextSkeletalMeshComponentLibrary(); \
	friend struct ::Z_Construct_UClass_UAnimNextSkeletalMeshComponentLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAFANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimNextSkeletalMeshComponentLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimNextSkeletalMeshComponentLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UAFAnimGraph"), Z_Construct_UClass_UAnimNextSkeletalMeshComponentLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAnimNextSkeletalMeshComponentLibrary)


#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Private_Graph_AnimNextSkeletalMeshComponentLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNextSkeletalMeshComponentLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimNextSkeletalMeshComponentLibrary(UAnimNextSkeletalMeshComponentLibrary&&) = delete; \
	UAnimNextSkeletalMeshComponentLibrary(const UAnimNextSkeletalMeshComponentLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNextSkeletalMeshComponentLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextSkeletalMeshComponentLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextSkeletalMeshComponentLibrary) \
	NO_API virtual ~UAnimNextSkeletalMeshComponentLibrary();


#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Private_Graph_AnimNextSkeletalMeshComponentLibrary_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Private_Graph_AnimNextSkeletalMeshComponentLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Private_Graph_AnimNextSkeletalMeshComponentLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Private_Graph_AnimNextSkeletalMeshComponentLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Private_Graph_AnimNextSkeletalMeshComponentLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimNextSkeletalMeshComponentLibrary;

// ********** End Class UAnimNextSkeletalMeshComponentLibrary **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Private_Graph_AnimNextSkeletalMeshComponentLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
