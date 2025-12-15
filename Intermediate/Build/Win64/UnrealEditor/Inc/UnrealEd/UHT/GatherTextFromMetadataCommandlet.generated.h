// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/GatherTextFromMetadataCommandlet.h"

#ifdef UNREALED_GatherTextFromMetadataCommandlet_generated_h
#error "GatherTextFromMetadataCommandlet.generated.h already included, missing '#pragma once' in GatherTextFromMetadataCommandlet.h"
#endif
#define UNREALED_GatherTextFromMetadataCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGatherTextFromMetaDataCommandlet ****************************************
struct Z_Construct_UClass_UGatherTextFromMetaDataCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UGatherTextFromMetaDataCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromMetadataCommandlet_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGatherTextFromMetaDataCommandlet(); \
	friend struct ::Z_Construct_UClass_UGatherTextFromMetaDataCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UGatherTextFromMetaDataCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UGatherTextFromMetaDataCommandlet, UGatherTextCommandletBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UGatherTextFromMetaDataCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UGatherTextFromMetaDataCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromMetadataCommandlet_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGatherTextFromMetaDataCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGatherTextFromMetaDataCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGatherTextFromMetaDataCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGatherTextFromMetaDataCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGatherTextFromMetaDataCommandlet(UGatherTextFromMetaDataCommandlet&&) = delete; \
	UGatherTextFromMetaDataCommandlet(const UGatherTextFromMetaDataCommandlet&) = delete; \
	NO_API virtual ~UGatherTextFromMetaDataCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromMetadataCommandlet_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromMetadataCommandlet_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromMetadataCommandlet_h_16_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromMetadataCommandlet_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGatherTextFromMetaDataCommandlet;

// ********** End Class UGatherTextFromMetaDataCommandlet ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromMetadataCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
