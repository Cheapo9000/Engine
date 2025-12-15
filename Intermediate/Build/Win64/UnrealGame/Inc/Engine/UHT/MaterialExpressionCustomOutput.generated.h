// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionCustomOutput.h"

#ifdef ENGINE_MaterialExpressionCustomOutput_generated_h
#error "MaterialExpressionCustomOutput.generated.h already included, missing '#pragma once' in MaterialExpressionCustomOutput.h"
#endif
#define ENGINE_MaterialExpressionCustomOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionCustomOutput ******************************************
struct Z_Construct_UClass_UMaterialExpressionCustomOutput_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCustomOutput_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionCustomOutput(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionCustomOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionCustomOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionCustomOutput, UMaterialExpression, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionCustomOutput_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionCustomOutput)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCustomOutput_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionCustomOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionCustomOutput(UMaterialExpressionCustomOutput&&) = delete; \
	UMaterialExpressionCustomOutput(const UMaterialExpressionCustomOutput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionCustomOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionCustomOutput); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionCustomOutput) \
	ENGINE_API virtual ~UMaterialExpressionCustomOutput();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCustomOutput_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCustomOutput_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCustomOutput_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCustomOutput_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionCustomOutput;

// ********** End Class UMaterialExpressionCustomOutput ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCustomOutput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
