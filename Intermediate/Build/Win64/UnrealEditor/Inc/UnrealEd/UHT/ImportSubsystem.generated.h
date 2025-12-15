// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/ImportSubsystem.h"

#ifdef UNREALED_ImportSubsystem_generated_h
#error "ImportSubsystem.generated.h already included, missing '#pragma once' in ImportSubsystem.h"
#endif
#define UNREALED_ImportSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UFactory;
class UObject;

// ********** Begin Delegate FOnAssetPreImport_Dyn *************************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_79_DELEGATE \
static UNREALED_API void FOnAssetPreImport_Dyn_DelegateWrapper(const FMulticastScriptDelegate& OnAssetPreImport_Dyn, UFactory* InFactory, UClass* InClass, UObject* InParent, FName const& Name, const FString& Type);


// ********** End Delegate FOnAssetPreImport_Dyn ***************************************************

// ********** Begin Delegate FOnAssetPostImport_Dyn ************************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_81_DELEGATE \
static UNREALED_API void FOnAssetPostImport_Dyn_DelegateWrapper(const FMulticastScriptDelegate& OnAssetPostImport_Dyn, UFactory* InFactory, UObject* InCreatedObject);


// ********** End Delegate FOnAssetPostImport_Dyn **************************************************

// ********** Begin Delegate FOnAssetReimport_Dyn **************************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_83_DELEGATE \
static UNREALED_API void FOnAssetReimport_Dyn_DelegateWrapper(const FMulticastScriptDelegate& OnAssetReimport_Dyn, UObject* InCreatedObject);


// ********** End Delegate FOnAssetReimport_Dyn ****************************************************

// ********** Begin Delegate FOnAssetPostLODImport_Dyn *********************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_85_DELEGATE \
static UNREALED_API void FOnAssetPostLODImport_Dyn_DelegateWrapper(const FMulticastScriptDelegate& OnAssetPostLODImport_Dyn, UObject* InObject, int32 InLODIndex);


// ********** End Delegate FOnAssetPostLODImport_Dyn ***********************************************

// ********** Begin Class UImportSubsystem *********************************************************
struct Z_Construct_UClass_UImportSubsystem_Statics;
UNREALED_API UClass* Z_Construct_UClass_UImportSubsystem_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImportSubsystem(); \
	friend struct ::Z_Construct_UClass_UImportSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UImportSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UImportSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UImportSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UImportSubsystem)


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UImportSubsystem(UImportSubsystem&&) = delete; \
	UImportSubsystem(const UImportSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UImportSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImportSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UImportSubsystem) \
	UNREALED_API virtual ~UImportSubsystem();


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_32_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UImportSubsystem;

// ********** End Class UImportSubsystem ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
