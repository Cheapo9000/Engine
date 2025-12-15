// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSaturate.h"

#ifdef ENGINE_MaterialExpressionSaturate_generated_h
#error "MaterialExpressionSaturate.generated.h already included, missing '#pragma once' in MaterialExpressionSaturate.h"
#endif
#define ENGINE_MaterialExpressionSaturate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionSaturate **********************************************
struct Z_Construct_UClass_UMaterialExpressionSaturate_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSaturate_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSaturate_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSaturate(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionSaturate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionSaturate_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionSaturate, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionSaturate_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionSaturate)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSaturate_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionSaturate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionSaturate(UMaterialExpressionSaturate&&) = delete; \
	UMaterialExpressionSaturate(const UMaterialExpressionSaturate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionSaturate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSaturate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSaturate) \
	ENGINE_API virtual ~UMaterialExpressionSaturate();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSaturate_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSaturate_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSaturate_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSaturate_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionSaturate;

// ********** End Class UMaterialExpressionSaturate ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSaturate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
