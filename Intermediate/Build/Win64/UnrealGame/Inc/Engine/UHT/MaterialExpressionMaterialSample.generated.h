// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionMaterialSample.h"

#ifdef ENGINE_MaterialExpressionMaterialSample_generated_h
#error "MaterialExpressionMaterialSample.generated.h already included, missing '#pragma once' in MaterialExpressionMaterialSample.h"
#endif
#define ENGINE_MaterialExpressionMaterialSample_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionMaterialSample ****************************************
struct Z_Construct_UClass_UMaterialExpressionMaterialSample_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialSample_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Internal_Materials_MaterialExpressionMaterialSample_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionMaterialSample(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionMaterialSample_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionMaterialSample_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionMaterialSample, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionMaterialSample_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionMaterialSample)


#define FID_Engine_Source_Runtime_Engine_Internal_Materials_MaterialExpressionMaterialSample_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionMaterialSample(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionMaterialSample) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionMaterialSample); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionMaterialSample); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionMaterialSample(UMaterialExpressionMaterialSample&&) = delete; \
	UMaterialExpressionMaterialSample(const UMaterialExpressionMaterialSample&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionMaterialSample();


#define FID_Engine_Source_Runtime_Engine_Internal_Materials_MaterialExpressionMaterialSample_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Internal_Materials_MaterialExpressionMaterialSample_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Internal_Materials_MaterialExpressionMaterialSample_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Internal_Materials_MaterialExpressionMaterialSample_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionMaterialSample;

// ********** End Class UMaterialExpressionMaterialSample ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Internal_Materials_MaterialExpressionMaterialSample_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
