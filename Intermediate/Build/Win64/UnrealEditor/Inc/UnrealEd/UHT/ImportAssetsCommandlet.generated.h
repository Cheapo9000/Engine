// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/ImportAssetsCommandlet.h"

#ifdef UNREALED_ImportAssetsCommandlet_generated_h
#error "ImportAssetsCommandlet.generated.h already included, missing '#pragma once' in ImportAssetsCommandlet.h"
#endif
#define UNREALED_ImportAssetsCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UImportAssetsCommandlet **************************************************
struct Z_Construct_UClass_UImportAssetsCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UImportAssetsCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUImportAssetsCommandlet(); \
	friend struct ::Z_Construct_UClass_UImportAssetsCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UImportAssetsCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UImportAssetsCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UImportAssetsCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UImportAssetsCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImportAssetsCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImportAssetsCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImportAssetsCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImportAssetsCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UImportAssetsCommandlet(UImportAssetsCommandlet&&) = delete; \
	UImportAssetsCommandlet(const UImportAssetsCommandlet&) = delete; \
	NO_API virtual ~UImportAssetsCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_16_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UImportAssetsCommandlet;

// ********** End Class UImportAssetsCommandlet ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
