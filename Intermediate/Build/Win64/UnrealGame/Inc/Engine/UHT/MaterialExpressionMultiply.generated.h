// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionMultiply.h"

#ifdef ENGINE_MaterialExpressionMultiply_generated_h
#error "MaterialExpressionMultiply.generated.h already included, missing '#pragma once' in MaterialExpressionMultiply.h"
#endif
#define ENGINE_MaterialExpressionMultiply_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionMultiply **********************************************
struct Z_Construct_UClass_UMaterialExpressionMultiply_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMultiply_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMultiply_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionMultiply(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionMultiply_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionMultiply_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionMultiply, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionMultiply_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionMultiply)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMultiply_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionMultiply(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionMultiply(UMaterialExpressionMultiply&&) = delete; \
	UMaterialExpressionMultiply(const UMaterialExpressionMultiply&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionMultiply); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionMultiply); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionMultiply) \
	ENGINE_API virtual ~UMaterialExpressionMultiply();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMultiply_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMultiply_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMultiply_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMultiply_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionMultiply;

// ********** End Class UMaterialExpressionMultiply ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMultiply_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
