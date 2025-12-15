// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionFontSampleParameter.h"

#ifdef ENGINE_MaterialExpressionFontSampleParameter_generated_h
#error "MaterialExpressionFontSampleParameter.generated.h already included, missing '#pragma once' in MaterialExpressionFontSampleParameter.h"
#endif
#define ENGINE_MaterialExpressionFontSampleParameter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionFontSampleParameter ***********************************
struct Z_Construct_UClass_UMaterialExpressionFontSampleParameter_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFontSampleParameter_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSampleParameter_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionFontSampleParameter(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionFontSampleParameter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionFontSampleParameter_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionFontSampleParameter, UMaterialExpressionFontSample, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionFontSampleParameter_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionFontSampleParameter)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSampleParameter_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionFontSampleParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionFontSampleParameter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionFontSampleParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionFontSampleParameter); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionFontSampleParameter(UMaterialExpressionFontSampleParameter&&) = delete; \
	UMaterialExpressionFontSampleParameter(const UMaterialExpressionFontSampleParameter&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionFontSampleParameter();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSampleParameter_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSampleParameter_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSampleParameter_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSampleParameter_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionFontSampleParameter;

// ********** End Class UMaterialExpressionFontSampleParameter *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSampleParameter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
