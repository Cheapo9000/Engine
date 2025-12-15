// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionArcsine.h"

#ifdef ENGINE_MaterialExpressionArcsine_generated_h
#error "MaterialExpressionArcsine.generated.h already included, missing '#pragma once' in MaterialExpressionArcsine.h"
#endif
#define ENGINE_MaterialExpressionArcsine_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionArcsine ***********************************************
struct Z_Construct_UClass_UMaterialExpressionArcsine_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionArcsine_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArcsine_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionArcsine(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionArcsine_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionArcsine_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionArcsine, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionArcsine_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionArcsine)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArcsine_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionArcsine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionArcsine(UMaterialExpressionArcsine&&) = delete; \
	UMaterialExpressionArcsine(const UMaterialExpressionArcsine&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionArcsine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionArcsine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionArcsine) \
	ENGINE_API virtual ~UMaterialExpressionArcsine();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArcsine_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArcsine_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArcsine_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArcsine_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionArcsine;

// ********** End Class UMaterialExpressionArcsine *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArcsine_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
