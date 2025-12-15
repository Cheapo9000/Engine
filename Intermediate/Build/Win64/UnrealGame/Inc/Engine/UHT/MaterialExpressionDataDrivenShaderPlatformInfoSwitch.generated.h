// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h"

#ifdef ENGINE_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_generated_h
#error "MaterialExpressionDataDrivenShaderPlatformInfoSwitch.generated.h already included, missing '#pragma once' in MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h"
#endif
#define ENGINE_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDataDrivenShaderPlatformInfoInput ********************************
struct Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FDataDrivenShaderPlatformInfoInput;
// ********** End ScriptStruct FDataDrivenShaderPlatformInfoInput **********************************

// ********** Begin Class UMaterialExpressionDataDrivenShaderPlatformInfoSwitch ********************
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_38_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetNameOptions);


struct Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionDataDrivenShaderPlatformInfoSwitch(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionDataDrivenShaderPlatformInfoSwitch, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionDataDrivenShaderPlatformInfoSwitch)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionDataDrivenShaderPlatformInfoSwitch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionDataDrivenShaderPlatformInfoSwitch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionDataDrivenShaderPlatformInfoSwitch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionDataDrivenShaderPlatformInfoSwitch); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionDataDrivenShaderPlatformInfoSwitch(UMaterialExpressionDataDrivenShaderPlatformInfoSwitch&&) = delete; \
	UMaterialExpressionDataDrivenShaderPlatformInfoSwitch(const UMaterialExpressionDataDrivenShaderPlatformInfoSwitch&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionDataDrivenShaderPlatformInfoSwitch();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_35_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_38_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_38_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionDataDrivenShaderPlatformInfoSwitch;

// ********** End Class UMaterialExpressionDataDrivenShaderPlatformInfoSwitch **********************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h

// ********** Begin Enum EDataDrivenShaderPlatformInfoCondition ************************************
#define FOREACH_ENUM_EDATADRIVENSHADERPLATFORMINFOCONDITION(op) \
	op(COND_True) \
	op(COND_False) 

enum EDataDrivenShaderPlatformInfoCondition : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataDrivenShaderPlatformInfoCondition>();
// ********** End Enum EDataDrivenShaderPlatformInfoCondition **************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
