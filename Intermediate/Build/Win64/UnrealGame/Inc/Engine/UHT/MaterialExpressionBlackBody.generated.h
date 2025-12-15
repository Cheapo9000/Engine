// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionBlackBody.h"

#ifdef ENGINE_MaterialExpressionBlackBody_generated_h
#error "MaterialExpressionBlackBody.generated.h already included, missing '#pragma once' in MaterialExpressionBlackBody.h"
#endif
#define ENGINE_MaterialExpressionBlackBody_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionBlackBody *********************************************
struct Z_Construct_UClass_UMaterialExpressionBlackBody_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBlackBody_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlackBody_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionBlackBody(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionBlackBody_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionBlackBody_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionBlackBody, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionBlackBody_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionBlackBody)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlackBody_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionBlackBody(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionBlackBody(UMaterialExpressionBlackBody&&) = delete; \
	UMaterialExpressionBlackBody(const UMaterialExpressionBlackBody&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionBlackBody); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionBlackBody); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionBlackBody) \
	ENGINE_API virtual ~UMaterialExpressionBlackBody();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlackBody_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlackBody_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlackBody_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlackBody_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionBlackBody;

// ********** End Class UMaterialExpressionBlackBody ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlackBody_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
