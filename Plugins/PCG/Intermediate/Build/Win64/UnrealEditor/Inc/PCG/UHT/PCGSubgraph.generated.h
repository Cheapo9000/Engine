// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGSubgraph.h"

#ifdef PCG_PCGSubgraph_generated_h
#error "PCGSubgraph.generated.h already included, missing '#pragma once' in PCGSubgraph.h"
#endif
#define PCG_PCGSubgraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAssetData;

// ********** Begin Class UPCGBaseSubgraphSettings *************************************************
struct Z_Construct_UClass_UPCGBaseSubgraphSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGBaseSubgraphSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGBaseSubgraphSettings(); \
	friend struct ::Z_Construct_UClass_UPCGBaseSubgraphSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGBaseSubgraphSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGBaseSubgraphSettings, UPCGSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGBaseSubgraphSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGBaseSubgraphSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGBaseSubgraphSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGBaseSubgraphSettings(UPCGBaseSubgraphSettings&&) = delete; \
	UPCGBaseSubgraphSettings(const UPCGBaseSubgraphSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGBaseSubgraphSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGBaseSubgraphSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGBaseSubgraphSettings) \
	PCG_API virtual ~UPCGBaseSubgraphSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_20_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGBaseSubgraphSettings;

// ********** End Class UPCGBaseSubgraphSettings ***************************************************

// ********** Begin Class UPCGSubgraphSettings *****************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSubgraphAssetFilter);


struct Z_Construct_UClass_UPCGSubgraphSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSubgraphSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSubgraphSettings(); \
	friend struct ::Z_Construct_UClass_UPCGSubgraphSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSubgraphSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSubgraphSettings, UPCGBaseSubgraphSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSubgraphSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGSubgraphSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_93_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSubgraphSettings(UPCGSubgraphSettings&&) = delete; \
	UPCGSubgraphSettings(const UPCGSubgraphSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSubgraphSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSubgraphSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSubgraphSettings) \
	PCG_API virtual ~UPCGSubgraphSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_90_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_93_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSubgraphSettings;

// ********** End Class UPCGSubgraphSettings *******************************************************

// ********** Begin Class UPCGBaseSubgraphNode *****************************************************
struct Z_Construct_UClass_UPCGBaseSubgraphNode_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGBaseSubgraphNode_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_160_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGBaseSubgraphNode(); \
	friend struct ::Z_Construct_UClass_UPCGBaseSubgraphNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGBaseSubgraphNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGBaseSubgraphNode, UPCGNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGBaseSubgraphNode_NoRegister) \
	DECLARE_SERIALIZER(UPCGBaseSubgraphNode)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_160_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGBaseSubgraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGBaseSubgraphNode(UPCGBaseSubgraphNode&&) = delete; \
	UPCGBaseSubgraphNode(const UPCGBaseSubgraphNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGBaseSubgraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGBaseSubgraphNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGBaseSubgraphNode) \
	PCG_API virtual ~UPCGBaseSubgraphNode();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_157_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_160_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_160_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_160_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGBaseSubgraphNode;

// ********** End Class UPCGBaseSubgraphNode *******************************************************

// ********** Begin Class UPCGSubgraphNode *********************************************************
struct Z_Construct_UClass_UPCGSubgraphNode_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSubgraphNode_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_170_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSubgraphNode(); \
	friend struct ::Z_Construct_UClass_UPCGSubgraphNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSubgraphNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSubgraphNode, UPCGBaseSubgraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSubgraphNode_NoRegister) \
	DECLARE_SERIALIZER(UPCGSubgraphNode)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_170_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGSubgraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSubgraphNode(UPCGSubgraphNode&&) = delete; \
	UPCGSubgraphNode(const UPCGSubgraphNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSubgraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSubgraphNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSubgraphNode) \
	PCG_API virtual ~UPCGSubgraphNode();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_167_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_170_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_170_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h_170_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSubgraphNode;

// ********** End Class UPCGSubgraphNode ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
