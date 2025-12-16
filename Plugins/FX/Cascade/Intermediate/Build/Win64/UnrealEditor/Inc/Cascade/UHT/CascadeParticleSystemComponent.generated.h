// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CascadeParticleSystemComponent.h"

#ifdef CASCADE_CascadeParticleSystemComponent_generated_h
#error "CascadeParticleSystemComponent.generated.h already included, missing '#pragma once' in CascadeParticleSystemComponent.h"
#endif
#define CASCADE_CascadeParticleSystemComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCascadeParticleSystemComponent ******************************************
struct Z_Construct_UClass_UCascadeParticleSystemComponent_Statics;
CASCADE_API UClass* Z_Construct_UClass_UCascadeParticleSystemComponent_NoRegister();

#define FID_Engine_Plugins_FX_Cascade_Source_Cascade_Classes_CascadeParticleSystemComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCascadeParticleSystemComponent(); \
	friend struct ::Z_Construct_UClass_UCascadeParticleSystemComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CASCADE_API UClass* ::Z_Construct_UClass_UCascadeParticleSystemComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCascadeParticleSystemComponent, UParticleSystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cascade"), Z_Construct_UClass_UCascadeParticleSystemComponent_NoRegister) \
	DECLARE_SERIALIZER(UCascadeParticleSystemComponent)


#define FID_Engine_Plugins_FX_Cascade_Source_Cascade_Classes_CascadeParticleSystemComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCascadeParticleSystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCascadeParticleSystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCascadeParticleSystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCascadeParticleSystemComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCascadeParticleSystemComponent(UCascadeParticleSystemComponent&&) = delete; \
	UCascadeParticleSystemComponent(const UCascadeParticleSystemComponent&) = delete; \
	NO_API virtual ~UCascadeParticleSystemComponent();


#define FID_Engine_Plugins_FX_Cascade_Source_Cascade_Classes_CascadeParticleSystemComponent_h_13_PROLOG
#define FID_Engine_Plugins_FX_Cascade_Source_Cascade_Classes_CascadeParticleSystemComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Cascade_Source_Cascade_Classes_CascadeParticleSystemComponent_h_16_INCLASS \
	FID_Engine_Plugins_FX_Cascade_Source_Cascade_Classes_CascadeParticleSystemComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCascadeParticleSystemComponent;

// ********** End Class UCascadeParticleSystemComponent ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Cascade_Source_Cascade_Classes_CascadeParticleSystemComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
