// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshBoundaryToolBase.h"

#ifdef MESHMODELINGTOOLSEXP_MeshBoundaryToolBase_generated_h
#error "MeshBoundaryToolBase.generated.h already included, missing '#pragma once' in MeshBoundaryToolBase.h"
#endif
#define MESHMODELINGTOOLSEXP_MeshBoundaryToolBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMeshBoundaryToolBase ****************************************************
struct Z_Construct_UClass_UMeshBoundaryToolBase_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshBoundaryToolBase_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshBoundaryToolBase_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshBoundaryToolBase(); \
	friend struct ::Z_Construct_UClass_UMeshBoundaryToolBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_UMeshBoundaryToolBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshBoundaryToolBase, USingleSelectionMeshEditingTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_UMeshBoundaryToolBase_NoRegister) \
	DECLARE_SERIALIZER(UMeshBoundaryToolBase)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshBoundaryToolBase_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEXP_API UMeshBoundaryToolBase(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshBoundaryToolBase(UMeshBoundaryToolBase&&) = delete; \
	UMeshBoundaryToolBase(const UMeshBoundaryToolBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, UMeshBoundaryToolBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshBoundaryToolBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMeshBoundaryToolBase) \
	MESHMODELINGTOOLSEXP_API virtual ~UMeshBoundaryToolBase();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshBoundaryToolBase_h_26_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshBoundaryToolBase_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshBoundaryToolBase_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshBoundaryToolBase_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshBoundaryToolBase;

// ********** End Class UMeshBoundaryToolBase ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshBoundaryToolBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
