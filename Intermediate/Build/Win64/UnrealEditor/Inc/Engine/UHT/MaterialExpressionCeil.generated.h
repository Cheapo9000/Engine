// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionCeil.h"

#ifdef ENGINE_MaterialExpressionCeil_generated_h
#error "MaterialExpressionCeil.generated.h already included, missing '#pragma once' in MaterialExpressionCeil.h"
#endif
#define ENGINE_MaterialExpressionCeil_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionCeil **************************************************
struct Z_Construct_UClass_UMaterialExpressionCeil_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCeil_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCeil_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionCeil(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionCeil_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionCeil_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionCeil, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionCeil_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionCeil)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCeil_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionCeil(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionCeil(UMaterialExpressionCeil&&) = delete; \
	UMaterialExpressionCeil(const UMaterialExpressionCeil&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionCeil); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionCeil); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionCeil) \
	ENGINE_API virtual ~UMaterialExpressionCeil();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCeil_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCeil_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCeil_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCeil_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionCeil;

// ********** End Class UMaterialExpressionCeil ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCeil_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
