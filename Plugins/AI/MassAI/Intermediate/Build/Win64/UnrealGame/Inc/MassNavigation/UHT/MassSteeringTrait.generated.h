// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Steering/MassSteeringTrait.h"

#ifdef MASSNAVIGATION_MassSteeringTrait_generated_h
#error "MassSteeringTrait.generated.h already included, missing '#pragma once' in MassSteeringTrait.h"
#endif
#define MASSNAVIGATION_MassSteeringTrait_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassSteeringTrait *******************************************************
struct Z_Construct_UClass_UMassSteeringTrait_Statics;
MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassSteeringTrait_NoRegister();

#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringTrait_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassSteeringTrait(); \
	friend struct ::Z_Construct_UClass_UMassSteeringTrait_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSNAVIGATION_API UClass* ::Z_Construct_UClass_UMassSteeringTrait_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassSteeringTrait, UMassEntityTraitBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassNavigation"), Z_Construct_UClass_UMassSteeringTrait_NoRegister) \
	DECLARE_SERIALIZER(UMassSteeringTrait)


#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringTrait_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSNAVIGATION_API UMassSteeringTrait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassSteeringTrait(UMassSteeringTrait&&) = delete; \
	UMassSteeringTrait(const UMassSteeringTrait&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSNAVIGATION_API, UMassSteeringTrait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassSteeringTrait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassSteeringTrait) \
	MASSNAVIGATION_API virtual ~UMassSteeringTrait();


#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringTrait_h_12_PROLOG
#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringTrait_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringTrait_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringTrait_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassSteeringTrait;

// ********** End Class UMassSteeringTrait *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringTrait_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
