// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionOneMinus.h"

#ifdef ENGINE_MaterialExpressionOneMinus_generated_h
#error "MaterialExpressionOneMinus.generated.h already included, missing '#pragma once' in MaterialExpressionOneMinus.h"
#endif
#define ENGINE_MaterialExpressionOneMinus_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionOneMinus **********************************************
struct Z_Construct_UClass_UMaterialExpressionOneMinus_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionOneMinus_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionOneMinus_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionOneMinus(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionOneMinus_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionOneMinus_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionOneMinus, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionOneMinus_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionOneMinus)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionOneMinus_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionOneMinus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionOneMinus(UMaterialExpressionOneMinus&&) = delete; \
	UMaterialExpressionOneMinus(const UMaterialExpressionOneMinus&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionOneMinus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionOneMinus); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionOneMinus) \
	ENGINE_API virtual ~UMaterialExpressionOneMinus();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionOneMinus_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionOneMinus_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionOneMinus_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionOneMinus_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionOneMinus;

// ********** End Class UMaterialExpressionOneMinus ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionOneMinus_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
