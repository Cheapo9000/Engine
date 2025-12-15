// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSetMaterialAttributes.h"

#ifdef ENGINE_MaterialExpressionSetMaterialAttributes_generated_h
#error "MaterialExpressionSetMaterialAttributes.generated.h already included, missing '#pragma once' in MaterialExpressionSetMaterialAttributes.h"
#endif
#define ENGINE_MaterialExpressionSetMaterialAttributes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionSetMaterialAttributes *********************************
struct Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSetMaterialAttributes_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSetMaterialAttributes(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionSetMaterialAttributes, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionSetMaterialAttributes)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSetMaterialAttributes_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionSetMaterialAttributes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSetMaterialAttributes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionSetMaterialAttributes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSetMaterialAttributes); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionSetMaterialAttributes(UMaterialExpressionSetMaterialAttributes&&) = delete; \
	UMaterialExpressionSetMaterialAttributes(const UMaterialExpressionSetMaterialAttributes&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionSetMaterialAttributes();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSetMaterialAttributes_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSetMaterialAttributes_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSetMaterialAttributes_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSetMaterialAttributes_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionSetMaterialAttributes;

// ********** End Class UMaterialExpressionSetMaterialAttributes ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSetMaterialAttributes_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
