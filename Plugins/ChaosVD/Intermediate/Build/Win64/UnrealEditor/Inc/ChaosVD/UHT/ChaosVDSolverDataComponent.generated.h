// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ChaosVDSolverDataComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSVD_ChaosVDSolverDataComponent_generated_h
#error "ChaosVDSolverDataComponent.generated.h already included, missing '#pragma once' in ChaosVDSolverDataComponent.h"
#endif
#define CHAOSVD_ChaosVDSolverDataComponent_generated_h

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Components_ChaosVDSolverDataComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosVDSolverDataComponent(); \
	friend struct Z_Construct_UClass_UChaosVDSolverDataComponent_Statics; \
public: \
	DECLARE_CLASS(UChaosVDSolverDataComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVD"), NO_API) \
	DECLARE_SERIALIZER(UChaosVDSolverDataComponent)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Components_ChaosVDSolverDataComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVDSolverDataComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChaosVDSolverDataComponent(UChaosVDSolverDataComponent&&); \
	UChaosVDSolverDataComponent(const UChaosVDSolverDataComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVDSolverDataComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDSolverDataComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosVDSolverDataComponent) \
	NO_API virtual ~UChaosVDSolverDataComponent();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Components_ChaosVDSolverDataComponent_h_13_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Components_ChaosVDSolverDataComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Components_ChaosVDSolverDataComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Components_ChaosVDSolverDataComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSVD_API UClass* StaticClass<class UChaosVDSolverDataComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Components_ChaosVDSolverDataComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
