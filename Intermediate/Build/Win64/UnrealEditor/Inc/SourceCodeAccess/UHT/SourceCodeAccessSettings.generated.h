// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SourceCodeAccessSettings.h"

#ifdef SOURCECODEACCESS_SourceCodeAccessSettings_generated_h
#error "SourceCodeAccessSettings.generated.h already included, missing '#pragma once' in SourceCodeAccessSettings.h"
#endif
#define SOURCECODEACCESS_SourceCodeAccessSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USourceCodeAccessSettings ************************************************
struct Z_Construct_UClass_USourceCodeAccessSettings_Statics;
SOURCECODEACCESS_API UClass* Z_Construct_UClass_USourceCodeAccessSettings_NoRegister();

#define FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSourceCodeAccessSettings(); \
	friend struct ::Z_Construct_UClass_USourceCodeAccessSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOURCECODEACCESS_API UClass* ::Z_Construct_UClass_USourceCodeAccessSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USourceCodeAccessSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SourceCodeAccess"), Z_Construct_UClass_USourceCodeAccessSettings_NoRegister) \
	DECLARE_SERIALIZER(USourceCodeAccessSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USourceCodeAccessSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceCodeAccessSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USourceCodeAccessSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceCodeAccessSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USourceCodeAccessSettings(USourceCodeAccessSettings&&) = delete; \
	USourceCodeAccessSettings(const USourceCodeAccessSettings&) = delete; \
	NO_API virtual ~USourceCodeAccessSettings();


#define FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_10_PROLOG
#define FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_13_INCLASS \
	FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USourceCodeAccessSettings;

// ********** End Class USourceCodeAccessSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
