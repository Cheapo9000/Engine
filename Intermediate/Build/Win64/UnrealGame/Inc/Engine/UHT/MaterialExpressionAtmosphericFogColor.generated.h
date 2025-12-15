// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionAtmosphericFogColor.h"

#ifdef ENGINE_MaterialExpressionAtmosphericFogColor_generated_h
#error "MaterialExpressionAtmosphericFogColor.generated.h already included, missing '#pragma once' in MaterialExpressionAtmosphericFogColor.h"
#endif
#define ENGINE_MaterialExpressionAtmosphericFogColor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionAtmosphericFogColor ***********************************
struct Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAtmosphericFogColor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionAtmosphericFogColor(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionAtmosphericFogColor, UMaterialExpressionExternalCodeBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionAtmosphericFogColor)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAtmosphericFogColor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionAtmosphericFogColor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionAtmosphericFogColor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionAtmosphericFogColor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionAtmosphericFogColor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionAtmosphericFogColor(UMaterialExpressionAtmosphericFogColor&&) = delete; \
	UMaterialExpressionAtmosphericFogColor(const UMaterialExpressionAtmosphericFogColor&) = delete; \
	NO_API virtual ~UMaterialExpressionAtmosphericFogColor();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAtmosphericFogColor_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAtmosphericFogColor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAtmosphericFogColor_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAtmosphericFogColor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionAtmosphericFogColor;

// ********** End Class UMaterialExpressionAtmosphericFogColor *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAtmosphericFogColor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
