// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/DiffAssetRegistriesCommandlet.h"

#ifdef UNREALED_DiffAssetRegistriesCommandlet_generated_h
#error "DiffAssetRegistriesCommandlet.generated.h already included, missing '#pragma once' in DiffAssetRegistriesCommandlet.h"
#endif
#define UNREALED_DiffAssetRegistriesCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDiffAssetRegistriesCommandlet *******************************************
struct Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UDiffAssetRegistriesCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffAssetRegistriesCommandlet_h_146_INCLASS \
private: \
	static void StaticRegisterNativesUDiffAssetRegistriesCommandlet(); \
	friend struct ::Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UDiffAssetRegistriesCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UDiffAssetRegistriesCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UDiffAssetRegistriesCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UDiffAssetRegistriesCommandlet) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffAssetRegistriesCommandlet_h_146_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDiffAssetRegistriesCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiffAssetRegistriesCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiffAssetRegistriesCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDiffAssetRegistriesCommandlet(UDiffAssetRegistriesCommandlet&&) = delete; \
	UDiffAssetRegistriesCommandlet(const UDiffAssetRegistriesCommandlet&) = delete; \
	NO_API virtual ~UDiffAssetRegistriesCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffAssetRegistriesCommandlet_h_15_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffAssetRegistriesCommandlet_h_146_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffAssetRegistriesCommandlet_h_146_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffAssetRegistriesCommandlet_h_146_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDiffAssetRegistriesCommandlet;

// ********** End Class UDiffAssetRegistriesCommandlet *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffAssetRegistriesCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
