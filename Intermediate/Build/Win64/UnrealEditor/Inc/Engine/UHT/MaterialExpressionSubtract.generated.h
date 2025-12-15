// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSubtract.h"

#ifdef ENGINE_MaterialExpressionSubtract_generated_h
#error "MaterialExpressionSubtract.generated.h already included, missing '#pragma once' in MaterialExpressionSubtract.h"
#endif
#define ENGINE_MaterialExpressionSubtract_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionSubtract **********************************************
struct Z_Construct_UClass_UMaterialExpressionSubtract_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSubtract_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSubtract_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSubtract(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionSubtract_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionSubtract_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionSubtract, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionSubtract_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionSubtract)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSubtract_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionSubtract(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionSubtract(UMaterialExpressionSubtract&&) = delete; \
	UMaterialExpressionSubtract(const UMaterialExpressionSubtract&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionSubtract); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSubtract); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSubtract) \
	ENGINE_API virtual ~UMaterialExpressionSubtract();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSubtract_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSubtract_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSubtract_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSubtract_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionSubtract;

// ********** End Class UMaterialExpressionSubtract ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSubtract_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
