// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DisplayClusterViewportClient.h"

#ifdef DISPLAYCLUSTER_DisplayClusterViewportClient_generated_h
#error "DisplayClusterViewportClient.generated.h already included, missing '#pragma once' in DisplayClusterViewportClient.h"
#endif
#define DISPLAYCLUSTER_DisplayClusterViewportClient_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDisplayClusterViewportClient ********************************************
struct Z_Construct_UClass_UDisplayClusterViewportClient_Statics;
DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterViewportClient_NoRegister();

#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterViewportClient_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDisplayClusterViewportClient(); \
	friend struct ::Z_Construct_UClass_UDisplayClusterViewportClient_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISPLAYCLUSTER_API UClass* ::Z_Construct_UClass_UDisplayClusterViewportClient_NoRegister(); \
public: \
	DECLARE_CLASS2(UDisplayClusterViewportClient, UGameViewportClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DisplayCluster"), Z_Construct_UClass_UDisplayClusterViewportClient_NoRegister) \
	DECLARE_SERIALIZER(UDisplayClusterViewportClient)


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterViewportClient_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDisplayClusterViewportClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDisplayClusterViewportClient(UDisplayClusterViewportClient&&) = delete; \
	UDisplayClusterViewportClient(const UDisplayClusterViewportClient&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayClusterViewportClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayClusterViewportClient)


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterViewportClient_h_9_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterViewportClient_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterViewportClient_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterViewportClient_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDisplayClusterViewportClient;

// ********** End Class UDisplayClusterViewportClient **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterViewportClient_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
