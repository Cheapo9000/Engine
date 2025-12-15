// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionStaticComponentMaskParameter.h"

#ifdef ENGINE_MaterialExpressionStaticComponentMaskParameter_generated_h
#error "MaterialExpressionStaticComponentMaskParameter.generated.h already included, missing '#pragma once' in MaterialExpressionStaticComponentMaskParameter.h"
#endif
#define ENGINE_MaterialExpressionStaticComponentMaskParameter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionStaticComponentMaskParameter **************************
struct Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticComponentMaskParameter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionStaticComponentMaskParameter(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionStaticComponentMaskParameter, UMaterialExpressionParameter, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionStaticComponentMaskParameter)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticComponentMaskParameter_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionStaticComponentMaskParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionStaticComponentMaskParameter(UMaterialExpressionStaticComponentMaskParameter&&) = delete; \
	UMaterialExpressionStaticComponentMaskParameter(const UMaterialExpressionStaticComponentMaskParameter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionStaticComponentMaskParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionStaticComponentMaskParameter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionStaticComponentMaskParameter) \
	ENGINE_API virtual ~UMaterialExpressionStaticComponentMaskParameter();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticComponentMaskParameter_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticComponentMaskParameter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticComponentMaskParameter_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticComponentMaskParameter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionStaticComponentMaskParameter;

// ********** End Class UMaterialExpressionStaticComponentMaskParameter ****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticComponentMaskParameter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
