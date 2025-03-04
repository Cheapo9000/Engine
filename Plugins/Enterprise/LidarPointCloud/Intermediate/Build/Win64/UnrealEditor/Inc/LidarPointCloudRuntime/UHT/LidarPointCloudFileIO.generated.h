// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IO/LidarPointCloudFileIO.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIDARPOINTCLOUDRUNTIME_LidarPointCloudFileIO_generated_h
#error "LidarPointCloudFileIO.generated.h already included, missing '#pragma once' in LidarPointCloudFileIO.h"
#endif
#define LIDARPOINTCLOUDRUNTIME_LidarPointCloudFileIO_generated_h

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_h_187_INCLASS \
private: \
	static void StaticRegisterNativesULidarPointCloudFileIO(); \
	friend struct Z_Construct_UClass_ULidarPointCloudFileIO_Statics; \
public: \
	DECLARE_CLASS(ULidarPointCloudFileIO, UExporter, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(ULidarPointCloudFileIO)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_h_187_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarPointCloudFileIO(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarPointCloudFileIO) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarPointCloudFileIO); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarPointCloudFileIO); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarPointCloudFileIO(ULidarPointCloudFileIO&&); \
	ULidarPointCloudFileIO(const ULidarPointCloudFileIO&); \
public: \
	NO_API virtual ~ULidarPointCloudFileIO();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_h_184_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_h_187_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_h_187_INCLASS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_h_187_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDRUNTIME_API UClass* StaticClass<class ULidarPointCloudFileIO>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
