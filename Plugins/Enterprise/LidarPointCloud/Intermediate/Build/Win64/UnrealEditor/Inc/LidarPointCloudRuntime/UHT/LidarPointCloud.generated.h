// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LidarPointCloud.h"

#ifdef LIDARPOINTCLOUDRUNTIME_LidarPointCloud_generated_h
#error "LidarPointCloud.generated.h already included, missing '#pragma once' in LidarPointCloud.h"
#endif
#define LIDARPOINTCLOUDRUNTIME_LidarPointCloud_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULidarPointCloud;
class UObject;
enum class ELidarPointCloudAsyncMode : uint8;
enum class ELidarPointCloudDuplicateHandling : uint8;
struct FColor;
struct FLatentActionInfo;
struct FLidarPointCloudNormal;
struct FLidarPointCloudPoint;
struct FLidarPointCloudTraceHit;

// ********** Begin Class ULidarPointCloud *********************************************************
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCalculateNormals); \
	DECLARE_FUNCTION(execMergeSingle); \
	DECLARE_FUNCTION(execMerge); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execRemoveHiddenPoints); \
	DECLARE_FUNCTION(execRemovePointsByRay); \
	DECLARE_FUNCTION(execRemoveFirstPointByRay); \
	DECLARE_FUNCTION(execRemovePointsInBox); \
	DECLARE_FUNCTION(execRemovePointsInSphere); \
	DECLARE_FUNCTION(execRemovePoint); \
	DECLARE_FUNCTION(execInsertPoints); \
	DECLARE_FUNCTION(execInsertPoint); \
	DECLARE_FUNCTION(execExport); \
	DECLARE_FUNCTION(execReimport); \
	DECLARE_FUNCTION(execIsCentered); \
	DECLARE_FUNCTION(execRestoreOriginalCoordinates); \
	DECLARE_FUNCTION(execCenterPoints); \
	DECLARE_FUNCTION(execSetLocationOffset); \
	DECLARE_FUNCTION(execLoadAllNodes); \
	DECLARE_FUNCTION(execIsFullyLoaded); \
	DECLARE_FUNCTION(execRemoveCollision); \
	DECLARE_FUNCTION(execBuildCollisionWithCallback); \
	DECLARE_FUNCTION(execBuildCollision); \
	DECLARE_FUNCTION(execSetOptimalCollisionError); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execSetOptimizedForDynamicData); \
	DECLARE_FUNCTION(execSetSourcePath); \
	DECLARE_FUNCTION(execMarkPointVisibilityDirty); \
	DECLARE_FUNCTION(execApplyColorToPointsByRay); \
	DECLARE_FUNCTION(execApplyColorToFirstPointByRay); \
	DECLARE_FUNCTION(execApplyColorToPointsInBox); \
	DECLARE_FUNCTION(execApplyColorToPointsInSphere); \
	DECLARE_FUNCTION(execApplyColorToAllPoints); \
	DECLARE_FUNCTION(execUnhideAll); \
	DECLARE_FUNCTION(execHideAll); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsByRay); \
	DECLARE_FUNCTION(execSetVisibilityOfFirstPointByRay); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsInBox); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsInSphere); \
	DECLARE_FUNCTION(execLineTraceMulti); \
	DECLARE_FUNCTION(execLineTraceSingle); \
	DECLARE_FUNCTION(execGetPointsInBoxAsCopies); \
	DECLARE_FUNCTION(execGetPointsInSphereAsCopies); \
	DECLARE_FUNCTION(execGetPointsAsCopies); \
	DECLARE_FUNCTION(execHasPointsByRay); \
	DECLARE_FUNCTION(execHasPointsInBox); \
	DECLARE_FUNCTION(execHasPointsInSphere); \
	DECLARE_FUNCTION(execRefreshRendering); \
	DECLARE_FUNCTION(execGetColliderPolys); \
	DECLARE_FUNCTION(execHasCollisionData); \
	DECLARE_FUNCTION(execRefreshBounds); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execIsOptimizedForDynamicData); \
	DECLARE_FUNCTION(execGetSourcePath); \
	DECLARE_FUNCTION(execGetDataSize); \
	DECLARE_FUNCTION(execGetEstimatedPointSpacing); \
	DECLARE_FUNCTION(execGetNumNodes); \
	DECLARE_FUNCTION(execGetNumVisiblePoints); \
	DECLARE_FUNCTION(execGetNumPoints); \
	DECLARE_FUNCTION(execGetNumLODs);


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_67_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULidarPointCloud, NO_API)


struct Z_Construct_UClass_ULidarPointCloud_Statics;
LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ULidarPointCloud_NoRegister();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarPointCloud(); \
	friend struct ::Z_Construct_UClass_ULidarPointCloud_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIDARPOINTCLOUDRUNTIME_API UClass* ::Z_Construct_UClass_ULidarPointCloud_NoRegister(); \
public: \
	DECLARE_CLASS2(ULidarPointCloud, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LidarPointCloudRuntime"), Z_Construct_UClass_ULidarPointCloud_NoRegister) \
	DECLARE_SERIALIZER(ULidarPointCloud) \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_67_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<ULidarPointCloud*>(this); }


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_67_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULidarPointCloud(ULidarPointCloud&&) = delete; \
	ULidarPointCloud(const ULidarPointCloud&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarPointCloud); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarPointCloud); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULidarPointCloud) \
	NO_API virtual ~ULidarPointCloud();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_64_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULidarPointCloud;

// ********** End Class ULidarPointCloud ***********************************************************

// ********** Begin ScriptStruct FLidarPointCloudTraceHit ******************************************
struct Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics;
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_718_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics; \
	LIDARPOINTCLOUDRUNTIME_API static class UScriptStruct* StaticStruct();


struct FLidarPointCloudTraceHit;
// ********** End ScriptStruct FLidarPointCloudTraceHit ********************************************

// ********** Begin Class ULidarPointCloudBlueprintLibrary *****************************************
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_745_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConv_VectorToLidarPointCloudNormal); \
	DECLARE_FUNCTION(execConv_LidarPointCloudNormalToVector); \
	DECLARE_FUNCTION(execNormalFromVector); \
	DECLARE_FUNCTION(execRemovePointsByRay); \
	DECLARE_FUNCTION(execRemoveFirstPointByRay); \
	DECLARE_FUNCTION(execRemovePointsInBox); \
	DECLARE_FUNCTION(execRemovePointsInSphere); \
	DECLARE_FUNCTION(execApplyColorToPointsByRay); \
	DECLARE_FUNCTION(execApplyColorToFirstPointByRay); \
	DECLARE_FUNCTION(execApplyColorToPointsInBox); \
	DECLARE_FUNCTION(execApplyColorToPointsInSphere); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsByRay); \
	DECLARE_FUNCTION(execSetVisibilityOfFirstPointByRay); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsInBox); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsInSphere); \
	DECLARE_FUNCTION(execLineTraceMulti); \
	DECLARE_FUNCTION(execLineTraceSingle); \
	DECLARE_FUNCTION(execGetPointsInBoxAsCopies); \
	DECLARE_FUNCTION(execGetPointsInSphereAsCopies); \
	DECLARE_FUNCTION(execArePointsByRay); \
	DECLARE_FUNCTION(execArePointsInBox); \
	DECLARE_FUNCTION(execArePointsInSphere); \
	DECLARE_FUNCTION(execAlignClouds); \
	DECLARE_FUNCTION(execExportPointCloudToFile); \
	DECLARE_FUNCTION(execCreatePointCloudFromData); \
	DECLARE_FUNCTION(execCreatePointCloudFromFile); \
	DECLARE_FUNCTION(execCreatePointCloudEmpty);


struct Z_Construct_UClass_ULidarPointCloudBlueprintLibrary_Statics;
LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ULidarPointCloudBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_745_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarPointCloudBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_ULidarPointCloudBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIDARPOINTCLOUDRUNTIME_API UClass* ::Z_Construct_UClass_ULidarPointCloudBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(ULidarPointCloudBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LidarPointCloudRuntime"), Z_Construct_UClass_ULidarPointCloudBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(ULidarPointCloudBlueprintLibrary)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_745_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarPointCloudBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULidarPointCloudBlueprintLibrary(ULidarPointCloudBlueprintLibrary&&) = delete; \
	ULidarPointCloudBlueprintLibrary(const ULidarPointCloudBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarPointCloudBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarPointCloudBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarPointCloudBlueprintLibrary) \
	NO_API virtual ~ULidarPointCloudBlueprintLibrary();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_742_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_745_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_745_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_745_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_745_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULidarPointCloudBlueprintLibrary;

// ********** End Class ULidarPointCloudBlueprintLibrary *******************************************

// ********** Begin Class ALidarClippingVolume *****************************************************
struct Z_Construct_UClass_ALidarClippingVolume_Statics;
LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ALidarClippingVolume_NoRegister();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_871_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALidarClippingVolume(); \
	friend struct ::Z_Construct_UClass_ALidarClippingVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIDARPOINTCLOUDRUNTIME_API UClass* ::Z_Construct_UClass_ALidarClippingVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(ALidarClippingVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LidarPointCloudRuntime"), Z_Construct_UClass_ALidarClippingVolume_NoRegister) \
	DECLARE_SERIALIZER(ALidarClippingVolume)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_871_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALidarClippingVolume(ALidarClippingVolume&&) = delete; \
	ALidarClippingVolume(const ALidarClippingVolume&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIDARPOINTCLOUDRUNTIME_API, ALidarClippingVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALidarClippingVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALidarClippingVolume) \
	LIDARPOINTCLOUDRUNTIME_API virtual ~ALidarClippingVolume();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_868_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_871_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_871_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_871_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALidarClippingVolume;

// ********** End Class ALidarClippingVolume *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
