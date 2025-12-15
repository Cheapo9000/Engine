// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionDoubleVectorParameter.h"

#ifdef ENGINE_MaterialExpressionDoubleVectorParameter_generated_h
#error "MaterialExpressionDoubleVectorParameter.generated.h already included, missing '#pragma once' in MaterialExpressionDoubleVectorParameter.h"
#endif
#define ENGINE_MaterialExpressionDoubleVectorParameter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionDoubleVectorParameter *********************************
struct Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDoubleVectorParameter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionDoubleVectorParameter(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionDoubleVectorParameter, UMaterialExpressionParameter, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionDoubleVectorParameter)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDoubleVectorParameter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionDoubleVectorParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionDoubleVectorParameter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionDoubleVectorParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionDoubleVectorParameter); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionDoubleVectorParameter(UMaterialExpressionDoubleVectorParameter&&) = delete; \
	UMaterialExpressionDoubleVectorParameter(const UMaterialExpressionDoubleVectorParameter&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionDoubleVectorParameter();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDoubleVectorParameter_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDoubleVectorParameter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDoubleVectorParameter_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDoubleVectorParameter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionDoubleVectorParameter;

// ********** End Class UMaterialExpressionDoubleVectorParameter ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDoubleVectorParameter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
