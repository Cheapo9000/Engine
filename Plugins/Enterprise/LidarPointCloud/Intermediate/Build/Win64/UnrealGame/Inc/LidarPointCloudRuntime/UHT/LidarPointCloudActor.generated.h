// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LidarPointCloudActor.h"

#ifdef LIDARPOINTCLOUDRUNTIME_LidarPointCloudActor_generated_h
#error "LidarPointCloudActor.generated.h already included, missing '#pragma once' in LidarPointCloudActor.h"
#endif
#define LIDARPOINTCLOUDRUNTIME_LidarPointCloudActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULidarPointCloud;

// ********** Begin Class ALidarPointCloudActor ****************************************************
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_14_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetPointCloud); \
	DECLARE_FUNCTION(execGetPointCloud);


struct Z_Construct_UClass_ALidarPointCloudActor_Statics;
LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ALidarPointCloudActor_NoRegister();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesALidarPointCloudActor(); \
	friend struct ::Z_Construct_UClass_ALidarPointCloudActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIDARPOINTCLOUDRUNTIME_API UClass* ::Z_Construct_UClass_ALidarPointCloudActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ALidarPointCloudActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LidarPointCloudRuntime"), Z_Construct_UClass_ALidarPointCloudActor_NoRegister) \
	DECLARE_SERIALIZER(ALidarPointCloudActor)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALidarPointCloudActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALidarPointCloudActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALidarPointCloudActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALidarPointCloudActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALidarPointCloudActor(ALidarPointCloudActor&&) = delete; \
	ALidarPointCloudActor(const ALidarPointCloudActor&) = delete; \
	NO_API virtual ~ALidarPointCloudActor();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_11_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_14_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_14_INCLASS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALidarPointCloudActor;

// ********** End Class ALidarPointCloudActor ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
