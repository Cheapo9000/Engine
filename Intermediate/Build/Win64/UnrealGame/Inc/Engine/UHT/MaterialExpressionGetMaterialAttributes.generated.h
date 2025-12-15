// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionGetMaterialAttributes.h"

#ifdef ENGINE_MaterialExpressionGetMaterialAttributes_generated_h
#error "MaterialExpressionGetMaterialAttributes.generated.h already included, missing '#pragma once' in MaterialExpressionGetMaterialAttributes.h"
#endif
#define ENGINE_MaterialExpressionGetMaterialAttributes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionGetMaterialAttributes *********************************
struct Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGetMaterialAttributes_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionGetMaterialAttributes(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionGetMaterialAttributes, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionGetMaterialAttributes)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGetMaterialAttributes_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionGetMaterialAttributes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionGetMaterialAttributes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionGetMaterialAttributes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionGetMaterialAttributes); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionGetMaterialAttributes(UMaterialExpressionGetMaterialAttributes&&) = delete; \
	UMaterialExpressionGetMaterialAttributes(const UMaterialExpressionGetMaterialAttributes&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionGetMaterialAttributes();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGetMaterialAttributes_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGetMaterialAttributes_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGetMaterialAttributes_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGetMaterialAttributes_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionGetMaterialAttributes;

// ********** End Class UMaterialExpressionGetMaterialAttributes ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGetMaterialAttributes_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
