// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionFresnel.h"

#ifdef ENGINE_MaterialExpressionFresnel_generated_h
#error "MaterialExpressionFresnel.generated.h already included, missing '#pragma once' in MaterialExpressionFresnel.h"
#endif
#define ENGINE_MaterialExpressionFresnel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionFresnel ***********************************************
struct Z_Construct_UClass_UMaterialExpressionFresnel_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFresnel_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFresnel_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionFresnel(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionFresnel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionFresnel_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionFresnel, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionFresnel_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionFresnel)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFresnel_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionFresnel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionFresnel(UMaterialExpressionFresnel&&) = delete; \
	UMaterialExpressionFresnel(const UMaterialExpressionFresnel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionFresnel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionFresnel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionFresnel) \
	ENGINE_API virtual ~UMaterialExpressionFresnel();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFresnel_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFresnel_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFresnel_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFresnel_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionFresnel;

// ********** End Class UMaterialExpressionFresnel *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFresnel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
