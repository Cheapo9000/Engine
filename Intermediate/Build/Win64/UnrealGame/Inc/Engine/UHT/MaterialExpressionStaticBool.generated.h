// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionStaticBool.h"

#ifdef ENGINE_MaterialExpressionStaticBool_generated_h
#error "MaterialExpressionStaticBool.generated.h already included, missing '#pragma once' in MaterialExpressionStaticBool.h"
#endif
#define ENGINE_MaterialExpressionStaticBool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionStaticBool ********************************************
struct Z_Construct_UClass_UMaterialExpressionStaticBool_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticBool_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticBool_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionStaticBool(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionStaticBool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionStaticBool_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionStaticBool, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionStaticBool_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionStaticBool)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticBool_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionStaticBool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionStaticBool) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionStaticBool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionStaticBool); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionStaticBool(UMaterialExpressionStaticBool&&) = delete; \
	UMaterialExpressionStaticBool(const UMaterialExpressionStaticBool&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionStaticBool();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticBool_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticBool_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticBool_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticBool_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionStaticBool;

// ********** End Class UMaterialExpressionStaticBool **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticBool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
