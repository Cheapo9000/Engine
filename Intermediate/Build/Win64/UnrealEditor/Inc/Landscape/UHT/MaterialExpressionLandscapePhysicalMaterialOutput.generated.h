// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionLandscapePhysicalMaterialOutput.h"

#ifdef LANDSCAPE_MaterialExpressionLandscapePhysicalMaterialOutput_generated_h
#error "MaterialExpressionLandscapePhysicalMaterialOutput.generated.h already included, missing '#pragma once' in MaterialExpressionLandscapePhysicalMaterialOutput.h"
#endif
#define LANDSCAPE_MaterialExpressionLandscapePhysicalMaterialOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPhysicalMaterialInput ********************************************
struct Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics;
#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


struct FPhysicalMaterialInput;
// ********** End ScriptStruct FPhysicalMaterialInput **********************************************

// ********** Begin Class UMaterialExpressionLandscapePhysicalMaterialOutput ***********************
struct Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionLandscapePhysicalMaterialOutput(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionLandscapePhysicalMaterialOutput, UMaterialExpressionCustomOutput, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionLandscapePhysicalMaterialOutput)


#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API UMaterialExpressionLandscapePhysicalMaterialOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLandscapePhysicalMaterialOutput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, UMaterialExpressionLandscapePhysicalMaterialOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLandscapePhysicalMaterialOutput); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionLandscapePhysicalMaterialOutput(UMaterialExpressionLandscapePhysicalMaterialOutput&&) = delete; \
	UMaterialExpressionLandscapePhysicalMaterialOutput(const UMaterialExpressionLandscapePhysicalMaterialOutput&) = delete; \
	LANDSCAPE_API virtual ~UMaterialExpressionLandscapePhysicalMaterialOutput();


#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_32_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_35_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionLandscapePhysicalMaterialOutput;

// ********** End Class UMaterialExpressionLandscapePhysicalMaterialOutput *************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
