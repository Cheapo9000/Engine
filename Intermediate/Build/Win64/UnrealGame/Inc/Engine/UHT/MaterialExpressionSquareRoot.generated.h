// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSquareRoot.h"

#ifdef ENGINE_MaterialExpressionSquareRoot_generated_h
#error "MaterialExpressionSquareRoot.generated.h already included, missing '#pragma once' in MaterialExpressionSquareRoot.h"
#endif
#define ENGINE_MaterialExpressionSquareRoot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionSquareRoot ********************************************
struct Z_Construct_UClass_UMaterialExpressionSquareRoot_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSquareRoot_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSquareRoot_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSquareRoot(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionSquareRoot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionSquareRoot_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionSquareRoot, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionSquareRoot_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionSquareRoot)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSquareRoot_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionSquareRoot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionSquareRoot(UMaterialExpressionSquareRoot&&) = delete; \
	UMaterialExpressionSquareRoot(const UMaterialExpressionSquareRoot&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionSquareRoot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSquareRoot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSquareRoot) \
	ENGINE_API virtual ~UMaterialExpressionSquareRoot();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSquareRoot_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSquareRoot_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSquareRoot_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSquareRoot_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionSquareRoot;

// ********** End Class UMaterialExpressionSquareRoot **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSquareRoot_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
