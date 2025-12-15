// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionVertexColor.h"

#ifdef ENGINE_MaterialExpressionVertexColor_generated_h
#error "MaterialExpressionVertexColor.generated.h already included, missing '#pragma once' in MaterialExpressionVertexColor.h"
#endif
#define ENGINE_MaterialExpressionVertexColor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionVertexColor *******************************************
struct Z_Construct_UClass_UMaterialExpressionVertexColor_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVertexColor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVertexColor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionVertexColor(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionVertexColor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionVertexColor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionVertexColor, UMaterialExpressionExternalCodeBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionVertexColor_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionVertexColor)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVertexColor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionVertexColor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionVertexColor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionVertexColor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionVertexColor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionVertexColor(UMaterialExpressionVertexColor&&) = delete; \
	UMaterialExpressionVertexColor(const UMaterialExpressionVertexColor&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionVertexColor();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVertexColor_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVertexColor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVertexColor_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVertexColor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionVertexColor;

// ********** End Class UMaterialExpressionVertexColor *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVertexColor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
