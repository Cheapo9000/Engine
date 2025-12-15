// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionUserSceneTexture.h"

#ifdef ENGINE_MaterialExpressionUserSceneTexture_generated_h
#error "MaterialExpressionUserSceneTexture.generated.h already included, missing '#pragma once' in MaterialExpressionUserSceneTexture.h"
#endif
#define ENGINE_MaterialExpressionUserSceneTexture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionUserSceneTexture **************************************
struct Z_Construct_UClass_UMaterialExpressionUserSceneTexture_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionUserSceneTexture_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionUserSceneTexture_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionUserSceneTexture(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionUserSceneTexture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionUserSceneTexture_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionUserSceneTexture, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionUserSceneTexture_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionUserSceneTexture)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionUserSceneTexture_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionUserSceneTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionUserSceneTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionUserSceneTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionUserSceneTexture); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionUserSceneTexture(UMaterialExpressionUserSceneTexture&&) = delete; \
	UMaterialExpressionUserSceneTexture(const UMaterialExpressionUserSceneTexture&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionUserSceneTexture();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionUserSceneTexture_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionUserSceneTexture_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionUserSceneTexture_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionUserSceneTexture_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionUserSceneTexture;

// ********** End Class UMaterialExpressionUserSceneTexture ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionUserSceneTexture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
