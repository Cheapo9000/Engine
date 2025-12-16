// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IO/LidarPointCloudFileIO_ASCII.h"

#ifdef LIDARPOINTCLOUDRUNTIME_LidarPointCloudFileIO_ASCII_generated_h
#error "LidarPointCloudFileIO_ASCII.generated.h already included, missing '#pragma once' in LidarPointCloudFileIO_ASCII.h"
#endif
#define LIDARPOINTCLOUDRUNTIME_LidarPointCloudFileIO_ASCII_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULidarPointCloud;
class UObject;
enum class ELidarPointCloudAsyncMode : uint8;
struct FLatentActionInfo;
struct FLidarPointCloudImportSettings_ASCII_Columns;

// ********** Begin ScriptStruct FLidarPointCloudImportSettings_ASCII_Columns **********************
struct Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics;
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics; \
	LIDARPOINTCLOUDRUNTIME_API static class UScriptStruct* StaticStruct();


struct FLidarPointCloudImportSettings_ASCII_Columns;
// ********** End ScriptStruct FLidarPointCloudImportSettings_ASCII_Columns ************************

// ********** Begin Class ULidarPointCloudFileIO_ASCII *********************************************
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_168_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreatePointCloudFromFile);


struct Z_Construct_UClass_ULidarPointCloudFileIO_ASCII_Statics;
LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ULidarPointCloudFileIO_ASCII_NoRegister();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_168_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarPointCloudFileIO_ASCII(); \
	friend struct ::Z_Construct_UClass_ULidarPointCloudFileIO_ASCII_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIDARPOINTCLOUDRUNTIME_API UClass* ::Z_Construct_UClass_ULidarPointCloudFileIO_ASCII_NoRegister(); \
public: \
	DECLARE_CLASS2(ULidarPointCloudFileIO_ASCII, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LidarPointCloudRuntime"), Z_Construct_UClass_ULidarPointCloudFileIO_ASCII_NoRegister) \
	DECLARE_SERIALIZER(ULidarPointCloudFileIO_ASCII)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_168_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULidarPointCloudFileIO_ASCII(ULidarPointCloudFileIO_ASCII&&) = delete; \
	ULidarPointCloudFileIO_ASCII(const ULidarPointCloudFileIO_ASCII&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarPointCloudFileIO_ASCII); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarPointCloudFileIO_ASCII); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULidarPointCloudFileIO_ASCII) \
	NO_API virtual ~ULidarPointCloudFileIO_ASCII();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_165_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_168_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_168_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_168_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_168_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULidarPointCloudFileIO_ASCII;

// ********** End Class ULidarPointCloudFileIO_ASCII ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
