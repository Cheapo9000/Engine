// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionAdd.h"

#ifdef ENGINE_MaterialExpressionAdd_generated_h
#error "MaterialExpressionAdd.generated.h already included, missing '#pragma once' in MaterialExpressionAdd.h"
#endif
#define ENGINE_MaterialExpressionAdd_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionAdd ***************************************************
struct Z_Construct_UClass_UMaterialExpressionAdd_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAdd_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAdd_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionAdd(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionAdd_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionAdd_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionAdd, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionAdd_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionAdd)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAdd_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionAdd(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionAdd(UMaterialExpressionAdd&&) = delete; \
	UMaterialExpressionAdd(const UMaterialExpressionAdd&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionAdd); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionAdd); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionAdd) \
	ENGINE_API virtual ~UMaterialExpressionAdd();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAdd_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAdd_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAdd_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAdd_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionAdd;

// ********** End Class UMaterialExpressionAdd *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAdd_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
