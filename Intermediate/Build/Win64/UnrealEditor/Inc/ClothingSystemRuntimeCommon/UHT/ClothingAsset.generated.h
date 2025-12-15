// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClothingAsset.h"

#ifdef CLOTHINGSYSTEMRUNTIMECOMMON_ClothingAsset_generated_h
#error "ClothingAsset.generated.h already included, missing '#pragma once' in ClothingAsset.h"
#endif
#define CLOTHINGSYSTEMRUNTIMECOMMON_ClothingAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UClothingAssetCustomData *************************************************
struct Z_Construct_UClass_UClothingAssetCustomData_Statics;
CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothingAssetCustomData_NoRegister();

#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothingAsset_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothingAssetCustomData(); \
	friend struct ::Z_Construct_UClass_UClothingAssetCustomData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* ::Z_Construct_UClass_UClothingAssetCustomData_NoRegister(); \
public: \
	DECLARE_CLASS2(UClothingAssetCustomData, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ClothingSystemRuntimeCommon"), Z_Construct_UClass_UClothingAssetCustomData_NoRegister) \
	DECLARE_SERIALIZER(UClothingAssetCustomData)


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothingAsset_h_102_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClothingAssetCustomData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClothingAssetCustomData(UClothingAssetCustomData&&) = delete; \
	UClothingAssetCustomData(const UClothingAssetCustomData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLOTHINGSYSTEMRUNTIMECOMMON_API, UClothingAssetCustomData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothingAssetCustomData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothingAssetCustomData) \
	CLOTHINGSYSTEMRUNTIMECOMMON_API virtual ~UClothingAssetCustomData();


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothingAsset_h_99_PROLOG
#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothingAsset_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothingAsset_h_102_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothingAsset_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClothingAssetCustomData;

// ********** End Class UClothingAssetCustomData ***************************************************

// ********** Begin Class UClothingAssetCommon *****************************************************
#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothingAsset_h_130_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UClothingAssetCommon, CLOTHINGSYSTEMRUNTIMECOMMON_API)


struct Z_Construct_UClass_UClothingAssetCommon_Statics;
CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothingAssetCommon_NoRegister();

#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothingAsset_h_130_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothingAssetCommon(); \
	friend struct ::Z_Construct_UClass_UClothingAssetCommon_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* ::Z_Construct_UClass_UClothingAssetCommon_NoRegister(); \
public: \
	DECLARE_CLASS2(UClothingAssetCommon, UClothingAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClothingSystemRuntimeCommon"), Z_Construct_UClass_UClothingAssetCommon_NoRegister) \
	DECLARE_SERIALIZER(UClothingAssetCommon) \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothingAsset_h_130_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothingAsset_h_130_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClothingAssetCommon(UClothingAssetCommon&&) = delete; \
	UClothingAssetCommon(const UClothingAssetCommon&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLOTHINGSYSTEMRUNTIMECOMMON_API, UClothingAssetCommon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothingAssetCommon); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothingAssetCommon) \
	CLOTHINGSYSTEMRUNTIMECOMMON_API virtual ~UClothingAssetCommon();


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothingAsset_h_127_PROLOG
#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothingAsset_h_130_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothingAsset_h_130_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothingAsset_h_130_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClothingAssetCommon;

// ********** End Class UClothingAssetCommon *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothingAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
