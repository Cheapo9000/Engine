// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/ClothAsset.h"

#ifdef CHAOSCLOTHASSETENGINE_ClothAsset_generated_h
#error "ClothAsset.generated.h already included, missing '#pragma once' in ClothAsset.h"
#endif
#define CHAOSCLOTHASSETENGINE_ClothAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosClothAsset *********************************************************
#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_46_ACCESSORS \
static void SetSkeleton_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_46_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UChaosClothAsset, CHAOSCLOTHASSETENGINE_API)


struct Z_Construct_UClass_UChaosClothAsset_Statics;
CHAOSCLOTHASSETENGINE_API UClass* Z_Construct_UClass_UChaosClothAsset_NoRegister();

#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosClothAsset(); \
	friend struct ::Z_Construct_UClass_UChaosClothAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCLOTHASSETENGINE_API UClass* ::Z_Construct_UClass_UChaosClothAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosClothAsset, UChaosClothAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosClothAssetEngine"), Z_Construct_UClass_UChaosClothAsset_NoRegister) \
	DECLARE_SERIALIZER(UChaosClothAsset) \
	FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_46_ARCHIVESERIALIZER


#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_46_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosClothAsset(UChaosClothAsset&&) = delete; \
	UChaosClothAsset(const UChaosClothAsset&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosClothAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosClothAsset)


#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_43_PROLOG
#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_46_ACCESSORS \
	FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosClothAsset;

// ********** End Class UChaosClothAsset ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h

// ********** Begin Enum EClothAssetAsyncProperties ************************************************
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
template<> CHAOSCLOTHASSETENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EClothAssetAsyncProperties>();
// ********** End Enum EClothAssetAsyncProperties **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
