// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionDeriveNormalZ.h"

#ifdef ENGINE_MaterialExpressionDeriveNormalZ_generated_h
#error "MaterialExpressionDeriveNormalZ.generated.h already included, missing '#pragma once' in MaterialExpressionDeriveNormalZ.h"
#endif
#define ENGINE_MaterialExpressionDeriveNormalZ_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionDeriveNormalZ *****************************************
struct Z_Construct_UClass_UMaterialExpressionDeriveNormalZ_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDeriveNormalZ_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDeriveNormalZ_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionDeriveNormalZ(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionDeriveNormalZ_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionDeriveNormalZ_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionDeriveNormalZ, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionDeriveNormalZ_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionDeriveNormalZ)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDeriveNormalZ_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionDeriveNormalZ(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionDeriveNormalZ(UMaterialExpressionDeriveNormalZ&&) = delete; \
	UMaterialExpressionDeriveNormalZ(const UMaterialExpressionDeriveNormalZ&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionDeriveNormalZ); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionDeriveNormalZ); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionDeriveNormalZ) \
	ENGINE_API virtual ~UMaterialExpressionDeriveNormalZ();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDeriveNormalZ_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDeriveNormalZ_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDeriveNormalZ_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDeriveNormalZ_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionDeriveNormalZ;

// ********** End Class UMaterialExpressionDeriveNormalZ *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDeriveNormalZ_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
