// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSign.h"

#ifdef ENGINE_MaterialExpressionSign_generated_h
#error "MaterialExpressionSign.generated.h already included, missing '#pragma once' in MaterialExpressionSign.h"
#endif
#define ENGINE_MaterialExpressionSign_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionSign **************************************************
struct Z_Construct_UClass_UMaterialExpressionSign_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSign_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSign_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSign(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionSign_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionSign_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionSign, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionSign_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionSign)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSign_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionSign(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionSign(UMaterialExpressionSign&&) = delete; \
	UMaterialExpressionSign(const UMaterialExpressionSign&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionSign); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSign); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSign) \
	ENGINE_API virtual ~UMaterialExpressionSign();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSign_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSign_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSign_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSign_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionSign;

// ********** End Class UMaterialExpressionSign ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSign_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
