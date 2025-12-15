// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionTextureSampleParameterCubeArray.h"

#ifdef ENGINE_MaterialExpressionTextureSampleParameterCubeArray_generated_h
#error "MaterialExpressionTextureSampleParameterCubeArray.generated.h already included, missing '#pragma once' in MaterialExpressionTextureSampleParameterCubeArray.h"
#endif
#define ENGINE_MaterialExpressionTextureSampleParameterCubeArray_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionTextureSampleParameterCubeArray ***********************
struct Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCubeArray_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCubeArray_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSampleParameterCubeArray_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTextureSampleParameterCubeArray(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCubeArray_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCubeArray_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionTextureSampleParameterCubeArray, UMaterialExpressionTextureSampleParameter, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCubeArray_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionTextureSampleParameterCubeArray)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSampleParameterCubeArray_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTextureSampleParameterCubeArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionTextureSampleParameterCubeArray(UMaterialExpressionTextureSampleParameterCubeArray&&) = delete; \
	UMaterialExpressionTextureSampleParameterCubeArray(const UMaterialExpressionTextureSampleParameterCubeArray&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTextureSampleParameterCubeArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTextureSampleParameterCubeArray); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTextureSampleParameterCubeArray) \
	ENGINE_API virtual ~UMaterialExpressionTextureSampleParameterCubeArray();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSampleParameterCubeArray_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSampleParameterCubeArray_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSampleParameterCubeArray_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSampleParameterCubeArray_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionTextureSampleParameterCubeArray;

// ********** End Class UMaterialExpressionTextureSampleParameterCubeArray *************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSampleParameterCubeArray_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
