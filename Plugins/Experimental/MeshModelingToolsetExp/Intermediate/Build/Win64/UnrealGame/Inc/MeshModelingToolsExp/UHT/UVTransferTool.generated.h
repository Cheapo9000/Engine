// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UVTransferTool.h"

#ifdef MESHMODELINGTOOLSEXP_UVTransferTool_generated_h
#error "UVTransferTool.generated.h already included, missing '#pragma once' in UVTransferTool.h"
#endif
#define MESHMODELINGTOOLSEXP_UVTransferTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUVTransferToolBuilder ***************************************************
struct Z_Construct_UClass_UUVTransferToolBuilder_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UUVTransferToolBuilder_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVTransferToolBuilder(); \
	friend struct ::Z_Construct_UClass_UUVTransferToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_UUVTransferToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVTransferToolBuilder, UMultiTargetWithSelectionToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_UUVTransferToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(UUVTransferToolBuilder)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEXP_API UUVTransferToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVTransferToolBuilder(UUVTransferToolBuilder&&) = delete; \
	UUVTransferToolBuilder(const UUVTransferToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, UUVTransferToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVTransferToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVTransferToolBuilder) \
	MESHMODELINGTOOLSEXP_API virtual ~UUVTransferToolBuilder();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_26_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVTransferToolBuilder;

// ********** End Class UUVTransferToolBuilder *****************************************************

// ********** Begin Class UUVTransferToolProperties ************************************************
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDestUVChannelNames); \
	DECLARE_FUNCTION(execGetSourceUVChannelNames);


struct Z_Construct_UClass_UUVTransferToolProperties_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UUVTransferToolProperties_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVTransferToolProperties(); \
	friend struct ::Z_Construct_UClass_UUVTransferToolProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_UUVTransferToolProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVTransferToolProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_UUVTransferToolProperties_NoRegister) \
	DECLARE_SERIALIZER(UUVTransferToolProperties)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEXP_API UUVTransferToolProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVTransferToolProperties(UUVTransferToolProperties&&) = delete; \
	UUVTransferToolProperties(const UUVTransferToolProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, UUVTransferToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVTransferToolProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVTransferToolProperties) \
	MESHMODELINGTOOLSEXP_API virtual ~UUVTransferToolProperties();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_40_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVTransferToolProperties;

// ********** End Class UUVTransferToolProperties **************************************************

// ********** Begin Class UUVTransferTool **********************************************************
struct Z_Construct_UClass_UUVTransferTool_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UUVTransferTool_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_132_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVTransferTool(); \
	friend struct ::Z_Construct_UClass_UUVTransferTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_UUVTransferTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVTransferTool, UMultiTargetWithSelectionTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_UUVTransferTool_NoRegister) \
	DECLARE_SERIALIZER(UUVTransferTool) \
	virtual UObject* _getUObject() const override { return const_cast<UUVTransferTool*>(this); }


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_132_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEXP_API UUVTransferTool(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVTransferTool(UUVTransferTool&&) = delete; \
	UUVTransferTool(const UUVTransferTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, UUVTransferTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVTransferTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUVTransferTool) \
	MESHMODELINGTOOLSEXP_API virtual ~UUVTransferTool();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_127_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_132_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_132_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_132_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVTransferTool;

// ********** End Class UUVTransferTool ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
