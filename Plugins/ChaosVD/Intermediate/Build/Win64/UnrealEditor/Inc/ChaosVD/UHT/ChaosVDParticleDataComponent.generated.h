// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ChaosVDParticleDataComponent.h"

#ifdef CHAOSVD_ChaosVDParticleDataComponent_generated_h
#error "ChaosVDParticleDataComponent.generated.h already included, missing '#pragma once' in ChaosVDParticleDataComponent.h"
#endif
#define CHAOSVD_ChaosVDParticleDataComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosVDParticleDataComponent ********************************************
struct Z_Construct_UClass_UChaosVDParticleDataComponent_Statics;
CHAOSVD_API UClass* Z_Construct_UClass_UChaosVDParticleDataComponent_NoRegister();

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Components_ChaosVDParticleDataComponent_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosVDParticleDataComponent(); \
	friend struct ::Z_Construct_UClass_UChaosVDParticleDataComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVD_API UClass* ::Z_Construct_UClass_UChaosVDParticleDataComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosVDParticleDataComponent, UChaosVDSolverDataComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVD"), Z_Construct_UClass_UChaosVDParticleDataComponent_NoRegister) \
	DECLARE_SERIALIZER(UChaosVDParticleDataComponent)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Components_ChaosVDParticleDataComponent_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosVDParticleDataComponent(UChaosVDParticleDataComponent&&) = delete; \
	UChaosVDParticleDataComponent(const UChaosVDParticleDataComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVDParticleDataComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDParticleDataComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosVDParticleDataComponent) \
	NO_API virtual ~UChaosVDParticleDataComponent();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Components_ChaosVDParticleDataComponent_h_28_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Components_ChaosVDParticleDataComponent_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Components_ChaosVDParticleDataComponent_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Components_ChaosVDParticleDataComponent_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosVDParticleDataComponent;

// ********** End Class UChaosVDParticleDataComponent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Components_ChaosVDParticleDataComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
