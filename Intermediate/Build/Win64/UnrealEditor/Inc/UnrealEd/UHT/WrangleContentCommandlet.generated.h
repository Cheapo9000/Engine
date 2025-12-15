// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/WrangleContentCommandlet.h"

#ifdef UNREALED_WrangleContentCommandlet_generated_h
#error "WrangleContentCommandlet.generated.h already included, missing '#pragma once' in WrangleContentCommandlet.h"
#endif
#define UNREALED_WrangleContentCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWrangleContentCommandlet ************************************************
struct Z_Construct_UClass_UWrangleContentCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UWrangleContentCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WrangleContentCommandlet_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUWrangleContentCommandlet(); \
	friend struct ::Z_Construct_UClass_UWrangleContentCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UWrangleContentCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UWrangleContentCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UWrangleContentCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UWrangleContentCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WrangleContentCommandlet_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWrangleContentCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWrangleContentCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWrangleContentCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWrangleContentCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWrangleContentCommandlet(UWrangleContentCommandlet&&) = delete; \
	UWrangleContentCommandlet(const UWrangleContentCommandlet&) = delete; \
	NO_API virtual ~UWrangleContentCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WrangleContentCommandlet_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WrangleContentCommandlet_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WrangleContentCommandlet_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WrangleContentCommandlet_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWrangleContentCommandlet;

// ********** End Class UWrangleContentCommandlet **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WrangleContentCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
