// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionRgbToHsv.h"

#ifdef ENGINE_MaterialExpressionRgbToHsv_generated_h
#error "MaterialExpressionRgbToHsv.generated.h already included, missing '#pragma once' in MaterialExpressionRgbToHsv.h"
#endif
#define ENGINE_MaterialExpressionRgbToHsv_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionRgbToHsv **********************************************
struct Z_Construct_UClass_UMaterialExpressionRgbToHsv_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRgbToHsv_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRgbToHsv_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionRgbToHsv(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionRgbToHsv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionRgbToHsv_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionRgbToHsv, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionRgbToHsv_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionRgbToHsv)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRgbToHsv_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionRgbToHsv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionRgbToHsv(UMaterialExpressionRgbToHsv&&) = delete; \
	UMaterialExpressionRgbToHsv(const UMaterialExpressionRgbToHsv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionRgbToHsv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionRgbToHsv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionRgbToHsv) \
	ENGINE_API virtual ~UMaterialExpressionRgbToHsv();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRgbToHsv_h_7_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRgbToHsv_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRgbToHsv_h_10_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRgbToHsv_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionRgbToHsv;

// ********** End Class UMaterialExpressionRgbToHsv ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRgbToHsv_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
