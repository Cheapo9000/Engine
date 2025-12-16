// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TransferMeshTool.h"

#ifdef MESHMODELINGTOOLSEXP_TransferMeshTool_generated_h
#error "TransferMeshTool.generated.h already included, missing '#pragma once' in TransferMeshTool.h"
#endif
#define MESHMODELINGTOOLSEXP_TransferMeshTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTransferMeshToolBuilder *************************************************
struct Z_Construct_UClass_UTransferMeshToolBuilder_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UTransferMeshToolBuilder_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransferMeshToolBuilder(); \
	friend struct ::Z_Construct_UClass_UTransferMeshToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_UTransferMeshToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UTransferMeshToolBuilder, UMultiSelectionMeshEditingToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_UTransferMeshToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(UTransferMeshToolBuilder)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEXP_API UTransferMeshToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTransferMeshToolBuilder(UTransferMeshToolBuilder&&) = delete; \
	UTransferMeshToolBuilder(const UTransferMeshToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, UTransferMeshToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransferMeshToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransferMeshToolBuilder) \
	MESHMODELINGTOOLSEXP_API virtual ~UTransferMeshToolBuilder();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTransferMeshToolBuilder;

// ********** End Class UTransferMeshToolBuilder ***************************************************

// ********** Begin Class UTransferMeshToolProperties **********************************************
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTargetLODNamesFunc); \
	DECLARE_FUNCTION(execGetSourceLODNamesFunc);


struct Z_Construct_UClass_UTransferMeshToolProperties_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UTransferMeshToolProperties_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransferMeshToolProperties(); \
	friend struct ::Z_Construct_UClass_UTransferMeshToolProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_UTransferMeshToolProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UTransferMeshToolProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_UTransferMeshToolProperties_NoRegister) \
	DECLARE_SERIALIZER(UTransferMeshToolProperties)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEXP_API UTransferMeshToolProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTransferMeshToolProperties(UTransferMeshToolProperties&&) = delete; \
	UTransferMeshToolProperties(const UTransferMeshToolProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, UTransferMeshToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransferMeshToolProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransferMeshToolProperties) \
	MESHMODELINGTOOLSEXP_API virtual ~UTransferMeshToolProperties();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_33_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTransferMeshToolProperties;

// ********** End Class UTransferMeshToolProperties ************************************************

// ********** Begin Class UTransferMeshTool ********************************************************
struct Z_Construct_UClass_UTransferMeshTool_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UTransferMeshTool_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransferMeshTool(); \
	friend struct ::Z_Construct_UClass_UTransferMeshTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_UTransferMeshTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UTransferMeshTool, UMultiSelectionMeshEditingTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_UTransferMeshTool_NoRegister) \
	DECLARE_SERIALIZER(UTransferMeshTool) \
	virtual UObject* _getUObject() const override { return const_cast<UTransferMeshTool*>(this); }


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEXP_API UTransferMeshTool(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTransferMeshTool(UTransferMeshTool&&) = delete; \
	UTransferMeshTool(const UTransferMeshTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, UTransferMeshTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransferMeshTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTransferMeshTool) \
	MESHMODELINGTOOLSEXP_API virtual ~UTransferMeshTool();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_83_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTransferMeshTool;

// ********** End Class UTransferMeshTool **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
