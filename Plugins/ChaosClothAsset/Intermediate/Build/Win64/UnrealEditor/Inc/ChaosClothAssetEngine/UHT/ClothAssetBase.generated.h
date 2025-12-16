// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/ClothAssetBase.h"

#ifdef CHAOSCLOTHASSETENGINE_ClothAssetBase_generated_h
#error "ClothAssetBase.generated.h already included, missing '#pragma once' in ClothAssetBase.h"
#endif
#define CHAOSCLOTHASSETENGINE_ClothAssetBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UPhysicsAsset;

// ********** Begin Class UChaosClothAssetBase *****************************************************
#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetOverlayMaterialMaxDrawDistance); \
	DECLARE_FUNCTION(execSetOverlayMaterial); \
	DECLARE_FUNCTION(execGetOverlayMaterialMaxDrawDistance); \
	DECLARE_FUNCTION(execGetOverlayMaterial); \
	DECLARE_FUNCTION(execGetShadowPhysicsAsset);


#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetBase_h_29_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UChaosClothAssetBase, CHAOSCLOTHASSETENGINE_API)


struct Z_Construct_UClass_UChaosClothAssetBase_Statics;
CHAOSCLOTHASSETENGINE_API UClass* Z_Construct_UClass_UChaosClothAssetBase_NoRegister();

#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetBase_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosClothAssetBase(); \
	friend struct ::Z_Construct_UClass_UChaosClothAssetBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCLOTHASSETENGINE_API UClass* ::Z_Construct_UClass_UChaosClothAssetBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosClothAssetBase, USkinnedAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ChaosClothAssetEngine"), Z_Construct_UClass_UChaosClothAssetBase_NoRegister) \
	DECLARE_SERIALIZER(UChaosClothAssetBase) \
	FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetBase_h_29_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UChaosClothAssetBase*>(this); }


#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetBase_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosClothAssetBase(UChaosClothAssetBase&&) = delete; \
	UChaosClothAssetBase(const UChaosClothAssetBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCLOTHASSETENGINE_API, UChaosClothAssetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosClothAssetBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosClothAssetBase) \
	CHAOSCLOTHASSETENGINE_API virtual ~UChaosClothAssetBase();


#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetBase_h_23_PROLOG
#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetBase_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetBase_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetBase_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosClothAssetBase;

// ********** End Class UChaosClothAssetBase *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
