// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/DumpHiddenCategoriesCommandlet.h"

#ifdef UNREALED_DumpHiddenCategoriesCommandlet_generated_h
#error "DumpHiddenCategoriesCommandlet.generated.h already included, missing '#pragma once' in DumpHiddenCategoriesCommandlet.h"
#endif
#define UNREALED_DumpHiddenCategoriesCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDumpHiddenCategoriesCommandlet ******************************************
struct Z_Construct_UClass_UDumpHiddenCategoriesCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UDumpHiddenCategoriesCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpHiddenCategoriesCommandlet_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUDumpHiddenCategoriesCommandlet(); \
	friend struct ::Z_Construct_UClass_UDumpHiddenCategoriesCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UDumpHiddenCategoriesCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UDumpHiddenCategoriesCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UDumpHiddenCategoriesCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UDumpHiddenCategoriesCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpHiddenCategoriesCommandlet_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDumpHiddenCategoriesCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDumpHiddenCategoriesCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDumpHiddenCategoriesCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDumpHiddenCategoriesCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDumpHiddenCategoriesCommandlet(UDumpHiddenCategoriesCommandlet&&) = delete; \
	UDumpHiddenCategoriesCommandlet(const UDumpHiddenCategoriesCommandlet&) = delete; \
	NO_API virtual ~UDumpHiddenCategoriesCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpHiddenCategoriesCommandlet_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpHiddenCategoriesCommandlet_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpHiddenCategoriesCommandlet_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpHiddenCategoriesCommandlet_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDumpHiddenCategoriesCommandlet;

// ********** End Class UDumpHiddenCategoriesCommandlet ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpHiddenCategoriesCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
