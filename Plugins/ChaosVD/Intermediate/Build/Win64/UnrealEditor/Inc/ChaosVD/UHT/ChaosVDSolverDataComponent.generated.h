// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ChaosVDSolverDataComponent.h"

#ifdef CHAOSVD_ChaosVDSolverDataComponent_generated_h
#error "ChaosVDSolverDataComponent.generated.h already included, missing '#pragma once' in ChaosVDSolverDataComponent.h"
#endif
#define CHAOSVD_ChaosVDSolverDataComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosVDSolverDataComponent **********************************************
struct Z_Construct_UClass_UChaosVDSolverDataComponent_Statics;
CHAOSVD_API UClass* Z_Construct_UClass_UChaosVDSolverDataComponent_NoRegister();

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Components_ChaosVDSolverDataComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosVDSolverDataComponent(); \
	friend struct ::Z_Construct_UClass_UChaosVDSolverDataComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVD_API UClass* ::Z_Construct_UClass_UChaosVDSolverDataComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosVDSolverDataComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVD"), Z_Construct_UClass_UChaosVDSolverDataComponent_NoRegister) \
	DECLARE_SERIALIZER(UChaosVDSolverDataComponent)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Components_ChaosVDSolverDataComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSVD_API UChaosVDSolverDataComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosVDSolverDataComponent(UChaosVDSolverDataComponent&&) = delete; \
	UChaosVDSolverDataComponent(const UChaosVDSolverDataComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSVD_API, UChaosVDSolverDataComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDSolverDataComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosVDSolverDataComponent) \
	CHAOSVD_API virtual ~UChaosVDSolverDataComponent();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Components_ChaosVDSolverDataComponent_h_16_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Components_ChaosVDSolverDataComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Components_ChaosVDSolverDataComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Components_ChaosVDSolverDataComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosVDSolverDataComponent;

// ********** End Class UChaosVDSolverDataComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Components_ChaosVDSolverDataComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
