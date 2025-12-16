// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/IDisplayClusterBlueprintAPI.h"

#ifdef DISPLAYCLUSTER_IDisplayClusterBlueprintAPI_generated_h
#error "IDisplayClusterBlueprintAPI.generated.h already included, missing '#pragma once' in IDisplayClusterBlueprintAPI.h"
#endif
#define DISPLAYCLUSTER_IDisplayClusterBlueprintAPI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADisplayClusterRootActor;
class IDisplayClusterClusterEventListener;
enum class EDisplayClusterNodeRole : uint8;
enum class EDisplayClusterOperationMode : uint8;
struct FDisplayClusterClusterEventBinary;
struct FDisplayClusterClusterEventJson;

// ********** Begin Interface UDisplayClusterBlueprintAPI ******************************************
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSendClusterEventBinaryTo); \
	DECLARE_FUNCTION(execSendClusterEventJsonTo); \
	DECLARE_FUNCTION(execEmitClusterEventBinary); \
	DECLARE_FUNCTION(execEmitClusterEventJson); \
	DECLARE_FUNCTION(execRemoveClusterEventListener); \
	DECLARE_FUNCTION(execAddClusterEventListener); \
	DECLARE_FUNCTION(execGetClusterRole); \
	DECLARE_FUNCTION(execIsBackup); \
	DECLARE_FUNCTION(execIsSecondary); \
	DECLARE_FUNCTION(execIsPrimary); \
	DECLARE_FUNCTION(execGetActiveNodesAmount); \
	DECLARE_FUNCTION(execGetActiveNodeIds); \
	DECLARE_FUNCTION(execGetNodeId); \
	DECLARE_FUNCTION(execGetRootActor); \
	DECLARE_FUNCTION(execGetOperationMode); \
	DECLARE_FUNCTION(execIsModuleInitialized);


struct Z_Construct_UClass_UDisplayClusterBlueprintAPI_Statics;
DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterBlueprintAPI_NoRegister();

#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDisplayClusterBlueprintAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDisplayClusterBlueprintAPI(UDisplayClusterBlueprintAPI&&) = delete; \
	UDisplayClusterBlueprintAPI(const UDisplayClusterBlueprintAPI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayClusterBlueprintAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayClusterBlueprintAPI); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayClusterBlueprintAPI) \
	virtual ~UDisplayClusterBlueprintAPI() = default;


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDisplayClusterBlueprintAPI(); \
	friend struct ::Z_Construct_UClass_UDisplayClusterBlueprintAPI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISPLAYCLUSTER_API UClass* ::Z_Construct_UClass_UDisplayClusterBlueprintAPI_NoRegister(); \
public: \
	DECLARE_CLASS2(UDisplayClusterBlueprintAPI, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DisplayCluster"), Z_Construct_UClass_UDisplayClusterBlueprintAPI_NoRegister) \
	DECLARE_SERIALIZER(UDisplayClusterBlueprintAPI)


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDisplayClusterBlueprintAPI() {} \
public: \
	typedef UDisplayClusterBlueprintAPI UClassType; \
	typedef IDisplayClusterBlueprintAPI ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_29_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDisplayClusterBlueprintAPI;

// ********** End Interface UDisplayClusterBlueprintAPI ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
