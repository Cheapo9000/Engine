// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionExponential2.h"

#ifdef ENGINE_MaterialExpressionExponential2_generated_h
#error "MaterialExpressionExponential2.generated.h already included, missing '#pragma once' in MaterialExpressionExponential2.h"
#endif
#define ENGINE_MaterialExpressionExponential2_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionExponential2 ******************************************
struct Z_Construct_UClass_UMaterialExpressionExponential2_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionExponential2_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionExponential2_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionExponential2(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionExponential2_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionExponential2_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionExponential2, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionExponential2_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionExponential2)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionExponential2_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionExponential2(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionExponential2(UMaterialExpressionExponential2&&) = delete; \
	UMaterialExpressionExponential2(const UMaterialExpressionExponential2&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionExponential2); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionExponential2); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionExponential2) \
	ENGINE_API virtual ~UMaterialExpressionExponential2();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionExponential2_h_9_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionExponential2_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionExponential2_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionExponential2_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionExponential2;

// ********** End Class UMaterialExpressionExponential2 ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionExponential2_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
