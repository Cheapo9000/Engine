// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionDotProduct.h"

#ifdef ENGINE_MaterialExpressionDotProduct_generated_h
#error "MaterialExpressionDotProduct.generated.h already included, missing '#pragma once' in MaterialExpressionDotProduct.h"
#endif
#define ENGINE_MaterialExpressionDotProduct_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionDotProduct ********************************************
struct Z_Construct_UClass_UMaterialExpressionDotProduct_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDotProduct_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDotProduct_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionDotProduct(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionDotProduct_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionDotProduct_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionDotProduct, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionDotProduct_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionDotProduct)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDotProduct_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionDotProduct(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionDotProduct(UMaterialExpressionDotProduct&&) = delete; \
	UMaterialExpressionDotProduct(const UMaterialExpressionDotProduct&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionDotProduct); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionDotProduct); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionDotProduct) \
	ENGINE_API virtual ~UMaterialExpressionDotProduct();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDotProduct_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDotProduct_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDotProduct_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDotProduct_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionDotProduct;

// ********** End Class UMaterialExpressionDotProduct **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDotProduct_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
