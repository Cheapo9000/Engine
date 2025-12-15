// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionParticleSpeed.h"

#ifdef ENGINE_MaterialExpressionParticleSpeed_generated_h
#error "MaterialExpressionParticleSpeed.generated.h already included, missing '#pragma once' in MaterialExpressionParticleSpeed.h"
#endif
#define ENGINE_MaterialExpressionParticleSpeed_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionParticleSpeed *****************************************
struct Z_Construct_UClass_UMaterialExpressionParticleSpeed_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleSpeed_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleSpeed_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionParticleSpeed(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionParticleSpeed_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionParticleSpeed_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionParticleSpeed, UMaterialExpressionExternalCodeBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionParticleSpeed_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionParticleSpeed)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleSpeed_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionParticleSpeed(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionParticleSpeed(UMaterialExpressionParticleSpeed&&) = delete; \
	UMaterialExpressionParticleSpeed(const UMaterialExpressionParticleSpeed&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionParticleSpeed); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionParticleSpeed); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionParticleSpeed) \
	NO_API virtual ~UMaterialExpressionParticleSpeed();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleSpeed_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleSpeed_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleSpeed_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleSpeed_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionParticleSpeed;

// ********** End Class UMaterialExpressionParticleSpeed *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleSpeed_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
