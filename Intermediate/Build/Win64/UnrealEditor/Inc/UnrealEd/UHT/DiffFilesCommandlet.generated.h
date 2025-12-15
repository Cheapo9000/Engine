// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/DiffFilesCommandlet.h"

#ifdef UNREALED_DiffFilesCommandlet_generated_h
#error "DiffFilesCommandlet.generated.h already included, missing '#pragma once' in DiffFilesCommandlet.h"
#endif
#define UNREALED_DiffFilesCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDiffFilesCommandlet *****************************************************
struct Z_Construct_UClass_UDiffFilesCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UDiffFilesCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffFilesCommandlet_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDiffFilesCommandlet(); \
	friend struct ::Z_Construct_UClass_UDiffFilesCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UDiffFilesCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UDiffFilesCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UDiffFilesCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UDiffFilesCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffFilesCommandlet_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDiffFilesCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDiffFilesCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiffFilesCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiffFilesCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDiffFilesCommandlet(UDiffFilesCommandlet&&) = delete; \
	UDiffFilesCommandlet(const UDiffFilesCommandlet&) = delete; \
	NO_API virtual ~UDiffFilesCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffFilesCommandlet_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffFilesCommandlet_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffFilesCommandlet_h_15_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffFilesCommandlet_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDiffFilesCommandlet;

// ********** End Class UDiffFilesCommandlet *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffFilesCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
