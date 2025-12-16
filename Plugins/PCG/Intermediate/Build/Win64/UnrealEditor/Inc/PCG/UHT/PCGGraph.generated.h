// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGGraph.h"

#ifdef PCG_PCGGraph_generated_h
#error "PCGGraph.generated.h already included, missing '#pragma once' in PCGGraph.h"
#endif
#define PCG_PCGGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UPCGGraph;
class UPCGNode;
class UPCGSettings;
enum class EPCGChangeType : uint32;
struct FAssetData;
struct FEdGraphPinType;
struct FGuid;

// ********** Begin ScriptStruct FPCGOverrideInstancedPropertyBag **********************************
struct Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGOverrideInstancedPropertyBag;
// ********** End ScriptStruct FPCGOverrideInstancedPropertyBag ************************************

// ********** Begin Class UPCGGraphInterface *******************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetConstPCGGraph); \
	DECLARE_FUNCTION(execGetMutablePCGGraph);


#if WITH_EDITOR
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_109_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execIsTemplatePropertyEnabled); \
	DECLARE_FUNCTION(execAreOverridesEnabled); \
	DECLARE_FUNCTION(execIsExportToLibraryEnabled); \
	DECLARE_FUNCTION(execIsStandaloneGraph);
#else // WITH_EDITOR
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_109_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UPCGGraphInterface_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGGraphInterface_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_109_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGraphInterface(); \
	friend struct ::Z_Construct_UClass_UPCGGraphInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGGraphInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGGraphInterface, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGGraphInterface_NoRegister) \
	DECLARE_SERIALIZER(UPCGGraphInterface)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_109_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGGraphInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGGraphInterface(UPCGGraphInterface&&) = delete; \
	UPCGGraphInterface(const UPCGGraphInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGGraphInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGraphInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGraphInterface) \
	PCG_API virtual ~UPCGGraphInterface();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_106_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_109_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_109_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_109_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGGraphInterface;

// ********** End Class UPCGGraphInterface *********************************************************

// ********** Begin Class UPCGGraph ****************************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_275_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOutputNode); \
	DECLARE_FUNCTION(execGetInputNode); \
	DECLARE_FUNCTION(execRemoveEdge); \
	DECLARE_FUNCTION(execAddEdge); \
	DECLARE_FUNCTION(execRemoveNodes); \
	DECLARE_FUNCTION(execRemoveNode); \
	DECLARE_FUNCTION(execAddNodeCopy); \
	DECLARE_FUNCTION(execAddNodeInstance); \
	DECLARE_FUNCTION(execAddNodeOfType);


#if WITH_EDITOR
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_275_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execUserParametersCanRemoveProperty); \
	DECLARE_FUNCTION(execUserParametersIsPinTypeAccepted); \
	DECLARE_FUNCTION(execShowGraphCustomization); \
	DECLARE_FUNCTION(execSupportHierarchicalGeneration); \
	DECLARE_FUNCTION(execCanToggleStandaloneGraph); \
	DECLARE_FUNCTION(execForceNotificationForEditor);
#else // WITH_EDITOR
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_275_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UPCGGraph_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGGraph_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_275_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGraph(); \
	friend struct ::Z_Construct_UClass_UPCGGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGGraph, UPCGGraphInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGGraph_NoRegister) \
	DECLARE_SERIALIZER(UPCGGraph)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_275_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGGraph(UPCGGraph&&) = delete; \
	UPCGGraph(const UPCGGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGraph) \
	PCG_API virtual ~UPCGGraph();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_265_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_275_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_275_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_275_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_275_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_275_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGGraph;

// ********** End Class UPCGGraph ******************************************************************

// ********** Begin Class UPCGGraphInstance ********************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_676_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGraphAssetFilter);


#if WITH_EDITOR
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_676_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execShowToolDataOverrides);
#else // WITH_EDITOR
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_676_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UPCGGraphInstance_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGGraphInstance_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_676_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGraphInstance(); \
	friend struct ::Z_Construct_UClass_UPCGGraphInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGGraphInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGGraphInstance, UPCGGraphInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGGraphInstance_NoRegister) \
	DECLARE_SERIALIZER(UPCGGraphInstance)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_676_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGGraphInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGGraphInstance(UPCGGraphInstance&&) = delete; \
	UPCGGraphInstance(const UPCGGraphInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGGraphInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGraphInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGraphInstance) \
	PCG_API virtual ~UPCGGraphInstance();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_673_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_676_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_676_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_676_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_676_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h_676_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGGraphInstance;

// ********** End Class UPCGGraphInstance **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_PCGGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
