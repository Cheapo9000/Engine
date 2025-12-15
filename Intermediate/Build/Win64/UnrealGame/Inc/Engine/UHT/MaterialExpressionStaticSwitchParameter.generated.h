// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionStaticSwitchParameter.h"

#ifdef ENGINE_MaterialExpressionStaticSwitchParameter_generated_h
#error "MaterialExpressionStaticSwitchParameter.generated.h already included, missing '#pragma once' in MaterialExpressionStaticSwitchParameter.h"
#endif
#define ENGINE_MaterialExpressionStaticSwitchParameter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionStaticSwitchParameter *********************************
struct Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticSwitchParameter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionStaticSwitchParameter(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionStaticSwitchParameter, UMaterialExpressionStaticBoolParameter, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionStaticSwitchParameter)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticSwitchParameter_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionStaticSwitchParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionStaticSwitchParameter(UMaterialExpressionStaticSwitchParameter&&) = delete; \
	UMaterialExpressionStaticSwitchParameter(const UMaterialExpressionStaticSwitchParameter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionStaticSwitchParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionStaticSwitchParameter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionStaticSwitchParameter) \
	ENGINE_API virtual ~UMaterialExpressionStaticSwitchParameter();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticSwitchParameter_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticSwitchParameter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticSwitchParameter_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticSwitchParameter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionStaticSwitchParameter;

// ********** End Class UMaterialExpressionStaticSwitchParameter ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticSwitchParameter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
