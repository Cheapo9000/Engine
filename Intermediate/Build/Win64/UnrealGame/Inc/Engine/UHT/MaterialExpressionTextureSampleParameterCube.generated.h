// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionTextureSampleParameterCube.h"

#ifdef ENGINE_MaterialExpressionTextureSampleParameterCube_generated_h
#error "MaterialExpressionTextureSampleParameterCube.generated.h already included, missing '#pragma once' in MaterialExpressionTextureSampleParameterCube.h"
#endif
#define ENGINE_MaterialExpressionTextureSampleParameterCube_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionTextureSampleParameterCube ****************************
struct Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCube_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCube_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSampleParameterCube_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTextureSampleParameterCube(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCube_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCube_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionTextureSampleParameterCube, UMaterialExpressionTextureSampleParameter, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCube_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionTextureSampleParameterCube)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSampleParameterCube_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTextureSampleParameterCube(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTextureSampleParameterCube) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTextureSampleParameterCube); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTextureSampleParameterCube); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionTextureSampleParameterCube(UMaterialExpressionTextureSampleParameterCube&&) = delete; \
	UMaterialExpressionTextureSampleParameterCube(const UMaterialExpressionTextureSampleParameterCube&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionTextureSampleParameterCube();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSampleParameterCube_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSampleParameterCube_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSampleParameterCube_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSampleParameterCube_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionTextureSampleParameterCube;

// ********** End Class UMaterialExpressionTextureSampleParameterCube ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSampleParameterCube_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
