// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionHsvToRgb.h"

#ifdef ENGINE_MaterialExpressionHsvToRgb_generated_h
#error "MaterialExpressionHsvToRgb.generated.h already included, missing '#pragma once' in MaterialExpressionHsvToRgb.h"
#endif
#define ENGINE_MaterialExpressionHsvToRgb_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionHsvToRgb **********************************************
struct Z_Construct_UClass_UMaterialExpressionHsvToRgb_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionHsvToRgb_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionHsvToRgb_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionHsvToRgb(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionHsvToRgb_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionHsvToRgb_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionHsvToRgb, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionHsvToRgb_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionHsvToRgb)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionHsvToRgb_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionHsvToRgb(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionHsvToRgb(UMaterialExpressionHsvToRgb&&) = delete; \
	UMaterialExpressionHsvToRgb(const UMaterialExpressionHsvToRgb&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionHsvToRgb); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionHsvToRgb); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionHsvToRgb) \
	ENGINE_API virtual ~UMaterialExpressionHsvToRgb();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionHsvToRgb_h_7_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionHsvToRgb_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionHsvToRgb_h_10_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionHsvToRgb_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionHsvToRgb;

// ********** End Class UMaterialExpressionHsvToRgb ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionHsvToRgb_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
