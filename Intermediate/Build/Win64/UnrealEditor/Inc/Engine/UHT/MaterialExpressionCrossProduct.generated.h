// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionCrossProduct.h"

#ifdef ENGINE_MaterialExpressionCrossProduct_generated_h
#error "MaterialExpressionCrossProduct.generated.h already included, missing '#pragma once' in MaterialExpressionCrossProduct.h"
#endif
#define ENGINE_MaterialExpressionCrossProduct_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionCrossProduct ******************************************
struct Z_Construct_UClass_UMaterialExpressionCrossProduct_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCrossProduct_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCrossProduct_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionCrossProduct(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionCrossProduct_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionCrossProduct_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionCrossProduct, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionCrossProduct_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionCrossProduct)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCrossProduct_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionCrossProduct(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionCrossProduct(UMaterialExpressionCrossProduct&&) = delete; \
	UMaterialExpressionCrossProduct(const UMaterialExpressionCrossProduct&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionCrossProduct); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionCrossProduct); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionCrossProduct) \
	ENGINE_API virtual ~UMaterialExpressionCrossProduct();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCrossProduct_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCrossProduct_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCrossProduct_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCrossProduct_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionCrossProduct;

// ********** End Class UMaterialExpressionCrossProduct ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCrossProduct_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
