// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionConstant.h"

#ifdef ENGINE_MaterialExpressionConstant_generated_h
#error "MaterialExpressionConstant.generated.h already included, missing '#pragma once' in MaterialExpressionConstant.h"
#endif
#define ENGINE_MaterialExpressionConstant_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionConstant **********************************************
struct Z_Construct_UClass_UMaterialExpressionConstant_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionConstant_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConstant_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionConstant(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionConstant_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionConstant_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionConstant, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionConstant_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionConstant)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConstant_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionConstant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionConstant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionConstant); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionConstant); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionConstant(UMaterialExpressionConstant&&) = delete; \
	UMaterialExpressionConstant(const UMaterialExpressionConstant&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionConstant();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConstant_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConstant_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConstant_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConstant_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionConstant;

// ********** End Class UMaterialExpressionConstant ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConstant_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
