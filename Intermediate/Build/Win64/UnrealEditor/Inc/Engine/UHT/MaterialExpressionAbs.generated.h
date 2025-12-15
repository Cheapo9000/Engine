// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionAbs.h"

#ifdef ENGINE_MaterialExpressionAbs_generated_h
#error "MaterialExpressionAbs.generated.h already included, missing '#pragma once' in MaterialExpressionAbs.h"
#endif
#define ENGINE_MaterialExpressionAbs_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionAbs ***************************************************
struct Z_Construct_UClass_UMaterialExpressionAbs_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAbs_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAbs_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionAbs(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionAbs_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionAbs_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionAbs, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionAbs_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionAbs)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAbs_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionAbs(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionAbs(UMaterialExpressionAbs&&) = delete; \
	UMaterialExpressionAbs(const UMaterialExpressionAbs&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionAbs); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionAbs); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionAbs) \
	ENGINE_API virtual ~UMaterialExpressionAbs();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAbs_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAbs_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAbs_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAbs_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionAbs;

// ********** End Class UMaterialExpressionAbs *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAbs_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
