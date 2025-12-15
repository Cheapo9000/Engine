// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionShadowReplace.h"

#ifdef ENGINE_MaterialExpressionShadowReplace_generated_h
#error "MaterialExpressionShadowReplace.generated.h already included, missing '#pragma once' in MaterialExpressionShadowReplace.h"
#endif
#define ENGINE_MaterialExpressionShadowReplace_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionShadowReplace *****************************************
struct Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionShadowReplace_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShadowReplace_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionShadowReplace(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionShadowReplace_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionShadowReplace, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionShadowReplace_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionShadowReplace)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShadowReplace_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionShadowReplace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionShadowReplace(UMaterialExpressionShadowReplace&&) = delete; \
	UMaterialExpressionShadowReplace(const UMaterialExpressionShadowReplace&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionShadowReplace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionShadowReplace); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionShadowReplace) \
	NO_API virtual ~UMaterialExpressionShadowReplace();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShadowReplace_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShadowReplace_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShadowReplace_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShadowReplace_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionShadowReplace;

// ********** End Class UMaterialExpressionShadowReplace *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShadowReplace_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
