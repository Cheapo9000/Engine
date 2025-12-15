// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionClearCoatNormalCustomOutput.h"

#ifdef ENGINE_MaterialExpressionClearCoatNormalCustomOutput_generated_h
#error "MaterialExpressionClearCoatNormalCustomOutput.generated.h already included, missing '#pragma once' in MaterialExpressionClearCoatNormalCustomOutput.h"
#endif
#define ENGINE_MaterialExpressionClearCoatNormalCustomOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionClearCoatNormalCustomOutput ***************************
struct Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionClearCoatNormalCustomOutput_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionClearCoatNormalCustomOutput(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionClearCoatNormalCustomOutput, UMaterialExpressionCustomOutput, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionClearCoatNormalCustomOutput)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionClearCoatNormalCustomOutput_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionClearCoatNormalCustomOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionClearCoatNormalCustomOutput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionClearCoatNormalCustomOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionClearCoatNormalCustomOutput); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionClearCoatNormalCustomOutput(UMaterialExpressionClearCoatNormalCustomOutput&&) = delete; \
	UMaterialExpressionClearCoatNormalCustomOutput(const UMaterialExpressionClearCoatNormalCustomOutput&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionClearCoatNormalCustomOutput();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionClearCoatNormalCustomOutput_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionClearCoatNormalCustomOutput_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionClearCoatNormalCustomOutput_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionClearCoatNormalCustomOutput_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionClearCoatNormalCustomOutput;

// ********** End Class UMaterialExpressionClearCoatNormalCustomOutput *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionClearCoatNormalCustomOutput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
