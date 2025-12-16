// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClothGeneratorComponent.h"

#ifdef CHAOSCLOTHGENERATOR_ClothGeneratorComponent_generated_h
#error "ClothGeneratorComponent.generated.h already included, missing '#pragma once' in ClothGeneratorComponent.h"
#endif
#define CHAOSCLOTHGENERATOR_ClothGeneratorComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UClothGeneratorComponent *************************************************
struct Z_Construct_UClass_UClothGeneratorComponent_Statics;
CHAOSCLOTHGENERATOR_API UClass* Z_Construct_UClass_UClothGeneratorComponent_NoRegister();

#define FID_Engine_Plugins_Animation_MLDeformer_ChaosClothGenerator_Source_ChaosClothGenerator_Private_ClothGeneratorComponent_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothGeneratorComponent(); \
	friend struct ::Z_Construct_UClass_UClothGeneratorComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCLOTHGENERATOR_API UClass* ::Z_Construct_UClass_UClothGeneratorComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UClothGeneratorComponent, UChaosClothComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosClothGenerator"), Z_Construct_UClass_UClothGeneratorComponent_NoRegister) \
	DECLARE_SERIALIZER(UClothGeneratorComponent)


#define FID_Engine_Plugins_Animation_MLDeformer_ChaosClothGenerator_Source_ChaosClothGenerator_Private_ClothGeneratorComponent_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClothGeneratorComponent(UClothGeneratorComponent&&) = delete; \
	UClothGeneratorComponent(const UClothGeneratorComponent&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothGeneratorComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothGeneratorComponent)


#define FID_Engine_Plugins_Animation_MLDeformer_ChaosClothGenerator_Source_ChaosClothGenerator_Private_ClothGeneratorComponent_h_31_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_ChaosClothGenerator_Source_ChaosClothGenerator_Private_ClothGeneratorComponent_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_ChaosClothGenerator_Source_ChaosClothGenerator_Private_ClothGeneratorComponent_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_ChaosClothGenerator_Source_ChaosClothGenerator_Private_ClothGeneratorComponent_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClothGeneratorComponent;

// ********** End Class UClothGeneratorComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_ChaosClothGenerator_Source_ChaosClothGenerator_Private_ClothGeneratorComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
