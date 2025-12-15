// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/DiffCookCommandlet.h"

#ifdef UNREALED_DiffCookCommandlet_generated_h
#error "DiffCookCommandlet.generated.h already included, missing '#pragma once' in DiffCookCommandlet.h"
#endif
#define UNREALED_DiffCookCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDiffCookCommandlet ******************************************************
struct Z_Construct_UClass_UDiffCookCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UDiffCookCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffCookCommandlet_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDiffCookCommandlet(); \
	friend struct ::Z_Construct_UClass_UDiffCookCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UDiffCookCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UDiffCookCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UDiffCookCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UDiffCookCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffCookCommandlet_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDiffCookCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDiffCookCommandlet(UDiffCookCommandlet&&) = delete; \
	UDiffCookCommandlet(const UDiffCookCommandlet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiffCookCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiffCookCommandlet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDiffCookCommandlet) \
	NO_API virtual ~UDiffCookCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffCookCommandlet_h_30_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffCookCommandlet_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffCookCommandlet_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffCookCommandlet_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDiffCookCommandlet;

// ********** End Class UDiffCookCommandlet ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffCookCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
