// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/SkeletalMeshConverterClassProvider.h"

#ifdef CHAOSCLOTHASSETENGINE_SkeletalMeshConverterClassProvider_generated_h
#error "SkeletalMeshConverterClassProvider.generated.h already included, missing '#pragma once' in SkeletalMeshConverterClassProvider.h"
#endif
#define CHAOSCLOTHASSETENGINE_SkeletalMeshConverterClassProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UClothAssetSkeletalMeshConverter *****************************************
struct Z_Construct_UClass_UClothAssetSkeletalMeshConverter_Statics;
CHAOSCLOTHASSETENGINE_API UClass* Z_Construct_UClass_UClothAssetSkeletalMeshConverter_NoRegister();

#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_SkeletalMeshConverterClassProvider_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothAssetSkeletalMeshConverter(); \
	friend struct ::Z_Construct_UClass_UClothAssetSkeletalMeshConverter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCLOTHASSETENGINE_API UClass* ::Z_Construct_UClass_UClothAssetSkeletalMeshConverter_NoRegister(); \
public: \
	DECLARE_CLASS2(UClothAssetSkeletalMeshConverter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ChaosClothAssetEngine"), Z_Construct_UClass_UClothAssetSkeletalMeshConverter_NoRegister) \
	DECLARE_SERIALIZER(UClothAssetSkeletalMeshConverter)


#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_SkeletalMeshConverterClassProvider_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSCLOTHASSETENGINE_API UClothAssetSkeletalMeshConverter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClothAssetSkeletalMeshConverter(UClothAssetSkeletalMeshConverter&&) = delete; \
	UClothAssetSkeletalMeshConverter(const UClothAssetSkeletalMeshConverter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCLOTHASSETENGINE_API, UClothAssetSkeletalMeshConverter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothAssetSkeletalMeshConverter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothAssetSkeletalMeshConverter) \
	CHAOSCLOTHASSETENGINE_API virtual ~UClothAssetSkeletalMeshConverter();


#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_SkeletalMeshConverterClassProvider_h_11_PROLOG
#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_SkeletalMeshConverterClassProvider_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_SkeletalMeshConverterClassProvider_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_SkeletalMeshConverterClassProvider_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClothAssetSkeletalMeshConverter;

// ********** End Class UClothAssetSkeletalMeshConverter *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_SkeletalMeshConverterClassProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
