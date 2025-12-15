// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionObjectRadius.h"

#ifdef ENGINE_MaterialExpressionObjectRadius_generated_h
#error "MaterialExpressionObjectRadius.generated.h already included, missing '#pragma once' in MaterialExpressionObjectRadius.h"
#endif
#define ENGINE_MaterialExpressionObjectRadius_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionObjectRadius ******************************************
struct Z_Construct_UClass_UMaterialExpressionObjectRadius_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionObjectRadius_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectRadius_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionObjectRadius(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionObjectRadius_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionObjectRadius_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionObjectRadius, UMaterialExpressionExternalCodeBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionObjectRadius_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionObjectRadius)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectRadius_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionObjectRadius(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionObjectRadius(UMaterialExpressionObjectRadius&&) = delete; \
	UMaterialExpressionObjectRadius(const UMaterialExpressionObjectRadius&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionObjectRadius); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionObjectRadius); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionObjectRadius) \
	NO_API virtual ~UMaterialExpressionObjectRadius();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectRadius_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectRadius_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectRadius_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectRadius_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionObjectRadius;

// ********** End Class UMaterialExpressionObjectRadius ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectRadius_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
