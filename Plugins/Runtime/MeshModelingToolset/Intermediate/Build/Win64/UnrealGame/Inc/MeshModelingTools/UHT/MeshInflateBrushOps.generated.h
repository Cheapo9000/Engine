// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sculpting/MeshInflateBrushOps.h"

#ifdef MESHMODELINGTOOLS_MeshInflateBrushOps_generated_h
#error "MeshInflateBrushOps.generated.h already included, missing '#pragma once' in MeshInflateBrushOps.h"
#endif
#define MESHMODELINGTOOLS_MeshInflateBrushOps_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInflateBrushOpProps *****************************************************
struct Z_Construct_UClass_UInflateBrushOpProps_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UInflateBrushOpProps_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshInflateBrushOps_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInflateBrushOpProps(); \
	friend struct ::Z_Construct_UClass_UInflateBrushOpProps_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_UInflateBrushOpProps_NoRegister(); \
public: \
	DECLARE_CLASS2(UInflateBrushOpProps, UMeshSculptBrushOpProps, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_UInflateBrushOpProps_NoRegister) \
	DECLARE_SERIALIZER(UInflateBrushOpProps)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshInflateBrushOps_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLS_API UInflateBrushOpProps(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInflateBrushOpProps(UInflateBrushOpProps&&) = delete; \
	UInflateBrushOpProps(const UInflateBrushOpProps&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, UInflateBrushOpProps); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInflateBrushOpProps); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInflateBrushOpProps) \
	MESHMODELINGTOOLS_API virtual ~UInflateBrushOpProps();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshInflateBrushOps_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshInflateBrushOps_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshInflateBrushOps_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshInflateBrushOps_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInflateBrushOpProps;

// ********** End Class UInflateBrushOpProps *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshInflateBrushOps_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
