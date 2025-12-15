// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionParticleRandom.h"

#ifdef ENGINE_MaterialExpressionParticleRandom_generated_h
#error "MaterialExpressionParticleRandom.generated.h already included, missing '#pragma once' in MaterialExpressionParticleRandom.h"
#endif
#define ENGINE_MaterialExpressionParticleRandom_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionParticleRandom ****************************************
struct Z_Construct_UClass_UMaterialExpressionParticleRandom_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleRandom_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRandom_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionParticleRandom(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionParticleRandom_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionParticleRandom_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionParticleRandom, UMaterialExpressionExternalCodeBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionParticleRandom_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionParticleRandom)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRandom_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionParticleRandom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionParticleRandom(UMaterialExpressionParticleRandom&&) = delete; \
	UMaterialExpressionParticleRandom(const UMaterialExpressionParticleRandom&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionParticleRandom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionParticleRandom); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionParticleRandom) \
	NO_API virtual ~UMaterialExpressionParticleRandom();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRandom_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRandom_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRandom_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRandom_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionParticleRandom;

// ********** End Class UMaterialExpressionParticleRandom ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRandom_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
