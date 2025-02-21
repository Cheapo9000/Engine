// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/MultiAnimAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimationAsset;
#ifdef POSESEARCH_MultiAnimAsset_generated_h
#error "MultiAnimAsset.generated.h already included, missing '#pragma once' in MultiAnimAsset.h"
#endif
#define POSESEARCH_MultiAnimAsset_generated_h

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MultiAnimAsset_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBP_GetOrigin); \
	DECLARE_FUNCTION(execBP_GetAnimationAsset);


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MultiAnimAsset_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiAnimAsset(); \
	friend struct Z_Construct_UClass_UMultiAnimAsset_Statics; \
public: \
	DECLARE_CLASS(UMultiAnimAsset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PoseSearch"), NO_API) \
	DECLARE_SERIALIZER(UMultiAnimAsset)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MultiAnimAsset_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiAnimAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMultiAnimAsset(UMultiAnimAsset&&); \
	UMultiAnimAsset(const UMultiAnimAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiAnimAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiAnimAsset); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiAnimAsset) \
	NO_API virtual ~UMultiAnimAsset();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MultiAnimAsset_h_12_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MultiAnimAsset_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MultiAnimAsset_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MultiAnimAsset_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MultiAnimAsset_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POSESEARCH_API UClass* StaticClass<class UMultiAnimAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MultiAnimAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
