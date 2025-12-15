// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionPanner.h"

#ifdef ENGINE_MaterialExpressionPanner_generated_h
#error "MaterialExpressionPanner.generated.h already included, missing '#pragma once' in MaterialExpressionPanner.h"
#endif
#define ENGINE_MaterialExpressionPanner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionPanner ************************************************
struct Z_Construct_UClass_UMaterialExpressionPanner_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPanner_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPanner_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionPanner(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionPanner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionPanner_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionPanner, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionPanner_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionPanner)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPanner_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionPanner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionPanner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionPanner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionPanner); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionPanner(UMaterialExpressionPanner&&) = delete; \
	UMaterialExpressionPanner(const UMaterialExpressionPanner&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionPanner();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPanner_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPanner_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPanner_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPanner_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionPanner;

// ********** End Class UMaterialExpressionPanner **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPanner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
