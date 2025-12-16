// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNEDenoiserAsset.h"

#ifdef NNEDENOISER_NNEDenoiserAsset_generated_h
#error "NNEDenoiserAsset.generated.h already included, missing '#pragma once' in NNEDenoiserAsset.h"
#endif
#define NNEDENOISER_NNEDenoiserAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNNEDenoiserAsset ********************************************************
struct Z_Construct_UClass_UNNEDenoiserAsset_Statics;
NNEDENOISER_API UClass* Z_Construct_UClass_UNNEDenoiserAsset_NoRegister();

#define FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserAsset_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNNEDenoiserAsset(); \
	friend struct ::Z_Construct_UClass_UNNEDenoiserAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NNEDENOISER_API UClass* ::Z_Construct_UClass_UNNEDenoiserAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UNNEDenoiserAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NNEDenoiser"), Z_Construct_UClass_UNNEDenoiserAsset_NoRegister) \
	DECLARE_SERIALIZER(UNNEDenoiserAsset)


#define FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserAsset_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NNEDENOISER_API UNNEDenoiserAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNNEDenoiserAsset(UNNEDenoiserAsset&&) = delete; \
	UNNEDenoiserAsset(const UNNEDenoiserAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NNEDENOISER_API, UNNEDenoiserAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNNEDenoiserAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNNEDenoiserAsset) \
	NNEDENOISER_API virtual ~UNNEDenoiserAsset();


#define FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserAsset_h_13_PROLOG
#define FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserAsset_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserAsset_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserAsset_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNNEDenoiserAsset;

// ********** End Class UNNEDenoiserAsset **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
