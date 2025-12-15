// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionFirstPersonOutput.h"

#ifdef ENGINE_MaterialExpressionFirstPersonOutput_generated_h
#error "MaterialExpressionFirstPersonOutput.generated.h already included, missing '#pragma once' in MaterialExpressionFirstPersonOutput.h"
#endif
#define ENGINE_MaterialExpressionFirstPersonOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionFirstPersonOutput *************************************
struct Z_Construct_UClass_UMaterialExpressionFirstPersonOutput_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFirstPersonOutput_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFirstPersonOutput_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionFirstPersonOutput(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionFirstPersonOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionFirstPersonOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionFirstPersonOutput, UMaterialExpressionCustomOutput, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionFirstPersonOutput_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionFirstPersonOutput)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFirstPersonOutput_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionFirstPersonOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionFirstPersonOutput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionFirstPersonOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionFirstPersonOutput); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionFirstPersonOutput(UMaterialExpressionFirstPersonOutput&&) = delete; \
	UMaterialExpressionFirstPersonOutput(const UMaterialExpressionFirstPersonOutput&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionFirstPersonOutput();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFirstPersonOutput_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFirstPersonOutput_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFirstPersonOutput_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFirstPersonOutput_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionFirstPersonOutput;

// ********** End Class UMaterialExpressionFirstPersonOutput ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFirstPersonOutput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
