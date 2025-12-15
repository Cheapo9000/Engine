// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionShaderStageSwitch.h"

#ifdef ENGINE_MaterialExpressionShaderStageSwitch_generated_h
#error "MaterialExpressionShaderStageSwitch.generated.h already included, missing '#pragma once' in MaterialExpressionShaderStageSwitch.h"
#endif
#define ENGINE_MaterialExpressionShaderStageSwitch_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionShaderStageSwitch *************************************
struct Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShaderStageSwitch_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionShaderStageSwitch(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionShaderStageSwitch, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionShaderStageSwitch)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShaderStageSwitch_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionShaderStageSwitch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionShaderStageSwitch(UMaterialExpressionShaderStageSwitch&&) = delete; \
	UMaterialExpressionShaderStageSwitch(const UMaterialExpressionShaderStageSwitch&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionShaderStageSwitch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionShaderStageSwitch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionShaderStageSwitch) \
	ENGINE_API virtual ~UMaterialExpressionShaderStageSwitch();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShaderStageSwitch_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShaderStageSwitch_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShaderStageSwitch_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShaderStageSwitch_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionShaderStageSwitch;

// ********** End Class UMaterialExpressionShaderStageSwitch ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShaderStageSwitch_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
