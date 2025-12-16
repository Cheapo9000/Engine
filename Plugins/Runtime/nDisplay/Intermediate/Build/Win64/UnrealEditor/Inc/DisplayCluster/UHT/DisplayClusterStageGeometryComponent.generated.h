// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DisplayClusterStageGeometryComponent.h"

#ifdef DISPLAYCLUSTER_DisplayClusterStageGeometryComponent_generated_h
#error "DisplayClusterStageGeometryComponent.generated.h already included, missing '#pragma once' in DisplayClusterStageGeometryComponent.h"
#endif
#define DISPLAYCLUSTER_DisplayClusterStageGeometryComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDisplayClusterStageGeometryMap ***********************************
struct Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap_Statics;
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterStageGeometryComponent_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap_Statics; \
	DISPLAYCLUSTER_API static class UScriptStruct* StaticStruct();


struct FDisplayClusterStageGeometryMap;
// ********** End ScriptStruct FDisplayClusterStageGeometryMap *************************************

// ********** Begin Class UDisplayClusterStageGeometryComponent ************************************
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterStageGeometryComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStageBoundingRadius); \
	DECLARE_FUNCTION(execGetStageDistanceAndNormal); \
	DECLARE_FUNCTION(execInvalidate); \
	DECLARE_FUNCTION(execIsGeometryMapValid);


struct Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics;
DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterStageGeometryComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterStageGeometryComponent_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDisplayClusterStageGeometryComponent(); \
	friend struct ::Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISPLAYCLUSTER_API UClass* ::Z_Construct_UClass_UDisplayClusterStageGeometryComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDisplayClusterStageGeometryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DisplayCluster"), Z_Construct_UClass_UDisplayClusterStageGeometryComponent_NoRegister) \
	DECLARE_SERIALIZER(UDisplayClusterStageGeometryComponent)


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterStageGeometryComponent_h_37_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDisplayClusterStageGeometryComponent(UDisplayClusterStageGeometryComponent&&) = delete; \
	UDisplayClusterStageGeometryComponent(const UDisplayClusterStageGeometryComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayClusterStageGeometryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayClusterStageGeometryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDisplayClusterStageGeometryComponent) \
	NO_API virtual ~UDisplayClusterStageGeometryComponent();


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterStageGeometryComponent_h_34_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterStageGeometryComponent_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterStageGeometryComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterStageGeometryComponent_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterStageGeometryComponent_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDisplayClusterStageGeometryComponent;

// ********** End Class UDisplayClusterStageGeometryComponent **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterStageGeometryComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
