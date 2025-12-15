// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionArccosine.h"

#ifdef ENGINE_MaterialExpressionArccosine_generated_h
#error "MaterialExpressionArccosine.generated.h already included, missing '#pragma once' in MaterialExpressionArccosine.h"
#endif
#define ENGINE_MaterialExpressionArccosine_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionArccosine *********************************************
struct Z_Construct_UClass_UMaterialExpressionArccosine_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionArccosine_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArccosine_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionArccosine(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionArccosine_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionArccosine_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionArccosine, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionArccosine_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionArccosine)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArccosine_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionArccosine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionArccosine(UMaterialExpressionArccosine&&) = delete; \
	UMaterialExpressionArccosine(const UMaterialExpressionArccosine&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionArccosine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionArccosine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionArccosine) \
	ENGINE_API virtual ~UMaterialExpressionArccosine();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArccosine_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArccosine_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArccosine_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArccosine_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionArccosine;

// ********** End Class UMaterialExpressionArccosine ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArccosine_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
