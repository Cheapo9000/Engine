// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionMotionVectorWorldOffsetOutput.h"

#ifdef ENGINE_MaterialExpressionMotionVectorWorldOffsetOutput_generated_h
#error "MaterialExpressionMotionVectorWorldOffsetOutput.generated.h already included, missing '#pragma once' in MaterialExpressionMotionVectorWorldOffsetOutput.h"
#endif
#define ENGINE_MaterialExpressionMotionVectorWorldOffsetOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionMotionVectorWorldOffsetOutput *************************
struct Z_Construct_UClass_UMaterialExpressionMotionVectorWorldOffsetOutput_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMotionVectorWorldOffsetOutput_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMotionVectorWorldOffsetOutput_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionMotionVectorWorldOffsetOutput(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionMotionVectorWorldOffsetOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionMotionVectorWorldOffsetOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionMotionVectorWorldOffsetOutput, UMaterialExpressionCustomOutput, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionMotionVectorWorldOffsetOutput_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionMotionVectorWorldOffsetOutput)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMotionVectorWorldOffsetOutput_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionMotionVectorWorldOffsetOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionMotionVectorWorldOffsetOutput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionMotionVectorWorldOffsetOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionMotionVectorWorldOffsetOutput); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionMotionVectorWorldOffsetOutput(UMaterialExpressionMotionVectorWorldOffsetOutput&&) = delete; \
	UMaterialExpressionMotionVectorWorldOffsetOutput(const UMaterialExpressionMotionVectorWorldOffsetOutput&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionMotionVectorWorldOffsetOutput();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMotionVectorWorldOffsetOutput_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMotionVectorWorldOffsetOutput_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMotionVectorWorldOffsetOutput_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMotionVectorWorldOffsetOutput_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionMotionVectorWorldOffsetOutput;

// ********** End Class UMaterialExpressionMotionVectorWorldOffsetOutput ***************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMotionVectorWorldOffsetOutput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
