// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Properties/RevolveProperties.h"

#ifdef MESHMODELINGTOOLS_RevolveProperties_generated_h
#error "RevolveProperties.generated.h already included, missing '#pragma once' in RevolveProperties.h"
#endif
#define MESHMODELINGTOOLS_RevolveProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URevolveProperties *******************************************************
struct Z_Construct_UClass_URevolveProperties_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URevolveProperties_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RevolveProperties_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURevolveProperties(); \
	friend struct ::Z_Construct_UClass_URevolveProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_URevolveProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(URevolveProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_URevolveProperties_NoRegister) \
	DECLARE_SERIALIZER(URevolveProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RevolveProperties_h_61_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URevolveProperties(URevolveProperties&&) = delete; \
	URevolveProperties(const URevolveProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, URevolveProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URevolveProperties); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URevolveProperties) \
	MESHMODELINGTOOLS_API virtual ~URevolveProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RevolveProperties_h_58_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RevolveProperties_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RevolveProperties_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RevolveProperties_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URevolveProperties;

// ********** End Class URevolveProperties *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RevolveProperties_h

// ********** Begin Enum ERevolvePropertiesCapFillMode *********************************************
#define FOREACH_ENUM_EREVOLVEPROPERTIESCAPFILLMODE(op) \
	op(ERevolvePropertiesCapFillMode::None) \
	op(ERevolvePropertiesCapFillMode::CenterFan) \
	op(ERevolvePropertiesCapFillMode::Delaunay) \
	op(ERevolvePropertiesCapFillMode::EarClipping) 

enum class ERevolvePropertiesCapFillMode : uint8;
template<> struct TIsUEnumClass<ERevolvePropertiesCapFillMode> { enum { Value = true }; };
template<> MESHMODELINGTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<ERevolvePropertiesCapFillMode>();
// ********** End Enum ERevolvePropertiesCapFillMode ***********************************************

// ********** Begin Enum ERevolvePropertiesPolygroupMode *******************************************
#define FOREACH_ENUM_EREVOLVEPROPERTIESPOLYGROUPMODE(op) \
	op(ERevolvePropertiesPolygroupMode::PerShape) \
	op(ERevolvePropertiesPolygroupMode::PerFace) \
	op(ERevolvePropertiesPolygroupMode::PerRevolveStep) \
	op(ERevolvePropertiesPolygroupMode::PerPathSegment) 

enum class ERevolvePropertiesPolygroupMode : uint8;
template<> struct TIsUEnumClass<ERevolvePropertiesPolygroupMode> { enum { Value = true }; };
template<> MESHMODELINGTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<ERevolvePropertiesPolygroupMode>();
// ********** End Enum ERevolvePropertiesPolygroupMode *********************************************

// ********** Begin Enum ERevolvePropertiesQuadSplit ***********************************************
#define FOREACH_ENUM_EREVOLVEPROPERTIESQUADSPLIT(op) \
	op(ERevolvePropertiesQuadSplit::Uniform) \
	op(ERevolvePropertiesQuadSplit::Compact) 

enum class ERevolvePropertiesQuadSplit : uint8;
template<> struct TIsUEnumClass<ERevolvePropertiesQuadSplit> { enum { Value = true }; };
template<> MESHMODELINGTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<ERevolvePropertiesQuadSplit>();
// ********** End Enum ERevolvePropertiesQuadSplit *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
