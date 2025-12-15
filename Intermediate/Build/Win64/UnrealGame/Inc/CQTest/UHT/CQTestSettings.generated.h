// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CQTestSettings.h"

#ifdef CQTEST_CQTestSettings_generated_h
#error "CQTestSettings.generated.h already included, missing '#pragma once' in CQTestSettings.h"
#endif
#define CQTEST_CQTestSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCQTestSettings **********************************************************
struct Z_Construct_UClass_UCQTestSettings_Statics;
CQTEST_API UClass* Z_Construct_UClass_UCQTestSettings_NoRegister();

#define FID_Engine_Source_Developer_CQTest_Public_CQTestSettings_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCQTestSettings(); \
	friend struct ::Z_Construct_UClass_UCQTestSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CQTEST_API UClass* ::Z_Construct_UClass_UCQTestSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UCQTestSettings, UDeveloperSettingsBackedByCVars, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CQTest"), Z_Construct_UClass_UCQTestSettings_NoRegister) \
	DECLARE_SERIALIZER(UCQTestSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Developer_CQTest_Public_CQTestSettings_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CQTEST_API UCQTestSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCQTestSettings(UCQTestSettings&&) = delete; \
	UCQTestSettings(const UCQTestSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CQTEST_API, UCQTestSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCQTestSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCQTestSettings) \
	CQTEST_API virtual ~UCQTestSettings();


#define FID_Engine_Source_Developer_CQTest_Public_CQTestSettings_h_28_PROLOG
#define FID_Engine_Source_Developer_CQTest_Public_CQTestSettings_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_CQTest_Public_CQTestSettings_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_CQTest_Public_CQTestSettings_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCQTestSettings;

// ********** End Class UCQTestSettings ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_CQTest_Public_CQTestSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
