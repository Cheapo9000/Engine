// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionFontSample.h"

#ifdef ENGINE_MaterialExpressionFontSample_generated_h
#error "MaterialExpressionFontSample.generated.h already included, missing '#pragma once' in MaterialExpressionFontSample.h"
#endif
#define ENGINE_MaterialExpressionFontSample_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionFontSample ********************************************
struct Z_Construct_UClass_UMaterialExpressionFontSample_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFontSample_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSample_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionFontSample(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionFontSample_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionFontSample_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionFontSample, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionFontSample_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionFontSample)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSample_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionFontSample(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionFontSample) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionFontSample); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionFontSample); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionFontSample(UMaterialExpressionFontSample&&) = delete; \
	UMaterialExpressionFontSample(const UMaterialExpressionFontSample&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionFontSample();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSample_h_26_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSample_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSample_h_29_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSample_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionFontSample;

// ********** End Class UMaterialExpressionFontSample **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSample_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
