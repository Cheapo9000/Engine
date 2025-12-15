// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionParticleSubUV.h"

#ifdef ENGINE_MaterialExpressionParticleSubUV_generated_h
#error "MaterialExpressionParticleSubUV.generated.h already included, missing '#pragma once' in MaterialExpressionParticleSubUV.h"
#endif
#define ENGINE_MaterialExpressionParticleSubUV_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionParticleSubUV *****************************************
struct Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleSubUV_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleSubUV_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionParticleSubUV(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionParticleSubUV_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionParticleSubUV, UMaterialExpressionTextureSample, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionParticleSubUV_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionParticleSubUV)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleSubUV_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionParticleSubUV(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionParticleSubUV(UMaterialExpressionParticleSubUV&&) = delete; \
	UMaterialExpressionParticleSubUV(const UMaterialExpressionParticleSubUV&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionParticleSubUV); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionParticleSubUV); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionParticleSubUV) \
	ENGINE_API virtual ~UMaterialExpressionParticleSubUV();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleSubUV_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleSubUV_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleSubUV_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleSubUV_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionParticleSubUV;

// ********** End Class UMaterialExpressionParticleSubUV *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleSubUV_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
