// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionFrac.h"

#ifdef ENGINE_MaterialExpressionFrac_generated_h
#error "MaterialExpressionFrac.generated.h already included, missing '#pragma once' in MaterialExpressionFrac.h"
#endif
#define ENGINE_MaterialExpressionFrac_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionFrac **************************************************
struct Z_Construct_UClass_UMaterialExpressionFrac_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFrac_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFrac_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionFrac(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionFrac_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionFrac_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionFrac, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionFrac_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionFrac)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFrac_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionFrac(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionFrac(UMaterialExpressionFrac&&) = delete; \
	UMaterialExpressionFrac(const UMaterialExpressionFrac&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionFrac); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionFrac); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionFrac) \
	ENGINE_API virtual ~UMaterialExpressionFrac();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFrac_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFrac_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFrac_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFrac_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionFrac;

// ********** End Class UMaterialExpressionFrac ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFrac_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
