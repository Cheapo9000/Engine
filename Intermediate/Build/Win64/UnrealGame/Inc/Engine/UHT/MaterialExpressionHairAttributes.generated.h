// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionHairAttributes.h"

#ifdef ENGINE_MaterialExpressionHairAttributes_generated_h
#error "MaterialExpressionHairAttributes.generated.h already included, missing '#pragma once' in MaterialExpressionHairAttributes.h"
#endif
#define ENGINE_MaterialExpressionHairAttributes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionHairAttributes ****************************************
struct Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionHairAttributes_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionHairAttributes_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionHairAttributes(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionHairAttributes_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionHairAttributes, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionHairAttributes_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionHairAttributes)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionHairAttributes_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionHairAttributes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionHairAttributes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionHairAttributes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionHairAttributes); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionHairAttributes(UMaterialExpressionHairAttributes&&) = delete; \
	UMaterialExpressionHairAttributes(const UMaterialExpressionHairAttributes&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionHairAttributes();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionHairAttributes_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionHairAttributes_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionHairAttributes_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionHairAttributes_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionHairAttributes;

// ********** End Class UMaterialExpressionHairAttributes ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionHairAttributes_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
