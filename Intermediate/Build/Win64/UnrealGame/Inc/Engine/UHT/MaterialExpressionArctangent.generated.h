// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionArctangent.h"

#ifdef ENGINE_MaterialExpressionArctangent_generated_h
#error "MaterialExpressionArctangent.generated.h already included, missing '#pragma once' in MaterialExpressionArctangent.h"
#endif
#define ENGINE_MaterialExpressionArctangent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionArctangent ********************************************
struct Z_Construct_UClass_UMaterialExpressionArctangent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionArctangent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArctangent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionArctangent(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionArctangent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionArctangent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionArctangent, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionArctangent_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionArctangent)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArctangent_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionArctangent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionArctangent(UMaterialExpressionArctangent&&) = delete; \
	UMaterialExpressionArctangent(const UMaterialExpressionArctangent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionArctangent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionArctangent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionArctangent) \
	ENGINE_API virtual ~UMaterialExpressionArctangent();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArctangent_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArctangent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArctangent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArctangent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionArctangent;

// ********** End Class UMaterialExpressionArctangent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArctangent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
