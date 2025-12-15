// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSingleLayerWaterMaterialOutput.h"

#ifdef ENGINE_MaterialExpressionSingleLayerWaterMaterialOutput_generated_h
#error "MaterialExpressionSingleLayerWaterMaterialOutput.generated.h already included, missing '#pragma once' in MaterialExpressionSingleLayerWaterMaterialOutput.h"
#endif
#define ENGINE_MaterialExpressionSingleLayerWaterMaterialOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionSingleLayerWaterMaterialOutput ************************
struct Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSingleLayerWaterMaterialOutput_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSingleLayerWaterMaterialOutput(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionSingleLayerWaterMaterialOutput, UMaterialExpressionCustomOutput, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionSingleLayerWaterMaterialOutput)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSingleLayerWaterMaterialOutput_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionSingleLayerWaterMaterialOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSingleLayerWaterMaterialOutput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionSingleLayerWaterMaterialOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSingleLayerWaterMaterialOutput); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionSingleLayerWaterMaterialOutput(UMaterialExpressionSingleLayerWaterMaterialOutput&&) = delete; \
	UMaterialExpressionSingleLayerWaterMaterialOutput(const UMaterialExpressionSingleLayerWaterMaterialOutput&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionSingleLayerWaterMaterialOutput();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSingleLayerWaterMaterialOutput_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSingleLayerWaterMaterialOutput_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSingleLayerWaterMaterialOutput_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSingleLayerWaterMaterialOutput_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionSingleLayerWaterMaterialOutput;

// ********** End Class UMaterialExpressionSingleLayerWaterMaterialOutput **************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSingleLayerWaterMaterialOutput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
