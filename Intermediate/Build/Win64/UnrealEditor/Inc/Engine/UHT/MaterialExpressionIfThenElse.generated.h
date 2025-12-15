// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionIfThenElse.h"

#ifdef ENGINE_MaterialExpressionIfThenElse_generated_h
#error "MaterialExpressionIfThenElse.generated.h already included, missing '#pragma once' in MaterialExpressionIfThenElse.h"
#endif
#define ENGINE_MaterialExpressionIfThenElse_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionIfThenElse ********************************************
struct Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionIfThenElse_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIfThenElse_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionIfThenElse(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionIfThenElse_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionIfThenElse, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionIfThenElse_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionIfThenElse)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIfThenElse_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionIfThenElse(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionIfThenElse(UMaterialExpressionIfThenElse&&) = delete; \
	UMaterialExpressionIfThenElse(const UMaterialExpressionIfThenElse&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionIfThenElse); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionIfThenElse); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionIfThenElse) \
	ENGINE_API virtual ~UMaterialExpressionIfThenElse();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIfThenElse_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIfThenElse_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIfThenElse_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIfThenElse_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionIfThenElse;

// ********** End Class UMaterialExpressionIfThenElse **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIfThenElse_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
