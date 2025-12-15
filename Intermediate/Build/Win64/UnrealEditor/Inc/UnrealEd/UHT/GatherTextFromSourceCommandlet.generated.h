// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/GatherTextFromSourceCommandlet.h"

#ifdef UNREALED_GatherTextFromSourceCommandlet_generated_h
#error "GatherTextFromSourceCommandlet.generated.h already included, missing '#pragma once' in GatherTextFromSourceCommandlet.h"
#endif
#define UNREALED_GatherTextFromSourceCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGatherTextFromSourceCommandlet ******************************************
struct Z_Construct_UClass_UGatherTextFromSourceCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UGatherTextFromSourceCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromSourceCommandlet_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUGatherTextFromSourceCommandlet(); \
	friend struct ::Z_Construct_UClass_UGatherTextFromSourceCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UGatherTextFromSourceCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UGatherTextFromSourceCommandlet, UGatherTextCommandletBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UGatherTextFromSourceCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UGatherTextFromSourceCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromSourceCommandlet_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGatherTextFromSourceCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGatherTextFromSourceCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGatherTextFromSourceCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGatherTextFromSourceCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGatherTextFromSourceCommandlet(UGatherTextFromSourceCommandlet&&) = delete; \
	UGatherTextFromSourceCommandlet(const UGatherTextFromSourceCommandlet&) = delete; \
	NO_API virtual ~UGatherTextFromSourceCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromSourceCommandlet_h_32_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromSourceCommandlet_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromSourceCommandlet_h_35_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromSourceCommandlet_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGatherTextFromSourceCommandlet;

// ********** End Class UGatherTextFromSourceCommandlet ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromSourceCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
