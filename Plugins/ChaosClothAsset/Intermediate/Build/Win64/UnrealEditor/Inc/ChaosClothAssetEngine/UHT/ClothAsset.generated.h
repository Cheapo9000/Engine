// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/ClothAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPhysicsAsset;
#ifdef CHAOSCLOTHASSETENGINE_ClothAsset_generated_h
#error "ClothAsset.generated.h already included, missing '#pragma once' in ClothAsset.h"
#endif
#define CHAOSCLOTHASSETENGINE_ClothAsset_generated_h

#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetShadowPhysicsAsset);


#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_48_ACCESSORS \
static void SetSkeleton_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_48_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UChaosClothAsset, NO_API)


#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosClothAsset(); \
	friend struct Z_Construct_UClass_UChaosClothAsset_Statics; \
public: \
	DECLARE_CLASS(UChaosClothAsset, USkinnedAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosClothAssetEngine"), NO_API) \
	DECLARE_SERIALIZER(UChaosClothAsset) \
	FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_48_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UChaosClothAsset*>(this); }


#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChaosClothAsset(UChaosClothAsset&&); \
	UChaosClothAsset(const UChaosClothAsset&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosClothAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosClothAsset)


#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_45_PROLOG
#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_48_ACCESSORS \
	FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSCLOTHASSETENGINE_API UClass* StaticClass<class UChaosClothAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h


#define FOREACH_ENUM_ECLOTHASSETASYNCPROPERTIES(op) \
	op(EClothAssetAsyncProperties::None) \
	op(EClothAssetAsyncProperties::RenderData) \
	op(EClothAssetAsyncProperties::ThumbnailInfo) \
	op(EClothAssetAsyncProperties::ImportedModel) \
	op(EClothAssetAsyncProperties::ClothCollection) \
	op(EClothAssetAsyncProperties::RefSkeleton) \
	op(EClothAssetAsyncProperties::All) 

enum class EClothAssetAsyncProperties : uint64;
template<> struct TIsUEnumClass<EClothAssetAsyncProperties> { enum { Value = true }; };
template<> CHAOSCLOTHASSETENGINE_API UEnum* StaticEnum<EClothAssetAsyncProperties>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
