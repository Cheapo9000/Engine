// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/ForceFeedbackEffectFactory.h"

#ifdef UNREALED_ForceFeedbackEffectFactory_generated_h
#error "ForceFeedbackEffectFactory.generated.h already included, missing '#pragma once' in ForceFeedbackEffectFactory.h"
#endif
#define UNREALED_ForceFeedbackEffectFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UForceFeedbackEffectFactory **********************************************
struct Z_Construct_UClass_UForceFeedbackEffectFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UForceFeedbackEffectFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ForceFeedbackEffectFactory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUForceFeedbackEffectFactory(); \
	friend struct ::Z_Construct_UClass_UForceFeedbackEffectFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UForceFeedbackEffectFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UForceFeedbackEffectFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UForceFeedbackEffectFactory_NoRegister) \
	DECLARE_SERIALIZER(UForceFeedbackEffectFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ForceFeedbackEffectFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UForceFeedbackEffectFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UForceFeedbackEffectFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UForceFeedbackEffectFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UForceFeedbackEffectFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UForceFeedbackEffectFactory(UForceFeedbackEffectFactory&&) = delete; \
	UForceFeedbackEffectFactory(const UForceFeedbackEffectFactory&) = delete; \
	UNREALED_API virtual ~UForceFeedbackEffectFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ForceFeedbackEffectFactory_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ForceFeedbackEffectFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ForceFeedbackEffectFactory_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ForceFeedbackEffectFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UForceFeedbackEffectFactory;

// ********** End Class UForceFeedbackEffectFactory ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ForceFeedbackEffectFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
