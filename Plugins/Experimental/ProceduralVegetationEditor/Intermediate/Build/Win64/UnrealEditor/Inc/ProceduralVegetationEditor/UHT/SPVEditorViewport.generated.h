// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SPVEditorViewport.h"

#ifdef PROCEDURALVEGETATIONEDITOR_SPVEditorViewport_generated_h
#error "SPVEditorViewport.generated.h already included, missing '#pragma once' in SPVEditorViewport.h"
#endif
#define PROCEDURALVEGETATIONEDITOR_SPVEditorViewport_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPVMannequinWidgetContext ************************************************
struct Z_Construct_UClass_UPVMannequinWidgetContext_Statics;
PROCEDURALVEGETATIONEDITOR_API UClass* Z_Construct_UClass_UPVMannequinWidgetContext_NoRegister();

#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_SPVEditorViewport_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPVMannequinWidgetContext(); \
	friend struct ::Z_Construct_UClass_UPVMannequinWidgetContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALVEGETATIONEDITOR_API UClass* ::Z_Construct_UClass_UPVMannequinWidgetContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UPVMannequinWidgetContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralVegetationEditor"), Z_Construct_UClass_UPVMannequinWidgetContext_NoRegister) \
	DECLARE_SERIALIZER(UPVMannequinWidgetContext)


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_SPVEditorViewport_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROCEDURALVEGETATIONEDITOR_API UPVMannequinWidgetContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPVMannequinWidgetContext(UPVMannequinWidgetContext&&) = delete; \
	UPVMannequinWidgetContext(const UPVMannequinWidgetContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROCEDURALVEGETATIONEDITOR_API, UPVMannequinWidgetContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPVMannequinWidgetContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPVMannequinWidgetContext) \
	PROCEDURALVEGETATIONEDITOR_API virtual ~UPVMannequinWidgetContext();


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_SPVEditorViewport_h_31_PROLOG
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_SPVEditorViewport_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_SPVEditorViewport_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_SPVEditorViewport_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPVMannequinWidgetContext;

// ********** End Class UPVMannequinWidgetContext **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_SPVEditorViewport_h

// ********** Begin Enum EPVVisualizationMode ******************************************************
#define FOREACH_ENUM_EPVVISUALIZATIONMODE(op) \
	op(EPVVisualizationMode::Default) \
	op(EPVVisualizationMode::PointData) \
	op(EPVVisualizationMode::Mesh) \
	op(EPVVisualizationMode::FoliageGrid) \
	op(EPVVisualizationMode::Bones) \
	op(EPVVisualizationMode::PointDataMesh) \
	op(EPVVisualizationMode::FoliageMesh) \
	op(EPVVisualizationMode::BonesMesh) 

enum class EPVVisualizationMode : uint8;
template<> struct TIsUEnumClass<EPVVisualizationMode> { enum { Value = true }; };
template<> PROCEDURALVEGETATIONEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EPVVisualizationMode>();
// ********** End Enum EPVVisualizationMode ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
