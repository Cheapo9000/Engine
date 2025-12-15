// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSceneTexelSize.h"

#ifdef ENGINE_MaterialExpressionSceneTexelSize_generated_h
#error "MaterialExpressionSceneTexelSize.generated.h already included, missing '#pragma once' in MaterialExpressionSceneTexelSize.h"
#endif
#define ENGINE_MaterialExpressionSceneTexelSize_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionSceneTexelSize ****************************************
struct Z_Construct_UClass_UMaterialExpressionSceneTexelSize_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSceneTexelSize_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneTexelSize_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSceneTexelSize(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionSceneTexelSize_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionSceneTexelSize_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionSceneTexelSize, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionSceneTexelSize_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionSceneTexelSize)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneTexelSize_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionSceneTexelSize(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionSceneTexelSize(UMaterialExpressionSceneTexelSize&&) = delete; \
	UMaterialExpressionSceneTexelSize(const UMaterialExpressionSceneTexelSize&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionSceneTexelSize); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSceneTexelSize); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSceneTexelSize) \
	NO_API virtual ~UMaterialExpressionSceneTexelSize();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneTexelSize_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneTexelSize_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneTexelSize_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneTexelSize_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionSceneTexelSize;

// ********** End Class UMaterialExpressionSceneTexelSize ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneTexelSize_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
