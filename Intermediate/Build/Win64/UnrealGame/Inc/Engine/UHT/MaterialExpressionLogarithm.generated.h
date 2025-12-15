// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionLogarithm.h"

#ifdef ENGINE_MaterialExpressionLogarithm_generated_h
#error "MaterialExpressionLogarithm.generated.h already included, missing '#pragma once' in MaterialExpressionLogarithm.h"
#endif
#define ENGINE_MaterialExpressionLogarithm_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionLogarithm *********************************************
struct Z_Construct_UClass_UMaterialExpressionLogarithm_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLogarithm_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLogarithm_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionLogarithm(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionLogarithm_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionLogarithm_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionLogarithm, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionLogarithm_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionLogarithm)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLogarithm_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionLogarithm(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionLogarithm(UMaterialExpressionLogarithm&&) = delete; \
	UMaterialExpressionLogarithm(const UMaterialExpressionLogarithm&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionLogarithm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLogarithm); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLogarithm) \
	ENGINE_API virtual ~UMaterialExpressionLogarithm();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLogarithm_h_9_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLogarithm_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLogarithm_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLogarithm_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionLogarithm;

// ********** End Class UMaterialExpressionLogarithm ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLogarithm_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
