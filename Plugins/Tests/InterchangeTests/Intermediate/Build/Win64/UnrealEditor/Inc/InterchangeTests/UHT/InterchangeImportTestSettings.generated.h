// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeImportTestSettings.h"

#ifdef INTERCHANGETESTS_InterchangeImportTestSettings_generated_h
#error "InterchangeImportTestSettings.generated.h already included, missing '#pragma once' in InterchangeImportTestSettings.h"
#endif
#define INTERCHANGETESTS_InterchangeImportTestSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeImportTestSettings *******************************************
struct Z_Construct_UClass_UInterchangeImportTestSettings_Statics;
INTERCHANGETESTS_API UClass* Z_Construct_UClass_UInterchangeImportTestSettings_NoRegister();

#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeImportTestSettings(); \
	friend struct ::Z_Construct_UClass_UInterchangeImportTestSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGETESTS_API UClass* ::Z_Construct_UClass_UInterchangeImportTestSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeImportTestSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/InterchangeTests"), Z_Construct_UClass_UInterchangeImportTestSettings_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeImportTestSettings)


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGETESTS_API UInterchangeImportTestSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeImportTestSettings(UInterchangeImportTestSettings&&) = delete; \
	UInterchangeImportTestSettings(const UInterchangeImportTestSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGETESTS_API, UInterchangeImportTestSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeImportTestSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeImportTestSettings) \
	INTERCHANGETESTS_API virtual ~UInterchangeImportTestSettings();


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestSettings_h_11_PROLOG
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeImportTestSettings;

// ********** End Class UInterchangeImportTestSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
