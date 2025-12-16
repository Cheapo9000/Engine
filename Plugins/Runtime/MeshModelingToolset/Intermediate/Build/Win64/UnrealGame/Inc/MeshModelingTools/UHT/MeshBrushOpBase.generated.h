// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sculpting/MeshBrushOpBase.h"

#ifdef MESHMODELINGTOOLS_MeshBrushOpBase_generated_h
#error "MeshBrushOpBase.generated.h already included, missing '#pragma once' in MeshBrushOpBase.h"
#endif
#define MESHMODELINGTOOLS_MeshBrushOpBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMeshSculptBrushOpProps **************************************************
struct Z_Construct_UClass_UMeshSculptBrushOpProps_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UMeshSculptBrushOpProps_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshBrushOpBase_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshSculptBrushOpProps(); \
	friend struct ::Z_Construct_UClass_UMeshSculptBrushOpProps_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_UMeshSculptBrushOpProps_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshSculptBrushOpProps, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_UMeshSculptBrushOpProps_NoRegister) \
	DECLARE_SERIALIZER(UMeshSculptBrushOpProps)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshBrushOpBase_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLS_API UMeshSculptBrushOpProps(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshSculptBrushOpProps(UMeshSculptBrushOpProps&&) = delete; \
	UMeshSculptBrushOpProps(const UMeshSculptBrushOpProps&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, UMeshSculptBrushOpProps); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshSculptBrushOpProps); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshSculptBrushOpProps) \
	MESHMODELINGTOOLS_API virtual ~UMeshSculptBrushOpProps();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshBrushOpBase_h_85_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshBrushOpBase_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshBrushOpBase_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshBrushOpBase_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshSculptBrushOpProps;

// ********** End Class UMeshSculptBrushOpProps ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshBrushOpBase_h

// ********** Begin Enum EPlaneBrushSideMode *******************************************************
#define FOREACH_ENUM_EPLANEBRUSHSIDEMODE(op) \
	op(EPlaneBrushSideMode::BothSides) \
	op(EPlaneBrushSideMode::PushDown) \
	op(EPlaneBrushSideMode::PullTowards) 

enum class EPlaneBrushSideMode : uint8;
template<> struct TIsUEnumClass<EPlaneBrushSideMode> { enum { Value = true }; };
template<> MESHMODELINGTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<EPlaneBrushSideMode>();
// ********** End Enum EPlaneBrushSideMode *********************************************************

// ********** Begin Enum EMeshSculptStrokeType *****************************************************
#define FOREACH_ENUM_EMESHSCULPTSTROKETYPE(op) \
	op(EMeshSculptStrokeType::Spacing) \
	op(EMeshSculptStrokeType::Airbrush) \
	op(EMeshSculptStrokeType::Dots) \
	op(EMeshSculptStrokeType::LastValue) 

enum class EMeshSculptStrokeType : uint8;
template<> struct TIsUEnumClass<EMeshSculptStrokeType> { enum { Value = true }; };
template<> MESHMODELINGTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<EMeshSculptStrokeType>();
// ********** End Enum EMeshSculptStrokeType *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
