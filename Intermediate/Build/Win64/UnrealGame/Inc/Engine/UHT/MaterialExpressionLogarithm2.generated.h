// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionLogarithm2.h"

#ifdef ENGINE_MaterialExpressionLogarithm2_generated_h
#error "MaterialExpressionLogarithm2.generated.h already included, missing '#pragma once' in MaterialExpressionLogarithm2.h"
#endif
#define ENGINE_MaterialExpressionLogarithm2_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionLogarithm2 ********************************************
struct Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLogarithm2_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLogarithm2_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionLogarithm2(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionLogarithm2_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionLogarithm2, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionLogarithm2_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionLogarithm2)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLogarithm2_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionLogarithm2(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionLogarithm2(UMaterialExpressionLogarithm2&&) = delete; \
	UMaterialExpressionLogarithm2(const UMaterialExpressionLogarithm2&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionLogarithm2); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLogarithm2); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLogarithm2) \
	ENGINE_API virtual ~UMaterialExpressionLogarithm2();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLogarithm2_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLogarithm2_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLogarithm2_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLogarithm2_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionLogarithm2;

// ********** End Class UMaterialExpressionLogarithm2 **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLogarithm2_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
