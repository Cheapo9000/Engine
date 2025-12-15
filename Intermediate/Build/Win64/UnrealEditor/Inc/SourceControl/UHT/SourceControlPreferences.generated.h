// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SourceControlPreferences.h"

#ifdef SOURCECONTROL_SourceControlPreferences_generated_h
#error "SourceControlPreferences.generated.h already included, missing '#pragma once' in SourceControlPreferences.h"
#endif
#define SOURCECONTROL_SourceControlPreferences_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USourceControlPreferences ************************************************
struct Z_Construct_UClass_USourceControlPreferences_Statics;
SOURCECONTROL_API UClass* Z_Construct_UClass_USourceControlPreferences_NoRegister();

#define FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceControlPreferences(); \
	friend struct ::Z_Construct_UClass_USourceControlPreferences_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOURCECONTROL_API UClass* ::Z_Construct_UClass_USourceControlPreferences_NoRegister(); \
public: \
	DECLARE_CLASS2(USourceControlPreferences, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SourceControl"), Z_Construct_UClass_USourceControlPreferences_NoRegister) \
	DECLARE_SERIALIZER(USourceControlPreferences) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SOURCECONTROL_API USourceControlPreferences(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USourceControlPreferences(USourceControlPreferences&&) = delete; \
	USourceControlPreferences(const USourceControlPreferences&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SOURCECONTROL_API, USourceControlPreferences); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceControlPreferences); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceControlPreferences) \
	SOURCECONTROL_API virtual ~USourceControlPreferences();


#define FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_22_PROLOG
#define FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USourceControlPreferences;

// ********** End Class USourceControlPreferences **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
