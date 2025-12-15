// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionQualitySwitch.h"

#ifdef ENGINE_MaterialExpressionQualitySwitch_generated_h
#error "MaterialExpressionQualitySwitch.generated.h already included, missing '#pragma once' in MaterialExpressionQualitySwitch.h"
#endif
#define ENGINE_MaterialExpressionQualitySwitch_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionQualitySwitch *****************************************
struct Z_Construct_UClass_UMaterialExpressionQualitySwitch_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionQualitySwitch_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionQualitySwitch_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionQualitySwitch(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionQualitySwitch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionQualitySwitch_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionQualitySwitch, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionQualitySwitch_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionQualitySwitch)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionQualitySwitch_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionQualitySwitch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionQualitySwitch(UMaterialExpressionQualitySwitch&&) = delete; \
	UMaterialExpressionQualitySwitch(const UMaterialExpressionQualitySwitch&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionQualitySwitch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionQualitySwitch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionQualitySwitch) \
	ENGINE_API virtual ~UMaterialExpressionQualitySwitch();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionQualitySwitch_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionQualitySwitch_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionQualitySwitch_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionQualitySwitch_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionQualitySwitch;

// ********** End Class UMaterialExpressionQualitySwitch *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionQualitySwitch_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
