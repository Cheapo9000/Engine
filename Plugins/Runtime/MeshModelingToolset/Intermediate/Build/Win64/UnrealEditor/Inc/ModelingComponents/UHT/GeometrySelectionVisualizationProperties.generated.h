// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PropertySets/GeometrySelectionVisualizationProperties.h"

#ifdef MODELINGCOMPONENTS_GeometrySelectionVisualizationProperties_generated_h
#error "GeometrySelectionVisualizationProperties.generated.h already included, missing '#pragma once' in GeometrySelectionVisualizationProperties.h"
#endif
#define MODELINGCOMPONENTS_GeometrySelectionVisualizationProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGeometrySelectionVisualizationProperties ********************************
struct Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UGeometrySelectionVisualizationProperties_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_GeometrySelectionVisualizationProperties_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometrySelectionVisualizationProperties(); \
	friend struct ::Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UGeometrySelectionVisualizationProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometrySelectionVisualizationProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UGeometrySelectionVisualizationProperties_NoRegister) \
	DECLARE_SERIALIZER(UGeometrySelectionVisualizationProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_GeometrySelectionVisualizationProperties_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UGeometrySelectionVisualizationProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometrySelectionVisualizationProperties(UGeometrySelectionVisualizationProperties&&) = delete; \
	UGeometrySelectionVisualizationProperties(const UGeometrySelectionVisualizationProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UGeometrySelectionVisualizationProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometrySelectionVisualizationProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometrySelectionVisualizationProperties) \
	MODELINGCOMPONENTS_API virtual ~UGeometrySelectionVisualizationProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_GeometrySelectionVisualizationProperties_h_29_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_GeometrySelectionVisualizationProperties_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_GeometrySelectionVisualizationProperties_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_GeometrySelectionVisualizationProperties_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometrySelectionVisualizationProperties;

// ********** End Class UGeometrySelectionVisualizationProperties **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_GeometrySelectionVisualizationProperties_h

// ********** Begin Enum EGeometrySelectionElementType *********************************************
#define FOREACH_ENUM_EGEOMETRYSELECTIONELEMENTTYPE(op) \
	op(EGeometrySelectionElementType::Vertex) \
	op(EGeometrySelectionElementType::Edge) \
	op(EGeometrySelectionElementType::Face) 

enum class EGeometrySelectionElementType : uint8;
template<> struct TIsUEnumClass<EGeometrySelectionElementType> { enum { Value = true }; };
template<> MODELINGCOMPONENTS_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometrySelectionElementType>();
// ********** End Enum EGeometrySelectionElementType ***********************************************

// ********** Begin Enum EGeometrySelectionTopologyType ********************************************
#define FOREACH_ENUM_EGEOMETRYSELECTIONTOPOLOGYTYPE(op) \
	op(EGeometrySelectionTopologyType::Triangle) \
	op(EGeometrySelectionTopologyType::Polygroup) 

enum class EGeometrySelectionTopologyType : uint8;
template<> struct TIsUEnumClass<EGeometrySelectionTopologyType> { enum { Value = true }; };
template<> MODELINGCOMPONENTS_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometrySelectionTopologyType>();
// ********** End Enum EGeometrySelectionTopologyType **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
