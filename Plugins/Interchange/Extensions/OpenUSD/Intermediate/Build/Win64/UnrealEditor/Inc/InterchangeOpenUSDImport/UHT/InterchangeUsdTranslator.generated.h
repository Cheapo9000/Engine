// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeUsdTranslator.h"

#ifdef INTERCHANGEOPENUSDIMPORT_InterchangeUsdTranslator_generated_h
#error "InterchangeUsdTranslator.generated.h already included, missing '#pragma once' in InterchangeUsdTranslator.h"
#endif
#define INTERCHANGEOPENUSDIMPORT_InterchangeUsdTranslator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeUsdTranslatorSettings ****************************************
struct Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics;
INTERCHANGEOPENUSDIMPORT_API UClass* Z_Construct_UClass_UInterchangeUsdTranslatorSettings_NoRegister();

#define FID_Engine_Plugins_Interchange_Extensions_OpenUSD_Source_Import_Public_InterchangeUsdTranslator_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeUsdTranslatorSettings(); \
	friend struct ::Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEOPENUSDIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeUsdTranslatorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeUsdTranslatorSettings, UInterchangeTranslatorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeOpenUSDImport"), Z_Construct_UClass_UInterchangeUsdTranslatorSettings_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeUsdTranslatorSettings)


#define FID_Engine_Plugins_Interchange_Extensions_OpenUSD_Source_Import_Public_InterchangeUsdTranslator_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeUsdTranslatorSettings(UInterchangeUsdTranslatorSettings&&) = delete; \
	UInterchangeUsdTranslatorSettings(const UInterchangeUsdTranslatorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEOPENUSDIMPORT_API, UInterchangeUsdTranslatorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeUsdTranslatorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeUsdTranslatorSettings) \
	INTERCHANGEOPENUSDIMPORT_API virtual ~UInterchangeUsdTranslatorSettings();


#define FID_Engine_Plugins_Interchange_Extensions_OpenUSD_Source_Import_Public_InterchangeUsdTranslator_h_27_PROLOG
#define FID_Engine_Plugins_Interchange_Extensions_OpenUSD_Source_Import_Public_InterchangeUsdTranslator_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Extensions_OpenUSD_Source_Import_Public_InterchangeUsdTranslator_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Extensions_OpenUSD_Source_Import_Public_InterchangeUsdTranslator_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeUsdTranslatorSettings;

// ********** End Class UInterchangeUsdTranslatorSettings ******************************************

// ********** Begin Class UInterchangeUSDTranslator ************************************************
struct Z_Construct_UClass_UInterchangeUSDTranslator_Statics;
INTERCHANGEOPENUSDIMPORT_API UClass* Z_Construct_UClass_UInterchangeUSDTranslator_NoRegister();

#define FID_Engine_Plugins_Interchange_Extensions_OpenUSD_Source_Import_Public_InterchangeUsdTranslator_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeUSDTranslator(); \
	friend struct ::Z_Construct_UClass_UInterchangeUSDTranslator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEOPENUSDIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeUSDTranslator_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeUSDTranslator, UInterchangeTranslatorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeOpenUSDImport"), Z_Construct_UClass_UInterchangeUSDTranslator_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeUSDTranslator) \
	virtual UObject* _getUObject() const override { return const_cast<UInterchangeUSDTranslator*>(this); }


#define FID_Engine_Plugins_Interchange_Extensions_OpenUSD_Source_Import_Public_InterchangeUsdTranslator_h_101_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeUSDTranslator(UInterchangeUSDTranslator&&) = delete; \
	UInterchangeUSDTranslator(const UInterchangeUSDTranslator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeUSDTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeUSDTranslator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeUSDTranslator) \
	NO_API virtual ~UInterchangeUSDTranslator();


#define FID_Engine_Plugins_Interchange_Extensions_OpenUSD_Source_Import_Public_InterchangeUsdTranslator_h_90_PROLOG
#define FID_Engine_Plugins_Interchange_Extensions_OpenUSD_Source_Import_Public_InterchangeUsdTranslator_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Extensions_OpenUSD_Source_Import_Public_InterchangeUsdTranslator_h_101_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Extensions_OpenUSD_Source_Import_Public_InterchangeUsdTranslator_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeUSDTranslator;

// ********** End Class UInterchangeUSDTranslator **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Extensions_OpenUSD_Source_Import_Public_InterchangeUsdTranslator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
