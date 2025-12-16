// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DisplayClusterRootActor.h"

#ifdef DISPLAYCLUSTER_DisplayClusterRootActor_generated_h
#error "DisplayClusterRootActor.generated.h already included, missing '#pragma once' in DisplayClusterRootActor.h"
#endif
#define DISPLAYCLUSTER_DisplayClusterRootActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IDisplayClusterStageActor;
class UDisplayClusterCameraComponent;
class UDisplayClusterDisplayDeviceBaseComponent;
class UDisplayClusterStageGeometryComponent;
class UProceduralMeshComponent;
class USceneComponent;

// ********** Begin Class ADisplayClusterRootActor *************************************************
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPreviewEnableHoldoutComposite); \
	DECLARE_FUNCTION(execSetPreviewEnablePostProcess); \
	DECLARE_FUNCTION(execUpdateProceduralMeshComponentData); \
	DECLARE_FUNCTION(execSetFreezeOuterViewports); \
	DECLARE_FUNCTION(execSetReplaceTextureFlagForAllViewports); \
	DECLARE_FUNCTION(execGetCommonViewPoint); \
	DECLARE_FUNCTION(execGetDefaultDisplayDevice); \
	DECLARE_FUNCTION(execGetDefaultCamera); \
	DECLARE_FUNCTION(execGetStageGeometryComponent); \
	DECLARE_FUNCTION(execGetDistanceToStageGeometry); \
	DECLARE_FUNCTION(execMakeStageActorFlushToWall); \
	DECLARE_FUNCTION(execGetFlushPositionAndNormal);


struct Z_Construct_UClass_ADisplayClusterRootActor_Statics;
DISPLAYCLUSTER_API UClass* Z_Construct_UClass_ADisplayClusterRootActor_NoRegister();

#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADisplayClusterRootActor(); \
	friend struct ::Z_Construct_UClass_ADisplayClusterRootActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISPLAYCLUSTER_API UClass* ::Z_Construct_UClass_ADisplayClusterRootActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ADisplayClusterRootActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DisplayCluster"), Z_Construct_UClass_ADisplayClusterRootActor_NoRegister) \
	DECLARE_SERIALIZER(ADisplayClusterRootActor)


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_57_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADisplayClusterRootActor(ADisplayClusterRootActor&&) = delete; \
	ADisplayClusterRootActor(const ADisplayClusterRootActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADisplayClusterRootActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADisplayClusterRootActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADisplayClusterRootActor)


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_51_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_57_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADisplayClusterRootActor;

// ********** End Class ADisplayClusterRootActor ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
