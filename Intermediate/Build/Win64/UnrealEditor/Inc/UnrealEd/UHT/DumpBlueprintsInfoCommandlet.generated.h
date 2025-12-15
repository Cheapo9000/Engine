// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/DumpBlueprintsInfoCommandlet.h"

#ifdef UNREALED_DumpBlueprintsInfoCommandlet_generated_h
#error "DumpBlueprintsInfoCommandlet.generated.h already included, missing '#pragma once' in DumpBlueprintsInfoCommandlet.h"
#endif
#define UNREALED_DumpBlueprintsInfoCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDumpBlueprintsInfoCommandlet ********************************************
struct Z_Construct_UClass_UDumpBlueprintsInfoCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UDumpBlueprintsInfoCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpBlueprintsInfoCommandlet_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUDumpBlueprintsInfoCommandlet(); \
	friend struct ::Z_Construct_UClass_UDumpBlueprintsInfoCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UDumpBlueprintsInfoCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UDumpBlueprintsInfoCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UDumpBlueprintsInfoCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UDumpBlueprintsInfoCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpBlueprintsInfoCommandlet_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDumpBlueprintsInfoCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDumpBlueprintsInfoCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDumpBlueprintsInfoCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDumpBlueprintsInfoCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDumpBlueprintsInfoCommandlet(UDumpBlueprintsInfoCommandlet&&) = delete; \
	UDumpBlueprintsInfoCommandlet(const UDumpBlueprintsInfoCommandlet&) = delete; \
	NO_API virtual ~UDumpBlueprintsInfoCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpBlueprintsInfoCommandlet_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpBlueprintsInfoCommandlet_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpBlueprintsInfoCommandlet_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpBlueprintsInfoCommandlet_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDumpBlueprintsInfoCommandlet;

// ********** End Class UDumpBlueprintsInfoCommandlet **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpBlueprintsInfoCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
