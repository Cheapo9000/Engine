// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionLandscapeLayerWeight.h"

#ifdef LANDSCAPE_MaterialExpressionLandscapeLayerWeight_generated_h
#error "MaterialExpressionLandscapeLayerWeight.generated.h already included, missing '#pragma once' in MaterialExpressionLandscapeLayerWeight.h"
#endif
#define LANDSCAPE_MaterialExpressionLandscapeLayerWeight_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionLandscapeLayerWeight **********************************
struct Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerWeight_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionLandscapeLayerWeight(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionLandscapeLayerWeight, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionLandscapeLayerWeight)


#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerWeight_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API UMaterialExpressionLandscapeLayerWeight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLandscapeLayerWeight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, UMaterialExpressionLandscapeLayerWeight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLandscapeLayerWeight); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionLandscapeLayerWeight(UMaterialExpressionLandscapeLayerWeight&&) = delete; \
	UMaterialExpressionLandscapeLayerWeight(const UMaterialExpressionLandscapeLayerWeight&) = delete; \
	LANDSCAPE_API virtual ~UMaterialExpressionLandscapeLayerWeight();


#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerWeight_h_17_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerWeight_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerWeight_h_20_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerWeight_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionLandscapeLayerWeight;

// ********** End Class UMaterialExpressionLandscapeLayerWeight ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerWeight_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
