// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionPhysicalMaterialOutput.h"

#ifdef RENDERTRACE_MaterialExpressionPhysicalMaterialOutput_generated_h
#error "MaterialExpressionPhysicalMaterialOutput.generated.h already included, missing '#pragma once' in MaterialExpressionPhysicalMaterialOutput.h"
#endif
#define RENDERTRACE_MaterialExpressionPhysicalMaterialOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPhysicalMaterialTraceInput ***************************************
struct Z_Construct_UScriptStruct_FPhysicalMaterialTraceInput_Statics;
#define FID_Engine_Plugins_Runtime_RenderTrace_Source_Private_Materials_MaterialExpressionPhysicalMaterialOutput_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPhysicalMaterialTraceInput_Statics; \
	RENDERTRACE_API static class UScriptStruct* StaticStruct();


struct FPhysicalMaterialTraceInput;
// ********** End ScriptStruct FPhysicalMaterialTraceInput *****************************************

// ********** Begin Class UMaterialExpressionPhysicalMaterialOutput ********************************
struct Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput_Statics;
RENDERTRACE_API UClass* Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput_NoRegister();

#define FID_Engine_Plugins_Runtime_RenderTrace_Source_Private_Materials_MaterialExpressionPhysicalMaterialOutput_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionPhysicalMaterialOutput(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RENDERTRACE_API UClass* ::Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionPhysicalMaterialOutput, UMaterialExpressionCustomOutput, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/RenderTrace"), Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionPhysicalMaterialOutput)


#define FID_Engine_Plugins_Runtime_RenderTrace_Source_Private_Materials_MaterialExpressionPhysicalMaterialOutput_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RENDERTRACE_API UMaterialExpressionPhysicalMaterialOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionPhysicalMaterialOutput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RENDERTRACE_API, UMaterialExpressionPhysicalMaterialOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionPhysicalMaterialOutput); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionPhysicalMaterialOutput(UMaterialExpressionPhysicalMaterialOutput&&) = delete; \
	UMaterialExpressionPhysicalMaterialOutput(const UMaterialExpressionPhysicalMaterialOutput&) = delete; \
	RENDERTRACE_API virtual ~UMaterialExpressionPhysicalMaterialOutput();


#define FID_Engine_Plugins_Runtime_RenderTrace_Source_Private_Materials_MaterialExpressionPhysicalMaterialOutput_h_35_PROLOG
#define FID_Engine_Plugins_Runtime_RenderTrace_Source_Private_Materials_MaterialExpressionPhysicalMaterialOutput_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RenderTrace_Source_Private_Materials_MaterialExpressionPhysicalMaterialOutput_h_38_INCLASS \
	FID_Engine_Plugins_Runtime_RenderTrace_Source_Private_Materials_MaterialExpressionPhysicalMaterialOutput_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionPhysicalMaterialOutput;

// ********** End Class UMaterialExpressionPhysicalMaterialOutput **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RenderTrace_Source_Private_Materials_MaterialExpressionPhysicalMaterialOutput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
