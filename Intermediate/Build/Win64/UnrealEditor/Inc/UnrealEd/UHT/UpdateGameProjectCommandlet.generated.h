// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/UpdateGameProjectCommandlet.h"

#ifdef UNREALED_UpdateGameProjectCommandlet_generated_h
#error "UpdateGameProjectCommandlet.generated.h already included, missing '#pragma once' in UpdateGameProjectCommandlet.h"
#endif
#define UNREALED_UpdateGameProjectCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUpdateGameProjectCommandlet *********************************************
struct Z_Construct_UClass_UUpdateGameProjectCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UUpdateGameProjectCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_UpdateGameProjectCommandlet_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUUpdateGameProjectCommandlet(); \
	friend struct ::Z_Construct_UClass_UUpdateGameProjectCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UUpdateGameProjectCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UUpdateGameProjectCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UUpdateGameProjectCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UUpdateGameProjectCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_UpdateGameProjectCommandlet_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUpdateGameProjectCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpdateGameProjectCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpdateGameProjectCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdateGameProjectCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUpdateGameProjectCommandlet(UUpdateGameProjectCommandlet&&) = delete; \
	UUpdateGameProjectCommandlet(const UUpdateGameProjectCommandlet&) = delete; \
	NO_API virtual ~UUpdateGameProjectCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_UpdateGameProjectCommandlet_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_UpdateGameProjectCommandlet_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_UpdateGameProjectCommandlet_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_UpdateGameProjectCommandlet_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUpdateGameProjectCommandlet;

// ********** End Class UUpdateGameProjectCommandlet ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_UpdateGameProjectCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
