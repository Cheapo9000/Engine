// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/ClothAssetInteractor.h"

#ifdef CHAOSCLOTHASSETENGINE_ClothAssetInteractor_generated_h
#error "ClothAssetInteractor.generated.h already included, missing '#pragma once' in ClothAssetInteractor.h"
#endif
#define CHAOSCLOTHASSETENGINE_ClothAssetInteractor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosClothAssetInteractor ***********************************************
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
	DECLARE_FUNCTION(execGetAllProperties); \
	DECLARE_FUNCTION(execSetStringPropertyValue); \
	DECLARE_FUNCTION(execSetVectorPropertyValue); \
	DECLARE_FUNCTION(execSetIntPropertyValue); \
	DECLARE_FUNCTION(execSetWeightedFloatPropertyValue); \
	DECLARE_FUNCTION(execSetHighFloatPropertyValue); \
	DECLARE_FUNCTION(execSetLowFloatPropertyValue); \
	DECLARE_FUNCTION(execSetFloatPropertyValue); \
	DECLARE_FUNCTION(execGetStringPropertyValue); \
	DECLARE_FUNCTION(execGetVectorPropertyValue); \
	DECLARE_FUNCTION(execGetIntPropertyValue); \
	DECLARE_FUNCTION(execGetWeightedFloatPropertyValue); \
	DECLARE_FUNCTION(execGetHighFloatPropertyValue); \
	DECLARE_FUNCTION(execGetLowFloatPropertyValue); \
	DECLARE_FUNCTION(execGetFloatPropertyValue); \
	DECLARE_FUNCTION(execGetAllPropertyNames);


struct Z_Construct_UClass_UChaosClothAssetInteractor_Statics;
CHAOSCLOTHASSETENGINE_API UClass* Z_Construct_UClass_UChaosClothAssetInteractor_NoRegister();

#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetInteractor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosClothAssetInteractor(); \
	friend struct ::Z_Construct_UClass_UChaosClothAssetInteractor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCLOTHASSETENGINE_API UClass* ::Z_Construct_UClass_UChaosClothAssetInteractor_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosClothAssetInteractor, UClothingInteractor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosClothAssetEngine"), Z_Construct_UClass_UChaosClothAssetInteractor_NoRegister) \
	DECLARE_SERIALIZER(UChaosClothAssetInteractor)


#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetInteractor_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSCLOTHASSETENGINE_API UChaosClothAssetInteractor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosClothAssetInteractor(UChaosClothAssetInteractor&&) = delete; \
	UChaosClothAssetInteractor(const UChaosClothAssetInteractor&) = delete; \
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


class UChaosClothAssetInteractor;

// ********** End Class UChaosClothAssetInteractor *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetInteractor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
