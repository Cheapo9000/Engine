// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionNormalize.h"

#ifdef ENGINE_MaterialExpressionNormalize_generated_h
#error "MaterialExpressionNormalize.generated.h already included, missing '#pragma once' in MaterialExpressionNormalize.h"
#endif
#define ENGINE_MaterialExpressionNormalize_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionNormalize *********************************************
struct Z_Construct_UClass_UMaterialExpressionNormalize_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNormalize_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNormalize_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionNormalize(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionNormalize_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionNormalize_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionNormalize, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionNormalize_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionNormalize)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNormalize_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionNormalize(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionNormalize(UMaterialExpressionNormalize&&) = delete; \
	UMaterialExpressionNormalize(const UMaterialExpressionNormalize&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionNormalize); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionNormalize); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionNormalize) \
	ENGINE_API virtual ~UMaterialExpressionNormalize();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNormalize_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNormalize_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNormalize_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNormalize_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionNormalize;

// ********** End Class UMaterialExpressionNormalize ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNormalize_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
