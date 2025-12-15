// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/BaseDynamicMeshComponent.h"

#ifdef GEOMETRYFRAMEWORK_BaseDynamicMeshComponent_generated_h
#error "BaseDynamicMeshComponent.generated.h already included, missing '#pragma once' in BaseDynamicMeshComponent.h"
#endif
#define GEOMETRYFRAMEWORK_BaseDynamicMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UMaterialInterface;
enum class EDynamicMeshComponentColorOverrideMode : uint8;
enum class EDynamicMeshComponentDistanceFieldMode : uint8;
enum class EDynamicMeshDrawPath : uint8;
enum class EDynamicMeshVertexColorTransformMode : uint8;
struct FColor;

// ********** Begin Class UBaseDynamicMeshComponent ************************************************
#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_131_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetDistanceFieldMode); \
	DECLARE_FUNCTION(execSetDistanceFieldMode); \
	DECLARE_FUNCTION(execGetMeshDrawPath); \
	DECLARE_FUNCTION(execSetMeshDrawPath); \
	DECLARE_FUNCTION(execGetEnableRaytracing); \
	DECLARE_FUNCTION(execSetEnableRaytracing); \
	DECLARE_FUNCTION(execGetOverrideSecondaryWireframeRenderMaterial); \
	DECLARE_FUNCTION(execClearOverrideSecondaryWireframeRenderMaterial); \
	DECLARE_FUNCTION(execSetOverrideSecondaryWireframeRenderMaterial); \
	DECLARE_FUNCTION(execGetOverrideWireframeRenderMaterial); \
	DECLARE_FUNCTION(execClearOverrideWireframeRenderMaterial); \
	DECLARE_FUNCTION(execSetOverrideWireframeRenderMaterial); \
	DECLARE_FUNCTION(execGetSecondaryBuffersVisibility); \
	DECLARE_FUNCTION(execSetSecondaryBuffersVisibility); \
	DECLARE_FUNCTION(execGetSecondaryRenderMaterial); \
	DECLARE_FUNCTION(execClearSecondaryRenderMaterial); \
	DECLARE_FUNCTION(execSetSecondaryRenderMaterial); \
	DECLARE_FUNCTION(execGetOverrideRenderMaterial); \
	DECLARE_FUNCTION(execHasOverrideRenderMaterial); \
	DECLARE_FUNCTION(execClearOverrideRenderMaterial); \
	DECLARE_FUNCTION(execSetOverrideRenderMaterial); \
	DECLARE_FUNCTION(execGetViewModeOverridesEnabled); \
	DECLARE_FUNCTION(execSetViewModeOverridesEnabled); \
	DECLARE_FUNCTION(execGetShadowsEnabled); \
	DECLARE_FUNCTION(execSetShadowsEnabled); \
	DECLARE_FUNCTION(execGetFlatShadingEnabled); \
	DECLARE_FUNCTION(execSetEnableFlatShading); \
	DECLARE_FUNCTION(execGetVertexColorSpaceTransformMode); \
	DECLARE_FUNCTION(execSetVertexColorSpaceTransformMode); \
	DECLARE_FUNCTION(execGetConstantOverrideColor); \
	DECLARE_FUNCTION(execSetConstantOverrideColor); \
	DECLARE_FUNCTION(execGetColorOverrideMode); \
	DECLARE_FUNCTION(execSetColorOverrideMode); \
	DECLARE_FUNCTION(execGetEnableWireframeRenderPass); \
	DECLARE_FUNCTION(execSetEnableWireframeRenderPass); \
	DECLARE_FUNCTION(execGetDynamicMesh);


struct Z_Construct_UClass_UBaseDynamicMeshComponent_Statics;
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UBaseDynamicMeshComponent_NoRegister();

#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_131_INCLASS \
private: \
	static void StaticRegisterNativesUBaseDynamicMeshComponent(); \
	friend struct ::Z_Construct_UClass_UBaseDynamicMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYFRAMEWORK_API UClass* ::Z_Construct_UClass_UBaseDynamicMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseDynamicMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryFramework"), Z_Construct_UClass_UBaseDynamicMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UBaseDynamicMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UBaseDynamicMeshComponent*>(this); }


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_131_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYFRAMEWORK_API UBaseDynamicMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseDynamicMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYFRAMEWORK_API, UBaseDynamicMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseDynamicMeshComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseDynamicMeshComponent(UBaseDynamicMeshComponent&&) = delete; \
	UBaseDynamicMeshComponent(const UBaseDynamicMeshComponent&) = delete; \
	GEOMETRYFRAMEWORK_API virtual ~UBaseDynamicMeshComponent();


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_123_PROLOG
#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_131_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_131_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_131_INCLASS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_131_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseDynamicMeshComponent;

// ********** End Class UBaseDynamicMeshComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h

// ********** Begin Enum EDynamicMeshComponentTangentsMode *****************************************
#define FOREACH_ENUM_EDYNAMICMESHCOMPONENTTANGENTSMODE(op) \
	op(EDynamicMeshComponentTangentsMode::NoTangents) \
	op(EDynamicMeshComponentTangentsMode::AutoCalculated) \
	op(EDynamicMeshComponentTangentsMode::ExternallyProvided) \
	op(EDynamicMeshComponentTangentsMode::Default) 

enum class EDynamicMeshComponentTangentsMode : uint8;
template<> struct TIsUEnumClass<EDynamicMeshComponentTangentsMode> { enum { Value = true }; };
template<> GEOMETRYFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EDynamicMeshComponentTangentsMode>();
// ********** End Enum EDynamicMeshComponentTangentsMode *******************************************

// ********** Begin Enum EDynamicMeshComponentColorOverrideMode ************************************
#define FOREACH_ENUM_EDYNAMICMESHCOMPONENTCOLOROVERRIDEMODE(op) \
	op(EDynamicMeshComponentColorOverrideMode::None) \
	op(EDynamicMeshComponentColorOverrideMode::VertexColors) \
	op(EDynamicMeshComponentColorOverrideMode::Polygroups) \
	op(EDynamicMeshComponentColorOverrideMode::Constant) 

enum class EDynamicMeshComponentColorOverrideMode : uint8;
template<> struct TIsUEnumClass<EDynamicMeshComponentColorOverrideMode> { enum { Value = true }; };
template<> GEOMETRYFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EDynamicMeshComponentColorOverrideMode>();
// ********** End Enum EDynamicMeshComponentColorOverrideMode **************************************

// ********** Begin Enum EDynamicMeshDrawPath ******************************************************
#define FOREACH_ENUM_EDYNAMICMESHDRAWPATH(op) \
	op(EDynamicMeshDrawPath::DynamicDraw) \
	op(EDynamicMeshDrawPath::StaticDraw) 

enum class EDynamicMeshDrawPath : uint8;
template<> struct TIsUEnumClass<EDynamicMeshDrawPath> { enum { Value = true }; };
template<> GEOMETRYFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EDynamicMeshDrawPath>();
// ********** End Enum EDynamicMeshDrawPath ********************************************************

// ********** Begin Enum EDynamicMeshComponentDistanceFieldMode ************************************
#define FOREACH_ENUM_EDYNAMICMESHCOMPONENTDISTANCEFIELDMODE(op) \
	op(EDynamicMeshComponentDistanceFieldMode::NoDistanceField) \
	op(EDynamicMeshComponentDistanceFieldMode::AsyncCPUDistanceField) 

enum class EDynamicMeshComponentDistanceFieldMode : uint8;
template<> struct TIsUEnumClass<EDynamicMeshComponentDistanceFieldMode> { enum { Value = true }; };
template<> GEOMETRYFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EDynamicMeshComponentDistanceFieldMode>();
// ********** End Enum EDynamicMeshComponentDistanceFieldMode **************************************

// ********** Begin Enum EDynamicMeshVertexColorTransformMode **************************************
#define FOREACH_ENUM_EDYNAMICMESHVERTEXCOLORTRANSFORMMODE(op) \
	op(EDynamicMeshVertexColorTransformMode::NoTransform) \
	op(EDynamicMeshVertexColorTransformMode::LinearToSRGB) \
	op(EDynamicMeshVertexColorTransformMode::SRGBToLinear) 

enum class EDynamicMeshVertexColorTransformMode : uint8;
template<> struct TIsUEnumClass<EDynamicMeshVertexColorTransformMode> { enum { Value = true }; };
template<> GEOMETRYFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EDynamicMeshVertexColorTransformMode>();
// ********** End Enum EDynamicMeshVertexColorTransformMode ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
