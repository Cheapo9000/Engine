// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Properties/MeshUVChannelProperties.h"

#ifdef MESHMODELINGTOOLS_MeshUVChannelProperties_generated_h
#error "MeshUVChannelProperties.generated.h already included, missing '#pragma once' in MeshUVChannelProperties.h"
#endif
#define MESHMODELINGTOOLS_MeshUVChannelProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMeshUVChannelProperties *************************************************
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshUVChannelProperties_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetUVChannelNamesFunc);


struct Z_Construct_UClass_UMeshUVChannelProperties_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UMeshUVChannelProperties_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshUVChannelProperties_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshUVChannelProperties(); \
	friend struct ::Z_Construct_UClass_UMeshUVChannelProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_UMeshUVChannelProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshUVChannelProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_UMeshUVChannelProperties_NoRegister) \
	DECLARE_SERIALIZER(UMeshUVChannelProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshUVChannelProperties_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLS_API UMeshUVChannelProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshUVChannelProperties(UMeshUVChannelProperties&&) = delete; \
	UMeshUVChannelProperties(const UMeshUVChannelProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, UMeshUVChannelProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshUVChannelProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshUVChannelProperties) \
	MESHMODELINGTOOLS_API virtual ~UMeshUVChannelProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshUVChannelProperties_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshUVChannelProperties_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshUVChannelProperties_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshUVChannelProperties_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshUVChannelProperties_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshUVChannelProperties;

// ********** End Class UMeshUVChannelProperties ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshUVChannelProperties_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
