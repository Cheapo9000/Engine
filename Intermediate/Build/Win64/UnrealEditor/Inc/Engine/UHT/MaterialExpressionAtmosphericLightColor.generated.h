// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionAtmosphericLightColor.h"

#ifdef ENGINE_MaterialExpressionAtmosphericLightColor_generated_h
#error "MaterialExpressionAtmosphericLightColor.generated.h already included, missing '#pragma once' in MaterialExpressionAtmosphericLightColor.h"
#endif
#define ENGINE_MaterialExpressionAtmosphericLightColor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionAtmosphericLightColor *********************************
struct Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAtmosphericLightColor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionAtmosphericLightColor(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionAtmosphericLightColor, UMaterialExpressionExternalCodeBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionAtmosphericLightColor)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAtmosphericLightColor_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionAtmosphericLightColor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionAtmosphericLightColor(UMaterialExpressionAtmosphericLightColor&&) = delete; \
	UMaterialExpressionAtmosphericLightColor(const UMaterialExpressionAtmosphericLightColor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionAtmosphericLightColor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionAtmosphericLightColor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionAtmosphericLightColor) \
	NO_API virtual ~UMaterialExpressionAtmosphericLightColor();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAtmosphericLightColor_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAtmosphericLightColor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAtmosphericLightColor_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAtmosphericLightColor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionAtmosphericLightColor;

// ********** End Class UMaterialExpressionAtmosphericLightColor ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAtmosphericLightColor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
