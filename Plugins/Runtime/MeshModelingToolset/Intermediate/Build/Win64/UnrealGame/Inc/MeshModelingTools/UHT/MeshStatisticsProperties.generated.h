// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Properties/MeshStatisticsProperties.h"

#ifdef MESHMODELINGTOOLS_MeshStatisticsProperties_generated_h
#error "MeshStatisticsProperties.generated.h already included, missing '#pragma once' in MeshStatisticsProperties.h"
#endif
#define MESHMODELINGTOOLS_MeshStatisticsProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMeshStatisticsProperties ************************************************
struct Z_Construct_UClass_UMeshStatisticsProperties_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UMeshStatisticsProperties_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshStatisticsProperties_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshStatisticsProperties(); \
	friend struct ::Z_Construct_UClass_UMeshStatisticsProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_UMeshStatisticsProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshStatisticsProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_UMeshStatisticsProperties_NoRegister) \
	DECLARE_SERIALIZER(UMeshStatisticsProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshStatisticsProperties_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLS_API UMeshStatisticsProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshStatisticsProperties(UMeshStatisticsProperties&&) = delete; \
	UMeshStatisticsProperties(const UMeshStatisticsProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, UMeshStatisticsProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshStatisticsProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshStatisticsProperties) \
	MESHMODELINGTOOLS_API virtual ~UMeshStatisticsProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshStatisticsProperties_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshStatisticsProperties_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshStatisticsProperties_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshStatisticsProperties_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshStatisticsProperties;

// ********** End Class UMeshStatisticsProperties **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshStatisticsProperties_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
