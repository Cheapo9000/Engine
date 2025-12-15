// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionIf.h"

#ifdef ENGINE_MaterialExpressionIf_generated_h
#error "MaterialExpressionIf.generated.h already included, missing '#pragma once' in MaterialExpressionIf.h"
#endif
#define ENGINE_MaterialExpressionIf_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionIf ****************************************************
struct Z_Construct_UClass_UMaterialExpressionIf_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionIf_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIf_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionIf(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionIf_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionIf_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionIf, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionIf_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionIf)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIf_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionIf(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionIf(UMaterialExpressionIf&&) = delete; \
	UMaterialExpressionIf(const UMaterialExpressionIf&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionIf); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionIf); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionIf) \
	ENGINE_API virtual ~UMaterialExpressionIf();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIf_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIf_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIf_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIf_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionIf;

// ********** End Class UMaterialExpressionIf ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionIf_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
