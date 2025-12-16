// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClothGeneratorProperties.h"

#ifdef CHAOSCLOTHGENERATOR_ClothGeneratorProperties_generated_h
#error "ClothGeneratorProperties.generated.h already included, missing '#pragma once' in ClothGeneratorProperties.h"
#endif
#define CHAOSCLOTHGENERATOR_ClothGeneratorProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UClothGeneratorProperties ************************************************
struct Z_Construct_UClass_UClothGeneratorProperties_Statics;
CHAOSCLOTHGENERATOR_API UClass* Z_Construct_UClass_UClothGeneratorProperties_NoRegister();

#define FID_Engine_Plugins_Animation_MLDeformer_ChaosClothGenerator_Source_ChaosClothGenerator_Private_ClothGeneratorProperties_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothGeneratorProperties(); \
	friend struct ::Z_Construct_UClass_UClothGeneratorProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCLOTHGENERATOR_API UClass* ::Z_Construct_UClass_UClothGeneratorProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UClothGeneratorProperties, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosClothGenerator"), Z_Construct_UClass_UClothGeneratorProperties_NoRegister) \
	DECLARE_SERIALIZER(UClothGeneratorProperties)


#define FID_Engine_Plugins_Animation_MLDeformer_ChaosClothGenerator_Source_ChaosClothGenerator_Private_ClothGeneratorProperties_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClothGeneratorProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClothGeneratorProperties(UClothGeneratorProperties&&) = delete; \
	UClothGeneratorProperties(const UClothGeneratorProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClothGeneratorProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothGeneratorProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothGeneratorProperties) \
	NO_API virtual ~UClothGeneratorProperties();


#define FID_Engine_Plugins_Animation_MLDeformer_ChaosClothGenerator_Source_ChaosClothGenerator_Private_ClothGeneratorProperties_h_14_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_ChaosClothGenerator_Source_ChaosClothGenerator_Private_ClothGeneratorProperties_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_ChaosClothGenerator_Source_ChaosClothGenerator_Private_ClothGeneratorProperties_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_ChaosClothGenerator_Source_ChaosClothGenerator_Private_ClothGeneratorProperties_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClothGeneratorProperties;

// ********** End Class UClothGeneratorProperties **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_ChaosClothGenerator_Source_ChaosClothGenerator_Private_ClothGeneratorProperties_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
