// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionMin.h"

#ifdef ENGINE_MaterialExpressionMin_generated_h
#error "MaterialExpressionMin.generated.h already included, missing '#pragma once' in MaterialExpressionMin.h"
#endif
#define ENGINE_MaterialExpressionMin_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionMin ***************************************************
struct Z_Construct_UClass_UMaterialExpressionMin_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMin_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMin_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionMin(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionMin_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionMin_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionMin, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionMin_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionMin)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMin_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionMin(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionMin(UMaterialExpressionMin&&) = delete; \
	UMaterialExpressionMin(const UMaterialExpressionMin&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionMin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionMin); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionMin) \
	ENGINE_API virtual ~UMaterialExpressionMin();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMin_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMin_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMin_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMin_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionMin;

// ********** End Class UMaterialExpressionMin *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMin_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
