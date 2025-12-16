// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelSolidifyMeshesTool.h"

#ifdef MESHMODELINGTOOLSEXP_VoxelSolidifyMeshesTool_generated_h
#error "VoxelSolidifyMeshesTool.generated.h already included, missing '#pragma once' in VoxelSolidifyMeshesTool.h"
#endif
#define MESHMODELINGTOOLSEXP_VoxelSolidifyMeshesTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVoxelSolidifyMeshesToolProperties ***************************************
struct Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelSolidifyMeshesTool_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelSolidifyMeshesToolProperties(); \
	friend struct ::Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelSolidifyMeshesToolProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_NoRegister) \
	DECLARE_SERIALIZER(UVoxelSolidifyMeshesToolProperties)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelSolidifyMeshesTool_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEXP_API UVoxelSolidifyMeshesToolProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelSolidifyMeshesToolProperties(UVoxelSolidifyMeshesToolProperties&&) = delete; \
	UVoxelSolidifyMeshesToolProperties(const UVoxelSolidifyMeshesToolProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, UVoxelSolidifyMeshesToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelSolidifyMeshesToolProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelSolidifyMeshesToolProperties) \
	MESHMODELINGTOOLSEXP_API virtual ~UVoxelSolidifyMeshesToolProperties();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelSolidifyMeshesTool_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelSolidifyMeshesTool_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelSolidifyMeshesTool_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelSolidifyMeshesTool_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelSolidifyMeshesToolProperties;

// ********** End Class UVoxelSolidifyMeshesToolProperties *****************************************

// ********** Begin Class UVoxelSolidifyMeshesTool *************************************************
struct Z_Construct_UClass_UVoxelSolidifyMeshesTool_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVoxelSolidifyMeshesTool_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelSolidifyMeshesTool_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelSolidifyMeshesTool(); \
	friend struct ::Z_Construct_UClass_UVoxelSolidifyMeshesTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_UVoxelSolidifyMeshesTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelSolidifyMeshesTool, UBaseVoxelTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_UVoxelSolidifyMeshesTool_NoRegister) \
	DECLARE_SERIALIZER(UVoxelSolidifyMeshesTool)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelSolidifyMeshesTool_h_59_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelSolidifyMeshesTool(UVoxelSolidifyMeshesTool&&) = delete; \
	UVoxelSolidifyMeshesTool(const UVoxelSolidifyMeshesTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, UVoxelSolidifyMeshesTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelSolidifyMeshesTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoxelSolidifyMeshesTool) \
	MESHMODELINGTOOLSEXP_API virtual ~UVoxelSolidifyMeshesTool();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelSolidifyMeshesTool_h_56_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelSolidifyMeshesTool_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelSolidifyMeshesTool_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelSolidifyMeshesTool_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelSolidifyMeshesTool;

// ********** End Class UVoxelSolidifyMeshesTool ***************************************************

// ********** Begin Class UVoxelSolidifyMeshesToolBuilder ******************************************
struct Z_Construct_UClass_UVoxelSolidifyMeshesToolBuilder_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVoxelSolidifyMeshesToolBuilder_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelSolidifyMeshesTool_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelSolidifyMeshesToolBuilder(); \
	friend struct ::Z_Construct_UClass_UVoxelSolidifyMeshesToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_UVoxelSolidifyMeshesToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelSolidifyMeshesToolBuilder, UBaseCreateFromSelectedToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_UVoxelSolidifyMeshesToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(UVoxelSolidifyMeshesToolBuilder)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelSolidifyMeshesTool_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEXP_API UVoxelSolidifyMeshesToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelSolidifyMeshesToolBuilder(UVoxelSolidifyMeshesToolBuilder&&) = delete; \
	UVoxelSolidifyMeshesToolBuilder(const UVoxelSolidifyMeshesToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, UVoxelSolidifyMeshesToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelSolidifyMeshesToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelSolidifyMeshesToolBuilder) \
	MESHMODELINGTOOLSEXP_API virtual ~UVoxelSolidifyMeshesToolBuilder();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelSolidifyMeshesTool_h_82_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelSolidifyMeshesTool_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelSolidifyMeshesTool_h_85_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelSolidifyMeshesTool_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelSolidifyMeshesToolBuilder;

// ********** End Class UVoxelSolidifyMeshesToolBuilder ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelSolidifyMeshesTool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
