// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sculpting/MeshPinchBrushOps.h"

#ifdef MESHMODELINGTOOLS_MeshPinchBrushOps_generated_h
#error "MeshPinchBrushOps.generated.h already included, missing '#pragma once' in MeshPinchBrushOps.h"
#endif
#define MESHMODELINGTOOLS_MeshPinchBrushOps_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPinchBrushOpProps *******************************************************
struct Z_Construct_UClass_UPinchBrushOpProps_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPinchBrushOpProps_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshPinchBrushOps_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPinchBrushOpProps(); \
	friend struct ::Z_Construct_UClass_UPinchBrushOpProps_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_UPinchBrushOpProps_NoRegister(); \
public: \
	DECLARE_CLASS2(UPinchBrushOpProps, UMeshSculptBrushOpProps, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_UPinchBrushOpProps_NoRegister) \
	DECLARE_SERIALIZER(UPinchBrushOpProps)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshPinchBrushOps_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLS_API UPinchBrushOpProps(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPinchBrushOpProps(UPinchBrushOpProps&&) = delete; \
	UPinchBrushOpProps(const UPinchBrushOpProps&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, UPinchBrushOpProps); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPinchBrushOpProps); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPinchBrushOpProps) \
	MESHMODELINGTOOLS_API virtual ~UPinchBrushOpProps();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshPinchBrushOps_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshPinchBrushOps_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshPinchBrushOps_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshPinchBrushOps_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPinchBrushOpProps;

// ********** End Class UPinchBrushOpProps *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshPinchBrushOps_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
