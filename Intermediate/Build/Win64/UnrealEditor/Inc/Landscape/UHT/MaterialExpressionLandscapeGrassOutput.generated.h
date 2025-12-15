// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionLandscapeGrassOutput.h"

#ifdef LANDSCAPE_MaterialExpressionLandscapeGrassOutput_generated_h
#error "MaterialExpressionLandscapeGrassOutput.generated.h already included, missing '#pragma once' in MaterialExpressionLandscapeGrassOutput.h"
#endif
#define LANDSCAPE_MaterialExpressionLandscapeGrassOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGrassInput *******************************************************
struct Z_Construct_UScriptStruct_FGrassInput_Statics;
#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeGrassOutput_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGrassInput_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


struct FGrassInput;
// ********** End ScriptStruct FGrassInput *********************************************************

// ********** Begin Class UMaterialExpressionLandscapeGrassOutput **********************************
struct Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeGrassOutput_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionLandscapeGrassOutput(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionLandscapeGrassOutput, UMaterialExpressionCustomOutput, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionLandscapeGrassOutput)


#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeGrassOutput_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API UMaterialExpressionLandscapeGrassOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLandscapeGrassOutput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, UMaterialExpressionLandscapeGrassOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLandscapeGrassOutput); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionLandscapeGrassOutput(UMaterialExpressionLandscapeGrassOutput&&) = delete; \
	UMaterialExpressionLandscapeGrassOutput(const UMaterialExpressionLandscapeGrassOutput&) = delete; \
	LANDSCAPE_API virtual ~UMaterialExpressionLandscapeGrassOutput();


#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeGrassOutput_h_40_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeGrassOutput_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeGrassOutput_h_43_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeGrassOutput_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionLandscapeGrassOutput;

// ********** End Class UMaterialExpressionLandscapeGrassOutput ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeGrassOutput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
