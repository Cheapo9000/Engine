// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionTextureSampleParameterSubUV.h"

#ifdef ENGINE_MaterialExpressionTextureSampleParameterSubUV_generated_h
#error "MaterialExpressionTextureSampleParameterSubUV.generated.h already included, missing '#pragma once' in MaterialExpressionTextureSampleParameterSubUV.h"
#endif
#define ENGINE_MaterialExpressionTextureSampleParameterSubUV_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionTextureSampleParameterSubUV ***************************
struct Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSampleParameterSubUV_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTextureSampleParameterSubUV(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionTextureSampleParameterSubUV, UMaterialExpressionTextureSampleParameter2D, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionTextureSampleParameterSubUV)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSampleParameterSubUV_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTextureSampleParameterSubUV(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionTextureSampleParameterSubUV(UMaterialExpressionTextureSampleParameterSubUV&&) = delete; \
	UMaterialExpressionTextureSampleParameterSubUV(const UMaterialExpressionTextureSampleParameterSubUV&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTextureSampleParameterSubUV); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTextureSampleParameterSubUV); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTextureSampleParameterSubUV) \
	ENGINE_API virtual ~UMaterialExpressionTextureSampleParameterSubUV();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSampleParameterSubUV_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSampleParameterSubUV_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSampleParameterSubUV_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSampleParameterSubUV_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionTextureSampleParameterSubUV;

// ********** End Class UMaterialExpressionTextureSampleParameterSubUV *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSampleParameterSubUV_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
