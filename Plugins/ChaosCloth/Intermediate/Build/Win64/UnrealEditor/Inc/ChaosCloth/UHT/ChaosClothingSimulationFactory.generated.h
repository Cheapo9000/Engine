// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosCloth/ChaosClothingSimulationFactory.h"

#ifdef CHAOSCLOTH_ChaosClothingSimulationFactory_generated_h
#error "ChaosClothingSimulationFactory.generated.h already included, missing '#pragma once' in ChaosClothingSimulationFactory.h"
#endif
#define CHAOSCLOTH_ChaosClothingSimulationFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosClothingSimulationFactory ******************************************
struct Z_Construct_UClass_UChaosClothingSimulationFactory_Statics;
CHAOSCLOTH_API UClass* Z_Construct_UClass_UChaosClothingSimulationFactory_NoRegister();

#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationFactory_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosClothingSimulationFactory(); \
	friend struct ::Z_Construct_UClass_UChaosClothingSimulationFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCLOTH_API UClass* ::Z_Construct_UClass_UChaosClothingSimulationFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosClothingSimulationFactory, UClothingSimulationFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosCloth"), Z_Construct_UClass_UChaosClothingSimulationFactory_NoRegister) \
	DECLARE_SERIALIZER(UChaosClothingSimulationFactory)


#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationFactory_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSCLOTH_API UChaosClothingSimulationFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosClothingSimulationFactory(UChaosClothingSimulationFactory&&) = delete; \
	UChaosClothingSimulationFactory(const UChaosClothingSimulationFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCLOTH_API, UChaosClothingSimulationFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosClothingSimulationFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosClothingSimulationFactory) \
	CHAOSCLOTH_API virtual ~UChaosClothingSimulationFactory();


#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationFactory_h_9_PROLOG
#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationFactory_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationFactory_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationFactory_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosClothingSimulationFactory;

// ********** End Class UChaosClothingSimulationFactory ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
