// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cluster/IDisplayClusterClusterEventListener.h"

#ifdef DISPLAYCLUSTER_IDisplayClusterClusterEventListener_generated_h
#error "IDisplayClusterClusterEventListener.generated.h already included, missing '#pragma once' in IDisplayClusterClusterEventListener.h"
#endif
#define DISPLAYCLUSTER_IDisplayClusterClusterEventListener_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDisplayClusterClusterEventBinary;
struct FDisplayClusterClusterEventJson;

// ********** Begin Interface UDisplayClusterClusterEventListener **********************************
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Cluster_IDisplayClusterClusterEventListener_h_16_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UDisplayClusterClusterEventListener_Statics;
DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterClusterEventListener_NoRegister();

#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Cluster_IDisplayClusterClusterEventListener_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDisplayClusterClusterEventListener(UDisplayClusterClusterEventListener&&) = delete; \
	UDisplayClusterClusterEventListener(const UDisplayClusterClusterEventListener&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayClusterClusterEventListener); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayClusterClusterEventListener); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayClusterClusterEventListener) \
	virtual ~UDisplayClusterClusterEventListener() = default;


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Cluster_IDisplayClusterClusterEventListener_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDisplayClusterClusterEventListener(); \
	friend struct ::Z_Construct_UClass_UDisplayClusterClusterEventListener_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISPLAYCLUSTER_API UClass* ::Z_Construct_UClass_UDisplayClusterClusterEventListener_NoRegister(); \
public: \
	DECLARE_CLASS2(UDisplayClusterClusterEventListener, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DisplayCluster"), Z_Construct_UClass_UDisplayClusterClusterEventListener_NoRegister) \
	DECLARE_SERIALIZER(UDisplayClusterClusterEventListener)


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Cluster_IDisplayClusterClusterEventListener_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Cluster_IDisplayClusterClusterEventListener_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Cluster_IDisplayClusterClusterEventListener_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Cluster_IDisplayClusterClusterEventListener_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDisplayClusterClusterEventListener() {} \
public: \
	typedef UDisplayClusterClusterEventListener UClassType; \
	typedef IDisplayClusterClusterEventListener ThisClass; \
	static void Execute_OnClusterEventBinary(UObject* O, FDisplayClusterClusterEventBinary const& Event); \
	static void Execute_OnClusterEventJson(UObject* O, FDisplayClusterClusterEventJson const& Event); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Cluster_IDisplayClusterClusterEventListener_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Cluster_IDisplayClusterClusterEventListener_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Cluster_IDisplayClusterClusterEventListener_h_16_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Cluster_IDisplayClusterClusterEventListener_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDisplayClusterClusterEventListener;

// ********** End Interface UDisplayClusterClusterEventListener ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Cluster_IDisplayClusterClusterEventListener_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
