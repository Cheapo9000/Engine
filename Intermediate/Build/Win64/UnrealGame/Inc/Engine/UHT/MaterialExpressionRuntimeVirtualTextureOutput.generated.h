// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionRuntimeVirtualTextureOutput.h"

#ifdef ENGINE_MaterialExpressionRuntimeVirtualTextureOutput_generated_h
#error "MaterialExpressionRuntimeVirtualTextureOutput.generated.h already included, missing '#pragma once' in MaterialExpressionRuntimeVirtualTextureOutput.h"
#endif
#define ENGINE_MaterialExpressionRuntimeVirtualTextureOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionRuntimeVirtualTextureOutput ***************************
struct Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRuntimeVirtualTextureOutput_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionRuntimeVirtualTextureOutput(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionRuntimeVirtualTextureOutput, UMaterialExpressionCustomOutput, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionRuntimeVirtualTextureOutput)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRuntimeVirtualTextureOutput_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionRuntimeVirtualTextureOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionRuntimeVirtualTextureOutput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionRuntimeVirtualTextureOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionRuntimeVirtualTextureOutput); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionRuntimeVirtualTextureOutput(UMaterialExpressionRuntimeVirtualTextureOutput&&) = delete; \
	UMaterialExpressionRuntimeVirtualTextureOutput(const UMaterialExpressionRuntimeVirtualTextureOutput&) = delete; \
	NO_API virtual ~UMaterialExpressionRuntimeVirtualTextureOutput();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRuntimeVirtualTextureOutput_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRuntimeVirtualTextureOutput_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRuntimeVirtualTextureOutput_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRuntimeVirtualTextureOutput_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionRuntimeVirtualTextureOutput;

// ********** End Class UMaterialExpressionRuntimeVirtualTextureOutput *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRuntimeVirtualTextureOutput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
