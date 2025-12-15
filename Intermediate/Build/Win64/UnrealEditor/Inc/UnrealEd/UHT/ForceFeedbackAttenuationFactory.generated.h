// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/ForceFeedbackAttenuationFactory.h"

#ifdef UNREALED_ForceFeedbackAttenuationFactory_generated_h
#error "ForceFeedbackAttenuationFactory.generated.h already included, missing '#pragma once' in ForceFeedbackAttenuationFactory.h"
#endif
#define UNREALED_ForceFeedbackAttenuationFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UForceFeedbackAttenuationFactory *****************************************
struct Z_Construct_UClass_UForceFeedbackAttenuationFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UForceFeedbackAttenuationFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ForceFeedbackAttenuationFactory_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUForceFeedbackAttenuationFactory(); \
	friend struct ::Z_Construct_UClass_UForceFeedbackAttenuationFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UForceFeedbackAttenuationFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UForceFeedbackAttenuationFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UForceFeedbackAttenuationFactory_NoRegister) \
	DECLARE_SERIALIZER(UForceFeedbackAttenuationFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ForceFeedbackAttenuationFactory_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UForceFeedbackAttenuationFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UForceFeedbackAttenuationFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UForceFeedbackAttenuationFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UForceFeedbackAttenuationFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UForceFeedbackAttenuationFactory(UForceFeedbackAttenuationFactory&&) = delete; \
	UForceFeedbackAttenuationFactory(const UForceFeedbackAttenuationFactory&) = delete; \
	UNREALED_API virtual ~UForceFeedbackAttenuationFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ForceFeedbackAttenuationFactory_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ForceFeedbackAttenuationFactory_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ForceFeedbackAttenuationFactory_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ForceFeedbackAttenuationFactory_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UForceFeedbackAttenuationFactory;

// ********** End Class UForceFeedbackAttenuationFactory *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ForceFeedbackAttenuationFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
