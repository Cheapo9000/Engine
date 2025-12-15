// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSceneTexture.h"

#ifdef ENGINE_MaterialExpressionSceneTexture_generated_h
#error "MaterialExpressionSceneTexture.generated.h already included, missing '#pragma once' in MaterialExpressionSceneTexture.h"
#endif
#define ENGINE_MaterialExpressionSceneTexture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionSceneTexture ******************************************
struct Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSceneTexture_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneTexture_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSceneTexture(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionSceneTexture_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionSceneTexture, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionSceneTexture_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionSceneTexture)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneTexture_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionSceneTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSceneTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionSceneTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSceneTexture); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionSceneTexture(UMaterialExpressionSceneTexture&&) = delete; \
	UMaterialExpressionSceneTexture(const UMaterialExpressionSceneTexture&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionSceneTexture();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneTexture_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneTexture_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneTexture_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneTexture_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionSceneTexture;

// ********** End Class UMaterialExpressionSceneTexture ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneTexture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
