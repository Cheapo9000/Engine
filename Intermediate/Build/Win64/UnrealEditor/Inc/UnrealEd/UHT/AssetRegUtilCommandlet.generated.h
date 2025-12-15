// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/AssetRegUtilCommandlet.h"

#ifdef UNREALED_AssetRegUtilCommandlet_generated_h
#error "AssetRegUtilCommandlet.generated.h already included, missing '#pragma once' in AssetRegUtilCommandlet.h"
#endif
#define UNREALED_AssetRegUtilCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetRegUtilCommandlet **************************************************
struct Z_Construct_UClass_UAssetRegUtilCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UAssetRegUtilCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AssetRegUtilCommandlet_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAssetRegUtilCommandlet(); \
	friend struct ::Z_Construct_UClass_UAssetRegUtilCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UAssetRegUtilCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetRegUtilCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UAssetRegUtilCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UAssetRegUtilCommandlet) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AssetRegUtilCommandlet_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetRegUtilCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetRegUtilCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetRegUtilCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetRegUtilCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetRegUtilCommandlet(UAssetRegUtilCommandlet&&) = delete; \
	UAssetRegUtilCommandlet(const UAssetRegUtilCommandlet&) = delete; \
	NO_API virtual ~UAssetRegUtilCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AssetRegUtilCommandlet_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AssetRegUtilCommandlet_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AssetRegUtilCommandlet_h_22_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AssetRegUtilCommandlet_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetRegUtilCommandlet;

// ********** End Class UAssetRegUtilCommandlet ****************************************************

// ********** Begin Class UAssetRegistryDumpCommandlet *********************************************
struct Z_Construct_UClass_UAssetRegistryDumpCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UAssetRegistryDumpCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AssetRegUtilCommandlet_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUAssetRegistryDumpCommandlet(); \
	friend struct ::Z_Construct_UClass_UAssetRegistryDumpCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UAssetRegistryDumpCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetRegistryDumpCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UAssetRegistryDumpCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UAssetRegistryDumpCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AssetRegUtilCommandlet_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetRegistryDumpCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetRegistryDumpCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetRegistryDumpCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetRegistryDumpCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetRegistryDumpCommandlet(UAssetRegistryDumpCommandlet&&) = delete; \
	UAssetRegistryDumpCommandlet(const UAssetRegistryDumpCommandlet&) = delete; \
	NO_API virtual ~UAssetRegistryDumpCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AssetRegUtilCommandlet_h_52_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AssetRegUtilCommandlet_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AssetRegUtilCommandlet_h_55_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AssetRegUtilCommandlet_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetRegistryDumpCommandlet;

// ********** End Class UAssetRegistryDumpCommandlet ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AssetRegUtilCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
