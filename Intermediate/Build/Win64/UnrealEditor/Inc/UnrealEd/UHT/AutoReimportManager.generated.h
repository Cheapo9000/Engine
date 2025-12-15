// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutoReimport/AutoReimportManager.h"

#ifdef UNREALED_AutoReimportManager_generated_h
#error "AutoReimportManager.generated.h already included, missing '#pragma once' in AutoReimportManager.h"
#endif
#define UNREALED_AutoReimportManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAutoReimportManager *****************************************************
struct Z_Construct_UClass_UAutoReimportManager_Statics;
UNREALED_API UClass* Z_Construct_UClass_UAutoReimportManager_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_AutoReimport_AutoReimportManager_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUAutoReimportManager(); \
	friend struct ::Z_Construct_UClass_UAutoReimportManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UAutoReimportManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutoReimportManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UAutoReimportManager_NoRegister) \
	DECLARE_SERIALIZER(UAutoReimportManager) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Public_AutoReimport_AutoReimportManager_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UAutoReimportManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutoReimportManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UAutoReimportManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoReimportManager); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutoReimportManager(UAutoReimportManager&&) = delete; \
	UAutoReimportManager(const UAutoReimportManager&) = delete;


#define FID_Engine_Source_Editor_UnrealEd_Public_AutoReimport_AutoReimportManager_h_26_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_AutoReimport_AutoReimportManager_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_AutoReimport_AutoReimportManager_h_29_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_AutoReimport_AutoReimportManager_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutoReimportManager;

// ********** End Class UAutoReimportManager *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_AutoReimport_AutoReimportManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
