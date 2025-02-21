// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Param/AnimNextSkeletalMeshComponentLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
struct FAnimNextGraphReferencePose;
#ifdef ANIMNEXT_AnimNextSkeletalMeshComponentLibrary_generated_h
#error "AnimNextSkeletalMeshComponentLibrary.generated.h already included, missing '#pragma once' in AnimNextSkeletalMeshComponentLibrary.h"
#endif
#define ANIMNEXT_AnimNextSkeletalMeshComponentLibrary_generated_h

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Param_AnimNextSkeletalMeshComponentLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetReferencePose);


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Param_AnimNextSkeletalMeshComponentLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextSkeletalMeshComponentLibrary(); \
	friend struct Z_Construct_UClass_UAnimNextSkeletalMeshComponentLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimNextSkeletalMeshComponentLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimNext"), NO_API) \
	DECLARE_SERIALIZER(UAnimNextSkeletalMeshComponentLibrary)


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Param_AnimNextSkeletalMeshComponentLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNextSkeletalMeshComponentLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimNextSkeletalMeshComponentLibrary(UAnimNextSkeletalMeshComponentLibrary&&); \
	UAnimNextSkeletalMeshComponentLibrary(const UAnimNextSkeletalMeshComponentLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNextSkeletalMeshComponentLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextSkeletalMeshComponentLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextSkeletalMeshComponentLibrary) \
	NO_API virtual ~UAnimNextSkeletalMeshComponentLibrary();


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Param_AnimNextSkeletalMeshComponentLibrary_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Param_AnimNextSkeletalMeshComponentLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Param_AnimNextSkeletalMeshComponentLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Param_AnimNextSkeletalMeshComponentLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Param_AnimNextSkeletalMeshComponentLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMNEXT_API UClass* StaticClass<class UAnimNextSkeletalMeshComponentLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Param_AnimNextSkeletalMeshComponentLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
