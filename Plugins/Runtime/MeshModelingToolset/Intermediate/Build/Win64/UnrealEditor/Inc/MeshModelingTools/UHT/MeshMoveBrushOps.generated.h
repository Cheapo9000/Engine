// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sculpting/MeshMoveBrushOps.h"

#ifdef MESHMODELINGTOOLS_MeshMoveBrushOps_generated_h
#error "MeshMoveBrushOps.generated.h already included, missing '#pragma once' in MeshMoveBrushOps.h"
#endif
#define MESHMODELINGTOOLS_MeshMoveBrushOps_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoveBrushOpProps ********************************************************
struct Z_Construct_UClass_UMoveBrushOpProps_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UMoveBrushOpProps_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshMoveBrushOps_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoveBrushOpProps(); \
	friend struct ::Z_Construct_UClass_UMoveBrushOpProps_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_UMoveBrushOpProps_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoveBrushOpProps, UMeshSculptBrushOpProps, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_UMoveBrushOpProps_NoRegister) \
	DECLARE_SERIALIZER(UMoveBrushOpProps)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshMoveBrushOps_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLS_API UMoveBrushOpProps(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoveBrushOpProps(UMoveBrushOpProps&&) = delete; \
	UMoveBrushOpProps(const UMoveBrushOpProps&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, UMoveBrushOpProps); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoveBrushOpProps); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoveBrushOpProps) \
	MESHMODELINGTOOLS_API virtual ~UMoveBrushOpProps();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshMoveBrushOps_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshMoveBrushOps_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshMoveBrushOps_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshMoveBrushOps_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoveBrushOpProps;

// ********** End Class UMoveBrushOpProps **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshMoveBrushOps_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
