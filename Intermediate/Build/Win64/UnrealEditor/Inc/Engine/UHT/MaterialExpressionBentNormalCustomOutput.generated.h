// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionBentNormalCustomOutput.h"

#ifdef ENGINE_MaterialExpressionBentNormalCustomOutput_generated_h
#error "MaterialExpressionBentNormalCustomOutput.generated.h already included, missing '#pragma once' in MaterialExpressionBentNormalCustomOutput.h"
#endif
#define ENGINE_MaterialExpressionBentNormalCustomOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionBentNormalCustomOutput ********************************
struct Z_Construct_UClass_UMaterialExpressionBentNormalCustomOutput_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBentNormalCustomOutput_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBentNormalCustomOutput_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionBentNormalCustomOutput(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionBentNormalCustomOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionBentNormalCustomOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionBentNormalCustomOutput, UMaterialExpressionCustomOutput, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionBentNormalCustomOutput_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionBentNormalCustomOutput)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBentNormalCustomOutput_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionBentNormalCustomOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionBentNormalCustomOutput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionBentNormalCustomOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionBentNormalCustomOutput); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionBentNormalCustomOutput(UMaterialExpressionBentNormalCustomOutput&&) = delete; \
	UMaterialExpressionBentNormalCustomOutput(const UMaterialExpressionBentNormalCustomOutput&) = delete; \
	NO_API virtual ~UMaterialExpressionBentNormalCustomOutput();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBentNormalCustomOutput_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBentNormalCustomOutput_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBentNormalCustomOutput_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBentNormalCustomOutput_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionBentNormalCustomOutput;

// ********** End Class UMaterialExpressionBentNormalCustomOutput **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBentNormalCustomOutput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
