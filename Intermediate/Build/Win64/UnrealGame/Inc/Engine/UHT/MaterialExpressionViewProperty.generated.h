// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionViewProperty.h"

#ifdef ENGINE_MaterialExpressionViewProperty_generated_h
#error "MaterialExpressionViewProperty.generated.h already included, missing '#pragma once' in MaterialExpressionViewProperty.h"
#endif
#define ENGINE_MaterialExpressionViewProperty_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionViewProperty ******************************************
struct Z_Construct_UClass_UMaterialExpressionViewProperty_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionViewProperty_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionViewProperty_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionViewProperty(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionViewProperty_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionViewProperty_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionViewProperty, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionViewProperty_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionViewProperty)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionViewProperty_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionViewProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionViewProperty) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionViewProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionViewProperty); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionViewProperty(UMaterialExpressionViewProperty&&) = delete; \
	UMaterialExpressionViewProperty(const UMaterialExpressionViewProperty&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionViewProperty();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionViewProperty_h_58_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionViewProperty_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionViewProperty_h_61_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionViewProperty_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionViewProperty;

// ********** End Class UMaterialExpressionViewProperty ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionViewProperty_h

// ********** Begin Enum EMaterialExposedViewProperty **********************************************
#define FOREACH_ENUM_EMATERIALEXPOSEDVIEWPROPERTY(op) \
	op(MEVP_BufferSize) \
	op(MEVP_FieldOfView) \
	op(MEVP_TanHalfFieldOfView) \
	op(MEVP_ViewSize) \
	op(MEVP_WorldSpaceViewPosition) \
	op(MEVP_WorldSpaceCameraPosition) \
	op(MEVP_ViewportOffset) \
	op(MEVP_TemporalSampleCount) \
	op(MEVP_TemporalSampleIndex) \
	op(MEVP_TemporalSampleOffset) \
	op(MEVP_RuntimeVirtualTextureOutputLevel) \
	op(MEVP_RuntimeVirtualTextureOutputDerivative) \
	op(MEVP_PreExposure) \
	op(MEVP_RuntimeVirtualTextureMaxLevel) \
	op(MEVP_ResolutionFraction) \
	op(MEVP_PostVolumeUserFlags) \
	op(MEVP_FirstPersonFieldOfView) \
	op(MEVP_FirstPersonTanHalfFieldOfView) \
	op(MEVP_FirstPersonScale) \
	op(MEVP_NearPlane) 

enum EMaterialExposedViewProperty : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialExposedViewProperty>();
// ********** End Enum EMaterialExposedViewProperty ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
