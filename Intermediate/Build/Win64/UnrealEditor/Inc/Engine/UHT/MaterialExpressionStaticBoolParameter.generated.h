// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionStaticBoolParameter.h"

#ifdef ENGINE_MaterialExpressionStaticBoolParameter_generated_h
#error "MaterialExpressionStaticBoolParameter.generated.h already included, missing '#pragma once' in MaterialExpressionStaticBoolParameter.h"
#endif
#define ENGINE_MaterialExpressionStaticBoolParameter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionStaticBoolParameter ***********************************
struct Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticBoolParameter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionStaticBoolParameter(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionStaticBoolParameter, UMaterialExpressionParameter, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionStaticBoolParameter)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticBoolParameter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionStaticBoolParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionStaticBoolParameter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionStaticBoolParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionStaticBoolParameter); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionStaticBoolParameter(UMaterialExpressionStaticBoolParameter&&) = delete; \
	UMaterialExpressionStaticBoolParameter(const UMaterialExpressionStaticBoolParameter&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionStaticBoolParameter();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticBoolParameter_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticBoolParameter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticBoolParameter_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticBoolParameter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionStaticBoolParameter;

// ********** End Class UMaterialExpressionStaticBoolParameter *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticBoolParameter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
