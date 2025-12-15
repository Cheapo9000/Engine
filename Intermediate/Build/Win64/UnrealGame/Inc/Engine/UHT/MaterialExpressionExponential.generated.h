// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionExponential.h"

#ifdef ENGINE_MaterialExpressionExponential_generated_h
#error "MaterialExpressionExponential.generated.h already included, missing '#pragma once' in MaterialExpressionExponential.h"
#endif
#define ENGINE_MaterialExpressionExponential_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionExponential *******************************************
struct Z_Construct_UClass_UMaterialExpressionExponential_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionExponential_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionExponential_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionExponential(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionExponential_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionExponential_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionExponential, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionExponential_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionExponential)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionExponential_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionExponential(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionExponential(UMaterialExpressionExponential&&) = delete; \
	UMaterialExpressionExponential(const UMaterialExpressionExponential&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionExponential); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionExponential); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionExponential) \
	ENGINE_API virtual ~UMaterialExpressionExponential();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionExponential_h_9_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionExponential_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionExponential_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionExponential_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionExponential;

// ********** End Class UMaterialExpressionExponential *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionExponential_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
