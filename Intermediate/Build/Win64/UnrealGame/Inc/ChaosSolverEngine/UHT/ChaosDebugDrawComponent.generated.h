// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chaos/ChaosDebugDrawComponent.h"

#ifdef CHAOSSOLVERENGINE_ChaosDebugDrawComponent_generated_h
#error "ChaosDebugDrawComponent.generated.h already included, missing '#pragma once' in ChaosDebugDrawComponent.h"
#endif
#define CHAOSSOLVERENGINE_ChaosDebugDrawComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosDebugDrawComponent *************************************************
struct Z_Construct_UClass_UChaosDebugDrawComponent_Statics;
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosDebugDrawComponent_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosDebugDrawComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosDebugDrawComponent(); \
	friend struct ::Z_Construct_UClass_UChaosDebugDrawComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSSOLVERENGINE_API UClass* ::Z_Construct_UClass_UChaosDebugDrawComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosDebugDrawComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosSolverEngine"), Z_Construct_UClass_UChaosDebugDrawComponent_NoRegister) \
	DECLARE_SERIALIZER(UChaosDebugDrawComponent)


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosDebugDrawComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosDebugDrawComponent(UChaosDebugDrawComponent&&) = delete; \
	UChaosDebugDrawComponent(const UChaosDebugDrawComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSSOLVERENGINE_API, UChaosDebugDrawComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosDebugDrawComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosDebugDrawComponent) \
	CHAOSSOLVERENGINE_API virtual ~UChaosDebugDrawComponent();


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosDebugDrawComponent_h_13_PROLOG
#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosDebugDrawComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosDebugDrawComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosDebugDrawComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosDebugDrawComponent;

// ********** End Class UChaosDebugDrawComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosDebugDrawComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
