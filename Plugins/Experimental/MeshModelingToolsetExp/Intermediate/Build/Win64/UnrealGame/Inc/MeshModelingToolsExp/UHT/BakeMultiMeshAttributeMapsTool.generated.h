// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BakeMultiMeshAttributeMapsTool.h"

#ifdef MESHMODELINGTOOLSEXP_BakeMultiMeshAttributeMapsTool_generated_h
#error "BakeMultiMeshAttributeMapsTool.generated.h already included, missing '#pragma once' in BakeMultiMeshAttributeMapsTool.h"
#endif
#define MESHMODELINGTOOLSEXP_BakeMultiMeshAttributeMapsTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBakeMultiMeshAttributeMapsToolBuilder ***********************************
struct Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolBuilder_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolBuilder_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBakeMultiMeshAttributeMapsToolBuilder(); \
	friend struct ::Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UBakeMultiMeshAttributeMapsToolBuilder, UMultiSelectionMeshEditingToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(UBakeMultiMeshAttributeMapsToolBuilder)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEXP_API UBakeMultiMeshAttributeMapsToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBakeMultiMeshAttributeMapsToolBuilder(UBakeMultiMeshAttributeMapsToolBuilder&&) = delete; \
	UBakeMultiMeshAttributeMapsToolBuilder(const UBakeMultiMeshAttributeMapsToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, UBakeMultiMeshAttributeMapsToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBakeMultiMeshAttributeMapsToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBakeMultiMeshAttributeMapsToolBuilder) \
	MESHMODELINGTOOLSEXP_API virtual ~UBakeMultiMeshAttributeMapsToolBuilder();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_24_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBakeMultiMeshAttributeMapsToolBuilder;

// ********** End Class UBakeMultiMeshAttributeMapsToolBuilder *************************************

// ********** Begin Class UBakeMultiMeshAttributeMapsToolProperties ********************************
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMapPreviewNamesFunc);


struct Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBakeMultiMeshAttributeMapsToolProperties(); \
	friend struct ::Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UBakeMultiMeshAttributeMapsToolProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_NoRegister) \
	DECLARE_SERIALIZER(UBakeMultiMeshAttributeMapsToolProperties)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEXP_API UBakeMultiMeshAttributeMapsToolProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBakeMultiMeshAttributeMapsToolProperties(UBakeMultiMeshAttributeMapsToolProperties&&) = delete; \
	UBakeMultiMeshAttributeMapsToolProperties(const UBakeMultiMeshAttributeMapsToolProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, UBakeMultiMeshAttributeMapsToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBakeMultiMeshAttributeMapsToolProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBakeMultiMeshAttributeMapsToolProperties) \
	MESHMODELINGTOOLSEXP_API virtual ~UBakeMultiMeshAttributeMapsToolProperties();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_38_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBakeMultiMeshAttributeMapsToolProperties;

// ********** End Class UBakeMultiMeshAttributeMapsToolProperties **********************************

// ********** Begin ScriptStruct FBakeMultiMeshDetailProperties ************************************
struct Z_Construct_UScriptStruct_FBakeMultiMeshDetailProperties_Statics;
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_84_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBakeMultiMeshDetailProperties_Statics; \
	MESHMODELINGTOOLSEXP_API static class UScriptStruct* StaticStruct();


struct FBakeMultiMeshDetailProperties;
// ********** End ScriptStruct FBakeMultiMeshDetailProperties **************************************

// ********** Begin Class UBakeMultiMeshInputToolProperties ****************************************
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTargetUVLayerNamesFunc);


struct Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMultiMeshInputToolProperties_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_105_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBakeMultiMeshInputToolProperties(); \
	friend struct ::Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_UBakeMultiMeshInputToolProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UBakeMultiMeshInputToolProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_UBakeMultiMeshInputToolProperties_NoRegister) \
	DECLARE_SERIALIZER(UBakeMultiMeshInputToolProperties)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_105_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEXP_API UBakeMultiMeshInputToolProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBakeMultiMeshInputToolProperties(UBakeMultiMeshInputToolProperties&&) = delete; \
	UBakeMultiMeshInputToolProperties(const UBakeMultiMeshInputToolProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, UBakeMultiMeshInputToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBakeMultiMeshInputToolProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBakeMultiMeshInputToolProperties) \
	MESHMODELINGTOOLSEXP_API virtual ~UBakeMultiMeshInputToolProperties();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_102_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_105_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_105_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_105_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBakeMultiMeshInputToolProperties;

// ********** End Class UBakeMultiMeshInputToolProperties ******************************************

// ********** Begin Class UBakeMultiMeshAttributeMapsTool ******************************************
struct Z_Construct_UClass_UBakeMultiMeshAttributeMapsTool_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMultiMeshAttributeMapsTool_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_173_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBakeMultiMeshAttributeMapsTool(); \
	friend struct ::Z_Construct_UClass_UBakeMultiMeshAttributeMapsTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_UBakeMultiMeshAttributeMapsTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UBakeMultiMeshAttributeMapsTool, UBakeMeshAttributeMapsToolBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_UBakeMultiMeshAttributeMapsTool_NoRegister) \
	DECLARE_SERIALIZER(UBakeMultiMeshAttributeMapsTool)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_173_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBakeMultiMeshAttributeMapsTool(UBakeMultiMeshAttributeMapsTool&&) = delete; \
	UBakeMultiMeshAttributeMapsTool(const UBakeMultiMeshAttributeMapsTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, UBakeMultiMeshAttributeMapsTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBakeMultiMeshAttributeMapsTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBakeMultiMeshAttributeMapsTool) \
	MESHMODELINGTOOLSEXP_API virtual ~UBakeMultiMeshAttributeMapsTool();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_170_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_173_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_173_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_173_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBakeMultiMeshAttributeMapsTool;

// ********** End Class UBakeMultiMeshAttributeMapsTool ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
