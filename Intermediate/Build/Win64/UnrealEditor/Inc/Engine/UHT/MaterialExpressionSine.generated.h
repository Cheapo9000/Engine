// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSine.h"

#ifdef ENGINE_MaterialExpressionSine_generated_h
#error "MaterialExpressionSine.generated.h already included, missing '#pragma once' in MaterialExpressionSine.h"
#endif
#define ENGINE_MaterialExpressionSine_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionSine **************************************************
struct Z_Construct_UClass_UMaterialExpressionSine_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSine_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSine_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSine(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionSine_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionSine_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionSine, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionSine_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionSine)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSine_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionSine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionSine(UMaterialExpressionSine&&) = delete; \
	UMaterialExpressionSine(const UMaterialExpressionSine&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionSine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSine) \
	ENGINE_API virtual ~UMaterialExpressionSine();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSine_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSine_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSine_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSine_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionSine;

// ********** End Class UMaterialExpressionSine ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSine_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
