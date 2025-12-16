// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Properties/MeshAnalysisProperties.h"

#ifdef MESHMODELINGTOOLSEXP_MeshAnalysisProperties_generated_h
#error "MeshAnalysisProperties.generated.h already included, missing '#pragma once' in MeshAnalysisProperties.h"
#endif
#define MESHMODELINGTOOLSEXP_MeshAnalysisProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMeshAnalysisProperties **************************************************
struct Z_Construct_UClass_UMeshAnalysisProperties_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshAnalysisProperties_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_MeshAnalysisProperties_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshAnalysisProperties(); \
	friend struct ::Z_Construct_UClass_UMeshAnalysisProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_UMeshAnalysisProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshAnalysisProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_UMeshAnalysisProperties_NoRegister) \
	DECLARE_SERIALIZER(UMeshAnalysisProperties)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_MeshAnalysisProperties_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEXP_API UMeshAnalysisProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshAnalysisProperties(UMeshAnalysisProperties&&) = delete; \
	UMeshAnalysisProperties(const UMeshAnalysisProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, UMeshAnalysisProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshAnalysisProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshAnalysisProperties) \
	MESHMODELINGTOOLSEXP_API virtual ~UMeshAnalysisProperties();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_MeshAnalysisProperties_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_MeshAnalysisProperties_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_MeshAnalysisProperties_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_MeshAnalysisProperties_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshAnalysisProperties;

// ********** End Class UMeshAnalysisProperties ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_MeshAnalysisProperties_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
