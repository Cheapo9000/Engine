// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionMaterialFunctionCall.h"

#ifdef ENGINE_MaterialExpressionMaterialFunctionCall_generated_h
#error "MaterialExpressionMaterialFunctionCall.generated.h already included, missing '#pragma once' in MaterialExpressionMaterialFunctionCall.h"
#endif
#define ENGINE_MaterialExpressionMaterialFunctionCall_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialFunctionInterface;

// ********** Begin ScriptStruct FFunctionExpressionInput ******************************************
struct Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialFunctionCall_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FFunctionExpressionInput;
// ********** End ScriptStruct FFunctionExpressionInput ********************************************

// ********** Begin ScriptStruct FFunctionExpressionOutput *****************************************
struct Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialFunctionCall_h_54_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FFunctionExpressionOutput;
// ********** End ScriptStruct FFunctionExpressionOutput *******************************************

// ********** Begin Class UMaterialExpressionMaterialFunctionCall **********************************
#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialFunctionCall_h_82_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execSetMaterialFunction);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialFunctionCall_h_82_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialFunctionCall_h_82_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionMaterialFunctionCall(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionMaterialFunctionCall, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionMaterialFunctionCall)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialFunctionCall_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionMaterialFunctionCall(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionMaterialFunctionCall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionMaterialFunctionCall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionMaterialFunctionCall); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionMaterialFunctionCall(UMaterialExpressionMaterialFunctionCall&&) = delete; \
	UMaterialExpressionMaterialFunctionCall(const UMaterialExpressionMaterialFunctionCall&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionMaterialFunctionCall();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialFunctionCall_h_79_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialFunctionCall_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialFunctionCall_h_82_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialFunctionCall_h_82_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialFunctionCall_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionMaterialFunctionCall;

// ********** End Class UMaterialExpressionMaterialFunctionCall ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialFunctionCall_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
