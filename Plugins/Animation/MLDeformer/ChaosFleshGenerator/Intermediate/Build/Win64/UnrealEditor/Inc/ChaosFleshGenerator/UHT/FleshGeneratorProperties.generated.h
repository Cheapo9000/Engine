// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FleshGeneratorProperties.h"

#ifdef CHAOSFLESHGENERATOR_FleshGeneratorProperties_generated_h
#error "FleshGeneratorProperties.generated.h already included, missing '#pragma once' in FleshGeneratorProperties.h"
#endif
#define CHAOSFLESHGENERATOR_FleshGeneratorProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFleshGeneratorSolverTimingGroup **********************************
struct Z_Construct_UScriptStruct_FFleshGeneratorSolverTimingGroup_Statics;
#define FID_Engine_Plugins_Animation_MLDeformer_ChaosFleshGenerator_Source_ChaosFleshGenerator_Private_FleshGeneratorProperties_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFleshGeneratorSolverTimingGroup_Statics; \
	CHAOSFLESHGENERATOR_API static class UScriptStruct* StaticStruct();


struct FFleshGeneratorSolverTimingGroup;
// ********** End ScriptStruct FFleshGeneratorSolverTimingGroup ************************************

// ********** Begin Class UFleshGeneratorProperties ************************************************
struct Z_Construct_UClass_UFleshGeneratorProperties_Statics;
CHAOSFLESHGENERATOR_API UClass* Z_Construct_UClass_UFleshGeneratorProperties_NoRegister();

#define FID_Engine_Plugins_Animation_MLDeformer_ChaosFleshGenerator_Source_ChaosFleshGenerator_Private_FleshGeneratorProperties_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFleshGeneratorProperties(); \
	friend struct ::Z_Construct_UClass_UFleshGeneratorProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSFLESHGENERATOR_API UClass* ::Z_Construct_UClass_UFleshGeneratorProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UFleshGeneratorProperties, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosFleshGenerator"), Z_Construct_UClass_UFleshGeneratorProperties_NoRegister) \
	DECLARE_SERIALIZER(UFleshGeneratorProperties)


#define FID_Engine_Plugins_Animation_MLDeformer_ChaosFleshGenerator_Source_ChaosFleshGenerator_Private_FleshGeneratorProperties_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFleshGeneratorProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFleshGeneratorProperties(UFleshGeneratorProperties&&) = delete; \
	UFleshGeneratorProperties(const UFleshGeneratorProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFleshGeneratorProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFleshGeneratorProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFleshGeneratorProperties) \
	NO_API virtual ~UFleshGeneratorProperties();


#define FID_Engine_Plugins_Animation_MLDeformer_ChaosFleshGenerator_Source_ChaosFleshGenerator_Private_FleshGeneratorProperties_h_40_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_ChaosFleshGenerator_Source_ChaosFleshGenerator_Private_FleshGeneratorProperties_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_ChaosFleshGenerator_Source_ChaosFleshGenerator_Private_FleshGeneratorProperties_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_ChaosFleshGenerator_Source_ChaosFleshGenerator_Private_FleshGeneratorProperties_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFleshGeneratorProperties;

// ********** End Class UFleshGeneratorProperties **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_ChaosFleshGenerator_Source_ChaosFleshGenerator_Private_FleshGeneratorProperties_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
