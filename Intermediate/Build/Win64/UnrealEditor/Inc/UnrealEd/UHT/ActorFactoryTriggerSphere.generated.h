// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryTriggerSphere.h"

#ifdef UNREALED_ActorFactoryTriggerSphere_generated_h
#error "ActorFactoryTriggerSphere.generated.h already included, missing '#pragma once' in ActorFactoryTriggerSphere.h"
#endif
#define UNREALED_ActorFactoryTriggerSphere_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryTriggerSphere ***********************************************
struct Z_Construct_UClass_UActorFactoryTriggerSphere_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryTriggerSphere_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerSphere_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryTriggerSphere(); \
	friend struct ::Z_Construct_UClass_UActorFactoryTriggerSphere_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactoryTriggerSphere_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryTriggerSphere, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactoryTriggerSphere_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryTriggerSphere)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerSphere_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryTriggerSphere(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryTriggerSphere) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryTriggerSphere); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryTriggerSphere); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryTriggerSphere(UActorFactoryTriggerSphere&&) = delete; \
	UActorFactoryTriggerSphere(const UActorFactoryTriggerSphere&) = delete; \
	UNREALED_API virtual ~UActorFactoryTriggerSphere();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerSphere_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerSphere_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerSphere_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerSphere_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryTriggerSphere;

// ********** End Class UActorFactoryTriggerSphere *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerSphere_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
