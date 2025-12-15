// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/AnimCurveCompressionSettingsFactory.h"

#ifdef UNREALED_AnimCurveCompressionSettingsFactory_generated_h
#error "AnimCurveCompressionSettingsFactory.generated.h already included, missing '#pragma once' in AnimCurveCompressionSettingsFactory.h"
#endif
#define UNREALED_AnimCurveCompressionSettingsFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimCurveCompressionSettingsFactory *************************************
struct Z_Construct_UClass_UAnimCurveCompressionSettingsFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UAnimCurveCompressionSettingsFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimCurveCompressionSettingsFactory_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUAnimCurveCompressionSettingsFactory(); \
	friend struct ::Z_Construct_UClass_UAnimCurveCompressionSettingsFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UAnimCurveCompressionSettingsFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimCurveCompressionSettingsFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UAnimCurveCompressionSettingsFactory_NoRegister) \
	DECLARE_SERIALIZER(UAnimCurveCompressionSettingsFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimCurveCompressionSettingsFactory_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UAnimCurveCompressionSettingsFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimCurveCompressionSettingsFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UAnimCurveCompressionSettingsFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimCurveCompressionSettingsFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimCurveCompressionSettingsFactory(UAnimCurveCompressionSettingsFactory&&) = delete; \
	UAnimCurveCompressionSettingsFactory(const UAnimCurveCompressionSettingsFactory&) = delete; \
	UNREALED_API virtual ~UAnimCurveCompressionSettingsFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimCurveCompressionSettingsFactory_h_9_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimCurveCompressionSettingsFactory_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimCurveCompressionSettingsFactory_h_12_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimCurveCompressionSettingsFactory_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimCurveCompressionSettingsFactory;

// ********** End Class UAnimCurveCompressionSettingsFactory ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimCurveCompressionSettingsFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
