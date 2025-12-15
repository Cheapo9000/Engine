// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionDecalDerivative.h"

#ifdef ENGINE_MaterialExpressionDecalDerivative_generated_h
#error "MaterialExpressionDecalDerivative.generated.h already included, missing '#pragma once' in MaterialExpressionDecalDerivative.h"
#endif
#define ENGINE_MaterialExpressionDecalDerivative_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionDecalDerivative ***************************************
struct Z_Construct_UClass_UMaterialExpressionDecalDerivative_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDecalDerivative_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDecalDerivative_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionDecalDerivative(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionDecalDerivative_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionDecalDerivative_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionDecalDerivative, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionDecalDerivative_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionDecalDerivative)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDecalDerivative_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionDecalDerivative(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionDecalDerivative) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionDecalDerivative); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionDecalDerivative); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionDecalDerivative(UMaterialExpressionDecalDerivative&&) = delete; \
	UMaterialExpressionDecalDerivative(const UMaterialExpressionDecalDerivative&) = delete; \
	NO_API virtual ~UMaterialExpressionDecalDerivative();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDecalDerivative_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDecalDerivative_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDecalDerivative_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDecalDerivative_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionDecalDerivative;

// ********** End Class UMaterialExpressionDecalDerivative *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDecalDerivative_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
