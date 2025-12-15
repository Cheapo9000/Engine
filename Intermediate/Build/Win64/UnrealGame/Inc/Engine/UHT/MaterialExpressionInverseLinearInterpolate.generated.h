// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionInverseLinearInterpolate.h"

#ifdef ENGINE_MaterialExpressionInverseLinearInterpolate_generated_h
#error "MaterialExpressionInverseLinearInterpolate.generated.h already included, missing '#pragma once' in MaterialExpressionInverseLinearInterpolate.h"
#endif
#define ENGINE_MaterialExpressionInverseLinearInterpolate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionInverseLinearInterpolate ******************************
struct Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionInverseLinearInterpolate_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionInverseLinearInterpolate(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionInverseLinearInterpolate, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionInverseLinearInterpolate)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionInverseLinearInterpolate_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionInverseLinearInterpolate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionInverseLinearInterpolate(UMaterialExpressionInverseLinearInterpolate&&) = delete; \
	UMaterialExpressionInverseLinearInterpolate(const UMaterialExpressionInverseLinearInterpolate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionInverseLinearInterpolate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionInverseLinearInterpolate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionInverseLinearInterpolate) \
	ENGINE_API virtual ~UMaterialExpressionInverseLinearInterpolate();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionInverseLinearInterpolate_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionInverseLinearInterpolate_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionInverseLinearInterpolate_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionInverseLinearInterpolate_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionInverseLinearInterpolate;

// ********** End Class UMaterialExpressionInverseLinearInterpolate ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionInverseLinearInterpolate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
