// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionThinTranslucentMaterialOutput.h"

#ifdef ENGINE_MaterialExpressionThinTranslucentMaterialOutput_generated_h
#error "MaterialExpressionThinTranslucentMaterialOutput.generated.h already included, missing '#pragma once' in MaterialExpressionThinTranslucentMaterialOutput.h"
#endif
#define ENGINE_MaterialExpressionThinTranslucentMaterialOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionThinTranslucentMaterialOutput *************************
struct Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionThinTranslucentMaterialOutput_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionThinTranslucentMaterialOutput(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionThinTranslucentMaterialOutput, UMaterialExpressionCustomOutput, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionThinTranslucentMaterialOutput)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionThinTranslucentMaterialOutput_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionThinTranslucentMaterialOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionThinTranslucentMaterialOutput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionThinTranslucentMaterialOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionThinTranslucentMaterialOutput); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionThinTranslucentMaterialOutput(UMaterialExpressionThinTranslucentMaterialOutput&&) = delete; \
	UMaterialExpressionThinTranslucentMaterialOutput(const UMaterialExpressionThinTranslucentMaterialOutput&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionThinTranslucentMaterialOutput();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionThinTranslucentMaterialOutput_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionThinTranslucentMaterialOutput_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionThinTranslucentMaterialOutput_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionThinTranslucentMaterialOutput_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionThinTranslucentMaterialOutput;

// ********** End Class UMaterialExpressionThinTranslucentMaterialOutput ***************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionThinTranslucentMaterialOutput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
