// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionCosine.h"

#ifdef ENGINE_MaterialExpressionCosine_generated_h
#error "MaterialExpressionCosine.generated.h already included, missing '#pragma once' in MaterialExpressionCosine.h"
#endif
#define ENGINE_MaterialExpressionCosine_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionCosine ************************************************
struct Z_Construct_UClass_UMaterialExpressionCosine_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCosine_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCosine_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionCosine(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionCosine_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionCosine_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionCosine, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionCosine_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionCosine)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCosine_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionCosine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionCosine(UMaterialExpressionCosine&&) = delete; \
	UMaterialExpressionCosine(const UMaterialExpressionCosine&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionCosine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionCosine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionCosine) \
	ENGINE_API virtual ~UMaterialExpressionCosine();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCosine_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCosine_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCosine_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCosine_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionCosine;

// ********** End Class UMaterialExpressionCosine **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCosine_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
