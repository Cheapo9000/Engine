// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetDefinition_LidarPointCloud.h"

#ifdef LIDARPOINTCLOUDEDITOR_AssetDefinition_LidarPointCloud_generated_h
#error "AssetDefinition_LidarPointCloud.generated.h already included, missing '#pragma once' in AssetDefinition_LidarPointCloud.h"
#endif
#define LIDARPOINTCLOUDEDITOR_AssetDefinition_LidarPointCloud_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_LidarPointCloud *****************************************
struct Z_Construct_UClass_UAssetDefinition_LidarPointCloud_Statics;
LIDARPOINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_LidarPointCloud_NoRegister();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_AssetDefinition_LidarPointCloud_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_LidarPointCloud(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_LidarPointCloud_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIDARPOINTCLOUDEDITOR_API UClass* ::Z_Construct_UClass_UAssetDefinition_LidarPointCloud_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_LidarPointCloud, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), Z_Construct_UClass_UAssetDefinition_LidarPointCloud_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_LidarPointCloud)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_AssetDefinition_LidarPointCloud_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_LidarPointCloud(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_LidarPointCloud(UAssetDefinition_LidarPointCloud&&) = delete; \
	UAssetDefinition_LidarPointCloud(const UAssetDefinition_LidarPointCloud&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_LidarPointCloud); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_LidarPointCloud); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_LidarPointCloud) \
	NO_API virtual ~UAssetDefinition_LidarPointCloud();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_AssetDefinition_LidarPointCloud_h_8_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_AssetDefinition_LidarPointCloud_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_AssetDefinition_LidarPointCloud_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_AssetDefinition_LidarPointCloud_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_LidarPointCloud;

// ********** End Class UAssetDefinition_LidarPointCloud *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_AssetDefinition_LidarPointCloud_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
