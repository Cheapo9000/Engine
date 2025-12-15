// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionShadingModel.h"

#ifdef ENGINE_MaterialExpressionShadingModel_generated_h
#error "MaterialExpressionShadingModel.generated.h already included, missing '#pragma once' in MaterialExpressionShadingModel.h"
#endif
#define ENGINE_MaterialExpressionShadingModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionShadingModel ******************************************
struct Z_Construct_UClass_UMaterialExpressionShadingModel_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionShadingModel_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShadingModel_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionShadingModel(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionShadingModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionShadingModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionShadingModel, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionShadingModel_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionShadingModel)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShadingModel_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionShadingModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionShadingModel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionShadingModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionShadingModel); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionShadingModel(UMaterialExpressionShadingModel&&) = delete; \
	UMaterialExpressionShadingModel(const UMaterialExpressionShadingModel&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionShadingModel();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShadingModel_h_23_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShadingModel_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShadingModel_h_26_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShadingModel_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionShadingModel;

// ********** End Class UMaterialExpressionShadingModel ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShadingModel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
