// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionRotator.h"

#ifdef ENGINE_MaterialExpressionRotator_generated_h
#error "MaterialExpressionRotator.generated.h already included, missing '#pragma once' in MaterialExpressionRotator.h"
#endif
#define ENGINE_MaterialExpressionRotator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionRotator ***********************************************
struct Z_Construct_UClass_UMaterialExpressionRotator_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRotator_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRotator_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionRotator(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionRotator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionRotator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionRotator, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionRotator_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionRotator)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRotator_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionRotator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionRotator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionRotator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionRotator); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionRotator(UMaterialExpressionRotator&&) = delete; \
	UMaterialExpressionRotator(const UMaterialExpressionRotator&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionRotator();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRotator_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRotator_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRotator_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRotator_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionRotator;

// ********** End Class UMaterialExpressionRotator *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRotator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
