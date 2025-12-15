// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionPerInstanceFadeAmount.h"

#ifdef ENGINE_MaterialExpressionPerInstanceFadeAmount_generated_h
#error "MaterialExpressionPerInstanceFadeAmount.generated.h already included, missing '#pragma once' in MaterialExpressionPerInstanceFadeAmount.h"
#endif
#define ENGINE_MaterialExpressionPerInstanceFadeAmount_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionPerInstanceFadeAmount *********************************
struct Z_Construct_UClass_UMaterialExpressionPerInstanceFadeAmount_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceFadeAmount_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPerInstanceFadeAmount_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionPerInstanceFadeAmount(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionPerInstanceFadeAmount_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionPerInstanceFadeAmount_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionPerInstanceFadeAmount, UMaterialExpressionExternalCodeBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionPerInstanceFadeAmount_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionPerInstanceFadeAmount)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPerInstanceFadeAmount_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionPerInstanceFadeAmount(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionPerInstanceFadeAmount(UMaterialExpressionPerInstanceFadeAmount&&) = delete; \
	UMaterialExpressionPerInstanceFadeAmount(const UMaterialExpressionPerInstanceFadeAmount&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionPerInstanceFadeAmount); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionPerInstanceFadeAmount); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionPerInstanceFadeAmount) \
	NO_API virtual ~UMaterialExpressionPerInstanceFadeAmount();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPerInstanceFadeAmount_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPerInstanceFadeAmount_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPerInstanceFadeAmount_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPerInstanceFadeAmount_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionPerInstanceFadeAmount;

// ********** End Class UMaterialExpressionPerInstanceFadeAmount ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPerInstanceFadeAmount_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
