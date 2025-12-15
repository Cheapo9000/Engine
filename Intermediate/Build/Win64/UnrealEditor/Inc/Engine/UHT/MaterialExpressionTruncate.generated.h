// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionTruncate.h"

#ifdef ENGINE_MaterialExpressionTruncate_generated_h
#error "MaterialExpressionTruncate.generated.h already included, missing '#pragma once' in MaterialExpressionTruncate.h"
#endif
#define ENGINE_MaterialExpressionTruncate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionTruncate **********************************************
struct Z_Construct_UClass_UMaterialExpressionTruncate_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTruncate_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTruncate_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTruncate(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionTruncate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionTruncate_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionTruncate, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionTruncate_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionTruncate)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTruncate_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionTruncate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionTruncate(UMaterialExpressionTruncate&&) = delete; \
	UMaterialExpressionTruncate(const UMaterialExpressionTruncate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionTruncate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTruncate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTruncate) \
	NO_API virtual ~UMaterialExpressionTruncate();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTruncate_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTruncate_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTruncate_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTruncate_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionTruncate;

// ********** End Class UMaterialExpressionTruncate ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTruncate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
