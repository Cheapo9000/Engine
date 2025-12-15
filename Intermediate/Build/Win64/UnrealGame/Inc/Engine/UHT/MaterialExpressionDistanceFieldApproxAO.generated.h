// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionDistanceFieldApproxAO.h"

#ifdef ENGINE_MaterialExpressionDistanceFieldApproxAO_generated_h
#error "MaterialExpressionDistanceFieldApproxAO.generated.h already included, missing '#pragma once' in MaterialExpressionDistanceFieldApproxAO.h"
#endif
#define ENGINE_MaterialExpressionDistanceFieldApproxAO_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionDistanceFieldApproxAO *********************************
struct Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDistanceFieldApproxAO_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionDistanceFieldApproxAO(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionDistanceFieldApproxAO, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionDistanceFieldApproxAO)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDistanceFieldApproxAO_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionDistanceFieldApproxAO(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionDistanceFieldApproxAO(UMaterialExpressionDistanceFieldApproxAO&&) = delete; \
	UMaterialExpressionDistanceFieldApproxAO(const UMaterialExpressionDistanceFieldApproxAO&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionDistanceFieldApproxAO); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionDistanceFieldApproxAO); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionDistanceFieldApproxAO) \
	NO_API virtual ~UMaterialExpressionDistanceFieldApproxAO();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDistanceFieldApproxAO_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDistanceFieldApproxAO_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDistanceFieldApproxAO_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDistanceFieldApproxAO_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionDistanceFieldApproxAO;

// ********** End Class UMaterialExpressionDistanceFieldApproxAO ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDistanceFieldApproxAO_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
