// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IO/LidarPointCloudFileIO.h"

#ifdef LIDARPOINTCLOUDRUNTIME_LidarPointCloudFileIO_generated_h
#error "LidarPointCloudFileIO.generated.h already included, missing '#pragma once' in LidarPointCloudFileIO.h"
#endif
#define LIDARPOINTCLOUDRUNTIME_LidarPointCloudFileIO_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULidarPointCloudFileIO ***************************************************
struct Z_Construct_UClass_ULidarPointCloudFileIO_Statics;
LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ULidarPointCloudFileIO_NoRegister();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_h_187_INCLASS \
private: \
	static void StaticRegisterNativesULidarPointCloudFileIO(); \
	friend struct ::Z_Construct_UClass_ULidarPointCloudFileIO_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIDARPOINTCLOUDRUNTIME_API UClass* ::Z_Construct_UClass_ULidarPointCloudFileIO_NoRegister(); \
public: \
	DECLARE_CLASS2(ULidarPointCloudFileIO, UExporter, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudRuntime"), Z_Construct_UClass_ULidarPointCloudFileIO_NoRegister) \
	DECLARE_SERIALIZER(ULidarPointCloudFileIO)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_h_187_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarPointCloudFileIO(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarPointCloudFileIO) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarPointCloudFileIO); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarPointCloudFileIO); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULidarPointCloudFileIO(ULidarPointCloudFileIO&&) = delete; \
	ULidarPointCloudFileIO(const ULidarPointCloudFileIO&) = delete; \
	NO_API virtual ~ULidarPointCloudFileIO();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_h_184_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_h_187_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_h_187_INCLASS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_h_187_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULidarPointCloudFileIO;

// ********** End Class ULidarPointCloudFileIO *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
