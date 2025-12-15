// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSceneDepth.h"

#ifdef ENGINE_MaterialExpressionSceneDepth_generated_h
#error "MaterialExpressionSceneDepth.generated.h already included, missing '#pragma once' in MaterialExpressionSceneDepth.h"
#endif
#define ENGINE_MaterialExpressionSceneDepth_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionSceneDepth ********************************************
struct Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSceneDepth_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneDepth_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSceneDepth(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionSceneDepth_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionSceneDepth, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionSceneDepth_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionSceneDepth)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneDepth_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionSceneDepth(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSceneDepth) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionSceneDepth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSceneDepth); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionSceneDepth(UMaterialExpressionSceneDepth&&) = delete; \
	UMaterialExpressionSceneDepth(const UMaterialExpressionSceneDepth&) = delete; \
	NO_API virtual ~UMaterialExpressionSceneDepth();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneDepth_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneDepth_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneDepth_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneDepth_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionSceneDepth;

// ********** End Class UMaterialExpressionSceneDepth **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneDepth_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
