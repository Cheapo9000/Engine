// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactoryLidarPointCloud.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIDARPOINTCLOUDEDITOR_ActorFactoryLidarPointCloud_generated_h
#error "ActorFactoryLidarPointCloud.generated.h already included, missing '#pragma once' in ActorFactoryLidarPointCloud.h"
#endif
#define LIDARPOINTCLOUDEDITOR_ActorFactoryLidarPointCloud_generated_h

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_ActorFactoryLidarPointCloud_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryLidarPointCloud(); \
	friend struct Z_Construct_UClass_UActorFactoryLidarPointCloud_Statics; \
public: \
	DECLARE_CLASS(UActorFactoryLidarPointCloud, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), LIDARPOINTCLOUDEDITOR_API) \
	DECLARE_SERIALIZER(UActorFactoryLidarPointCloud)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_ActorFactoryLidarPointCloud_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIDARPOINTCLOUDEDITOR_API UActorFactoryLidarPointCloud(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryLidarPointCloud) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIDARPOINTCLOUDEDITOR_API, UActorFactoryLidarPointCloud); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryLidarPointCloud); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorFactoryLidarPointCloud(UActorFactoryLidarPointCloud&&); \
	UActorFactoryLidarPointCloud(const UActorFactoryLidarPointCloud&); \
public: \
	LIDARPOINTCLOUDEDITOR_API virtual ~UActorFactoryLidarPointCloud();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_ActorFactoryLidarPointCloud_h_13_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_ActorFactoryLidarPointCloud_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_ActorFactoryLidarPointCloud_h_16_INCLASS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_ActorFactoryLidarPointCloud_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class UActorFactoryLidarPointCloud>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_ActorFactoryLidarPointCloud_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
