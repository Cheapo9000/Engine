// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Properties/MeshSculptLayerProperties.h"

#ifdef MESHMODELINGTOOLS_MeshSculptLayerProperties_generated_h
#error "MeshSculptLayerProperties.generated.h already included, missing '#pragma once' in MeshSculptLayerProperties.h"
#endif
#define MESHMODELINGTOOLS_MeshSculptLayerProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMeshSculptLayerProperties ***********************************************
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshSculptLayerProperties_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetLayerWeight); \
	DECLARE_FUNCTION(execSetActiveLayer); \
	DECLARE_FUNCTION(execMoveLayer); \
	DECLARE_FUNCTION(execSetLayerName); \
	DECLARE_FUNCTION(execGetLayerName); \
	DECLARE_FUNCTION(execRemoveLayerAtIndex);


struct Z_Construct_UClass_UMeshSculptLayerProperties_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UMeshSculptLayerProperties_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshSculptLayerProperties_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshSculptLayerProperties(); \
	friend struct ::Z_Construct_UClass_UMeshSculptLayerProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_UMeshSculptLayerProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshSculptLayerProperties, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_UMeshSculptLayerProperties_NoRegister) \
	DECLARE_SERIALIZER(UMeshSculptLayerProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshSculptLayerProperties_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLS_API UMeshSculptLayerProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshSculptLayerProperties(UMeshSculptLayerProperties&&) = delete; \
	UMeshSculptLayerProperties(const UMeshSculptLayerProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, UMeshSculptLayerProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshSculptLayerProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshSculptLayerProperties) \
	MESHMODELINGTOOLS_API virtual ~UMeshSculptLayerProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshSculptLayerProperties_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshSculptLayerProperties_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshSculptLayerProperties_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshSculptLayerProperties_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshSculptLayerProperties_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshSculptLayerProperties;

// ********** End Class UMeshSculptLayerProperties *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshSculptLayerProperties_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
