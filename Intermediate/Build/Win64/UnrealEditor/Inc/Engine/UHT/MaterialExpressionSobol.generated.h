// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSobol.h"

#ifdef ENGINE_MaterialExpressionSobol_generated_h
#error "MaterialExpressionSobol.generated.h already included, missing '#pragma once' in MaterialExpressionSobol.h"
#endif
#define ENGINE_MaterialExpressionSobol_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionSobol *************************************************
struct Z_Construct_UClass_UMaterialExpressionSobol_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSobol_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSobol_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSobol(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionSobol_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionSobol_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionSobol, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionSobol_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionSobol)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSobol_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionSobol(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionSobol(UMaterialExpressionSobol&&) = delete; \
	UMaterialExpressionSobol(const UMaterialExpressionSobol&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionSobol); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSobol); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSobol) \
	ENGINE_API virtual ~UMaterialExpressionSobol();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSobol_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSobol_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSobol_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSobol_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionSobol;

// ********** End Class UMaterialExpressionSobol ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSobol_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
