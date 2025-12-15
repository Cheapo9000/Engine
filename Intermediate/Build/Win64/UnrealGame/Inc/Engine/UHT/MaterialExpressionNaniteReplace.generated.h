// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionNaniteReplace.h"

#ifdef ENGINE_MaterialExpressionNaniteReplace_generated_h
#error "MaterialExpressionNaniteReplace.generated.h already included, missing '#pragma once' in MaterialExpressionNaniteReplace.h"
#endif
#define ENGINE_MaterialExpressionNaniteReplace_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionNaniteReplace *****************************************
struct Z_Construct_UClass_UMaterialExpressionNaniteReplace_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNaniteReplace_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNaniteReplace_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionNaniteReplace(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionNaniteReplace_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionNaniteReplace_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionNaniteReplace, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionNaniteReplace_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionNaniteReplace)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNaniteReplace_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionNaniteReplace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionNaniteReplace(UMaterialExpressionNaniteReplace&&) = delete; \
	UMaterialExpressionNaniteReplace(const UMaterialExpressionNaniteReplace&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionNaniteReplace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionNaniteReplace); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionNaniteReplace) \
	NO_API virtual ~UMaterialExpressionNaniteReplace();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNaniteReplace_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNaniteReplace_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNaniteReplace_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNaniteReplace_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionNaniteReplace;

// ********** End Class UMaterialExpressionNaniteReplace *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNaniteReplace_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
