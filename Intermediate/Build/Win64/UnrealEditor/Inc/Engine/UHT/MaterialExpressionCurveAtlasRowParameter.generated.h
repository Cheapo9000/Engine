// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionCurveAtlasRowParameter.h"

#ifdef ENGINE_MaterialExpressionCurveAtlasRowParameter_generated_h
#error "MaterialExpressionCurveAtlasRowParameter.generated.h already included, missing '#pragma once' in MaterialExpressionCurveAtlasRowParameter.h"
#endif
#define ENGINE_MaterialExpressionCurveAtlasRowParameter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionCurveAtlasRowParameter ********************************
struct Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCurveAtlasRowParameter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionCurveAtlasRowParameter(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionCurveAtlasRowParameter, UMaterialExpressionScalarParameter, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionCurveAtlasRowParameter)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCurveAtlasRowParameter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionCurveAtlasRowParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionCurveAtlasRowParameter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionCurveAtlasRowParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionCurveAtlasRowParameter); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionCurveAtlasRowParameter(UMaterialExpressionCurveAtlasRowParameter&&) = delete; \
	UMaterialExpressionCurveAtlasRowParameter(const UMaterialExpressionCurveAtlasRowParameter&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionCurveAtlasRowParameter();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCurveAtlasRowParameter_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCurveAtlasRowParameter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCurveAtlasRowParameter_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCurveAtlasRowParameter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionCurveAtlasRowParameter;

// ********** End Class UMaterialExpressionCurveAtlasRowParameter **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCurveAtlasRowParameter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
