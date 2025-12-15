// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionTangent.h"

#ifdef ENGINE_MaterialExpressionTangent_generated_h
#error "MaterialExpressionTangent.generated.h already included, missing '#pragma once' in MaterialExpressionTangent.h"
#endif
#define ENGINE_MaterialExpressionTangent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionTangent ***********************************************
struct Z_Construct_UClass_UMaterialExpressionTangent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTangent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTangent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTangent(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionTangent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionTangent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionTangent, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionTangent_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionTangent)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTangent_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTangent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionTangent(UMaterialExpressionTangent&&) = delete; \
	UMaterialExpressionTangent(const UMaterialExpressionTangent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTangent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTangent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTangent) \
	ENGINE_API virtual ~UMaterialExpressionTangent();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTangent_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTangent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTangent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTangent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionTangent;

// ********** End Class UMaterialExpressionTangent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTangent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
