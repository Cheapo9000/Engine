// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSmoothStep.h"

#ifdef ENGINE_MaterialExpressionSmoothStep_generated_h
#error "MaterialExpressionSmoothStep.generated.h already included, missing '#pragma once' in MaterialExpressionSmoothStep.h"
#endif
#define ENGINE_MaterialExpressionSmoothStep_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionSmoothStep ********************************************
struct Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSmoothStep_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSmoothStep_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSmoothStep(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionSmoothStep_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionSmoothStep, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionSmoothStep_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionSmoothStep)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSmoothStep_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionSmoothStep(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionSmoothStep(UMaterialExpressionSmoothStep&&) = delete; \
	UMaterialExpressionSmoothStep(const UMaterialExpressionSmoothStep&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionSmoothStep); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSmoothStep); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSmoothStep) \
	ENGINE_API virtual ~UMaterialExpressionSmoothStep();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSmoothStep_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSmoothStep_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSmoothStep_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSmoothStep_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionSmoothStep;

// ********** End Class UMaterialExpressionSmoothStep **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSmoothStep_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
