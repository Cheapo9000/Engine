// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UVLayoutTool.h"

#ifdef MESHMODELINGTOOLS_UVLayoutTool_generated_h
#error "UVLayoutTool.generated.h already included, missing '#pragma once' in UVLayoutTool.h"
#endif
#define MESHMODELINGTOOLS_UVLayoutTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUVLayoutToolBuilder *****************************************************
struct Z_Construct_UClass_UUVLayoutToolBuilder_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UUVLayoutToolBuilder_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVLayoutTool_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVLayoutToolBuilder(); \
	friend struct ::Z_Construct_UClass_UUVLayoutToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_UUVLayoutToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVLayoutToolBuilder, UMultiSelectionMeshEditingToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_UUVLayoutToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(UUVLayoutToolBuilder)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVLayoutTool_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLS_API UUVLayoutToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVLayoutToolBuilder(UUVLayoutToolBuilder&&) = delete; \
	UUVLayoutToolBuilder(const UUVLayoutToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, UUVLayoutToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVLayoutToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVLayoutToolBuilder) \
	MESHMODELINGTOOLS_API virtual ~UUVLayoutToolBuilder();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVLayoutTool_h_32_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVLayoutTool_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVLayoutTool_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVLayoutTool_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVLayoutToolBuilder;

// ********** End Class UUVLayoutToolBuilder *******************************************************

// ********** Begin Class UUVLayoutTool ************************************************************
struct Z_Construct_UClass_UUVLayoutTool_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UUVLayoutTool_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVLayoutTool_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVLayoutTool(); \
	friend struct ::Z_Construct_UClass_UUVLayoutTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_UUVLayoutTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVLayoutTool, UMultiSelectionMeshEditingTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_UUVLayoutTool_NoRegister) \
	DECLARE_SERIALIZER(UUVLayoutTool) \
	virtual UObject* _getUObject() const override { return const_cast<UUVLayoutTool*>(this); }


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVLayoutTool_h_52_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVLayoutTool(UUVLayoutTool&&) = delete; \
	UUVLayoutTool(const UUVLayoutTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, UUVLayoutTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVLayoutTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUVLayoutTool) \
	MESHMODELINGTOOLS_API virtual ~UUVLayoutTool();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVLayoutTool_h_49_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVLayoutTool_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVLayoutTool_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVLayoutTool_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVLayoutTool;

// ********** End Class UUVLayoutTool **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVLayoutTool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
