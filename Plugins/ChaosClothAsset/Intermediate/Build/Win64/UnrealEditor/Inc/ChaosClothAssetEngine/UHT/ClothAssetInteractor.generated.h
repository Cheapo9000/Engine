// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/ClothAssetInteractor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSCLOTHASSETENGINE_ClothAssetInteractor_generated_h
#error "ClothAssetInteractor.generated.h already included, missing '#pragma once' in ClothAssetInteractor.h"
#endif
#define CHAOSCLOTHASSETENGINE_ClothAssetInteractor_generated_h

#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetInteractor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetStringValue); \
	DECLARE_FUNCTION(execSetVectorValue); \
	DECLARE_FUNCTION(execSetIntValue); \
	DECLARE_FUNCTION(execSetWeightedFloatValue); \
	DECLARE_FUNCTION(execSetHighFloatValue); \
	DECLARE_FUNCTION(execSetLowFloatValue); \
	DECLARE_FUNCTION(execSetFloatValue); \
	DECLARE_FUNCTION(execGetStringValue); \
	DECLARE_FUNCTION(execGetVectorValue); \
	DECLARE_FUNCTION(execGetIntValue); \
	DECLARE_FUNCTION(execGetWeightedFloatValue); \
	DECLARE_FUNCTION(execGetHighFloatValue); \
	DECLARE_FUNCTION(execGetLowFloatValue); \
	DECLARE_FUNCTION(execGetFloatValue); \
	DECLARE_FUNCTION(execGetAllProperties);


#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetInteractor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosClothAssetInteractor(); \
	friend struct Z_Construct_UClass_UChaosClothAssetInteractor_Statics; \
public: \
	DECLARE_CLASS(UChaosClothAssetInteractor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosClothAssetEngine"), CHAOSCLOTHASSETENGINE_API) \
	DECLARE_SERIALIZER(UChaosClothAssetInteractor)


#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetInteractor_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSCLOTHASSETENGINE_API UChaosClothAssetInteractor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChaosClothAssetInteractor(UChaosClothAssetInteractor&&); \
	UChaosClothAssetInteractor(const UChaosClothAssetInteractor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCLOTHASSETENGINE_API, UChaosClothAssetInteractor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosClothAssetInteractor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosClothAssetInteractor) \
	CHAOSCLOTHASSETENGINE_API virtual ~UChaosClothAssetInteractor();


#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetInteractor_h_14_PROLOG
#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetInteractor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetInteractor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetInteractor_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetInteractor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSCLOTHASSETENGINE_API UClass* StaticClass<class UChaosClothAssetInteractor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetInteractor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
