// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionShadingPathSwitch.h"

#ifdef ENGINE_MaterialExpressionShadingPathSwitch_generated_h
#error "MaterialExpressionShadingPathSwitch.generated.h already included, missing '#pragma once' in MaterialExpressionShadingPathSwitch.h"
#endif
#define ENGINE_MaterialExpressionShadingPathSwitch_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionShadingPathSwitch *************************************
struct Z_Construct_UClass_UMaterialExpressionShadingPathSwitch_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionShadingPathSwitch_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShadingPathSwitch_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionShadingPathSwitch(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionShadingPathSwitch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionShadingPathSwitch_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionShadingPathSwitch, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionShadingPathSwitch_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionShadingPathSwitch)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShadingPathSwitch_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionShadingPathSwitch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionShadingPathSwitch(UMaterialExpressionShadingPathSwitch&&) = delete; \
	UMaterialExpressionShadingPathSwitch(const UMaterialExpressionShadingPathSwitch&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionShadingPathSwitch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionShadingPathSwitch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionShadingPathSwitch) \
	ENGINE_API virtual ~UMaterialExpressionShadingPathSwitch();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShadingPathSwitch_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShadingPathSwitch_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShadingPathSwitch_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShadingPathSwitch_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionShadingPathSwitch;

// ********** End Class UMaterialExpressionShadingPathSwitch ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionShadingPathSwitch_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
