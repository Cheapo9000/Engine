// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionModulo.h"

#ifdef ENGINE_MaterialExpressionModulo_generated_h
#error "MaterialExpressionModulo.generated.h already included, missing '#pragma once' in MaterialExpressionModulo.h"
#endif
#define ENGINE_MaterialExpressionModulo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionModulo ************************************************
struct Z_Construct_UClass_UMaterialExpressionModulo_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionModulo_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionModulo_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionModulo(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionModulo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionModulo_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionModulo, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionModulo_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionModulo)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionModulo_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionModulo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionModulo(UMaterialExpressionModulo&&) = delete; \
	UMaterialExpressionModulo(const UMaterialExpressionModulo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionModulo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionModulo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionModulo) \
	ENGINE_API virtual ~UMaterialExpressionModulo();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionModulo_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionModulo_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionModulo_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionModulo_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionModulo;

// ********** End Class UMaterialExpressionModulo **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionModulo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
