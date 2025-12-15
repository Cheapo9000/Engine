// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/AnimBoneCompressionSettingsFactory.h"

#ifdef UNREALED_AnimBoneCompressionSettingsFactory_generated_h
#error "AnimBoneCompressionSettingsFactory.generated.h already included, missing '#pragma once' in AnimBoneCompressionSettingsFactory.h"
#endif
#define UNREALED_AnimBoneCompressionSettingsFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimBoneCompressionSettingsFactory **************************************
struct Z_Construct_UClass_UAnimBoneCompressionSettingsFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UAnimBoneCompressionSettingsFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBoneCompressionSettingsFactory_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUAnimBoneCompressionSettingsFactory(); \
	friend struct ::Z_Construct_UClass_UAnimBoneCompressionSettingsFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UAnimBoneCompressionSettingsFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimBoneCompressionSettingsFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UAnimBoneCompressionSettingsFactory_NoRegister) \
	DECLARE_SERIALIZER(UAnimBoneCompressionSettingsFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBoneCompressionSettingsFactory_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UAnimBoneCompressionSettingsFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimBoneCompressionSettingsFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UAnimBoneCompressionSettingsFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimBoneCompressionSettingsFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimBoneCompressionSettingsFactory(UAnimBoneCompressionSettingsFactory&&) = delete; \
	UAnimBoneCompressionSettingsFactory(const UAnimBoneCompressionSettingsFactory&) = delete; \
	UNREALED_API virtual ~UAnimBoneCompressionSettingsFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBoneCompressionSettingsFactory_h_9_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBoneCompressionSettingsFactory_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBoneCompressionSettingsFactory_h_12_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBoneCompressionSettingsFactory_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimBoneCompressionSettingsFactory;

// ********** End Class UAnimBoneCompressionSettingsFactory ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBoneCompressionSettingsFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
