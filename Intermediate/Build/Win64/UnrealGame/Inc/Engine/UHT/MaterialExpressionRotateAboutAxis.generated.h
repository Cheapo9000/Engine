// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionRotateAboutAxis.h"

#ifdef ENGINE_MaterialExpressionRotateAboutAxis_generated_h
#error "MaterialExpressionRotateAboutAxis.generated.h already included, missing '#pragma once' in MaterialExpressionRotateAboutAxis.h"
#endif
#define ENGINE_MaterialExpressionRotateAboutAxis_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionRotateAboutAxis ***************************************
struct Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRotateAboutAxis_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionRotateAboutAxis(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionRotateAboutAxis, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionRotateAboutAxis)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRotateAboutAxis_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionRotateAboutAxis(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionRotateAboutAxis(UMaterialExpressionRotateAboutAxis&&) = delete; \
	UMaterialExpressionRotateAboutAxis(const UMaterialExpressionRotateAboutAxis&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionRotateAboutAxis); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionRotateAboutAxis); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionRotateAboutAxis) \
	ENGINE_API virtual ~UMaterialExpressionRotateAboutAxis();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRotateAboutAxis_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRotateAboutAxis_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRotateAboutAxis_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRotateAboutAxis_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionRotateAboutAxis;

// ********** End Class UMaterialExpressionRotateAboutAxis *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRotateAboutAxis_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
