// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionParticleRadius.h"

#ifdef ENGINE_MaterialExpressionParticleRadius_generated_h
#error "MaterialExpressionParticleRadius.generated.h already included, missing '#pragma once' in MaterialExpressionParticleRadius.h"
#endif
#define ENGINE_MaterialExpressionParticleRadius_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionParticleRadius ****************************************
struct Z_Construct_UClass_UMaterialExpressionParticleRadius_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleRadius_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRadius_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionParticleRadius(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionParticleRadius_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionParticleRadius_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionParticleRadius, UMaterialExpressionExternalCodeBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionParticleRadius_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionParticleRadius)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRadius_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionParticleRadius(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionParticleRadius(UMaterialExpressionParticleRadius&&) = delete; \
	UMaterialExpressionParticleRadius(const UMaterialExpressionParticleRadius&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionParticleRadius); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionParticleRadius); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionParticleRadius) \
	NO_API virtual ~UMaterialExpressionParticleRadius();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRadius_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRadius_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRadius_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRadius_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionParticleRadius;

// ********** End Class UMaterialExpressionParticleRadius ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRadius_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
