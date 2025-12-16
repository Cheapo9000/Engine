// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/ClothAssetFactory.h"

#ifdef CHAOSCLOTHASSETTOOLS_ClothAssetFactory_generated_h
#error "ClothAssetFactory.generated.h already included, missing '#pragma once' in ClothAssetFactory.h"
#endif
#define CHAOSCLOTHASSETTOOLS_ClothAssetFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosClothAssetFactory **************************************************
struct Z_Construct_UClass_UChaosClothAssetFactory_Statics;
CHAOSCLOTHASSETTOOLS_API UClass* Z_Construct_UClass_UChaosClothAssetFactory_NoRegister();

#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetTools_Public_ChaosClothAsset_ClothAssetFactory_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosClothAssetFactory(); \
	friend struct ::Z_Construct_UClass_UChaosClothAssetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCLOTHASSETTOOLS_API UClass* ::Z_Construct_UClass_UChaosClothAssetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosClothAssetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosClothAssetTools"), Z_Construct_UClass_UChaosClothAssetFactory_NoRegister) \
	DECLARE_SERIALIZER(UChaosClothAssetFactory)


#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetTools_Public_ChaosClothAsset_ClothAssetFactory_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosClothAssetFactory(UChaosClothAssetFactory&&) = delete; \
	UChaosClothAssetFactory(const UChaosClothAssetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCLOTHASSETTOOLS_API, UChaosClothAssetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosClothAssetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosClothAssetFactory) \
	CHAOSCLOTHASSETTOOLS_API virtual ~UChaosClothAssetFactory();


#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetTools_Public_ChaosClothAsset_ClothAssetFactory_h_16_PROLOG
#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetTools_Public_ChaosClothAsset_ClothAssetFactory_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetTools_Public_ChaosClothAsset_ClothAssetFactory_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetTools_Public_ChaosClothAsset_ClothAssetFactory_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosClothAssetFactory;

// ********** End Class UChaosClothAssetFactory ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetTools_Public_ChaosClothAsset_ClothAssetFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
