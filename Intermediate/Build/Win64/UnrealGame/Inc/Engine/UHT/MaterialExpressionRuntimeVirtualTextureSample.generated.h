// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionRuntimeVirtualTextureSample.h"

#ifdef ENGINE_MaterialExpressionRuntimeVirtualTextureSample_generated_h
#error "MaterialExpressionRuntimeVirtualTextureSample.generated.h already included, missing '#pragma once' in MaterialExpressionRuntimeVirtualTextureSample.h"
#endif
#define ENGINE_MaterialExpressionRuntimeVirtualTextureSample_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionRuntimeVirtualTextureSample ***************************
struct Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRuntimeVirtualTextureSample_h_106_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionRuntimeVirtualTextureSample(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionRuntimeVirtualTextureSample, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionRuntimeVirtualTextureSample)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRuntimeVirtualTextureSample_h_106_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionRuntimeVirtualTextureSample(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionRuntimeVirtualTextureSample) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionRuntimeVirtualTextureSample); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionRuntimeVirtualTextureSample); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionRuntimeVirtualTextureSample(UMaterialExpressionRuntimeVirtualTextureSample&&) = delete; \
	UMaterialExpressionRuntimeVirtualTextureSample(const UMaterialExpressionRuntimeVirtualTextureSample&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionRuntimeVirtualTextureSample();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRuntimeVirtualTextureSample_h_103_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRuntimeVirtualTextureSample_h_106_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRuntimeVirtualTextureSample_h_106_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRuntimeVirtualTextureSample_h_106_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionRuntimeVirtualTextureSample;

// ********** End Class UMaterialExpressionRuntimeVirtualTextureSample *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRuntimeVirtualTextureSample_h

// ********** Begin Enum ERuntimeVirtualTextureMipValueMode ****************************************
#define FOREACH_ENUM_ERUNTIMEVIRTUALTEXTUREMIPVALUEMODE(op) \
	op(RVTMVM_None) \
	op(RVTMVM_MipLevel) \
	op(RVTMVM_MipBias) \
	op(RVTMVM_RecalculateDerivatives) \
	op(RVTMVM_DerivativeUV) \
	op(RVTMVM_DerivativeWorld) 

enum ERuntimeVirtualTextureMipValueMode : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERuntimeVirtualTextureMipValueMode>();
// ********** End Enum ERuntimeVirtualTextureMipValueMode ******************************************

// ********** Begin Enum ERuntimeVirtualTextureTextureAddressMode **********************************
#define FOREACH_ENUM_ERUNTIMEVIRTUALTEXTURETEXTUREADDRESSMODE(op) \
	op(RVTTA_Clamp) \
	op(RVTTA_Wrap) 

enum ERuntimeVirtualTextureTextureAddressMode : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERuntimeVirtualTextureTextureAddressMode>();
// ********** End Enum ERuntimeVirtualTextureTextureAddressMode ************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
