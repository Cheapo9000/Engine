// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDTransactor.h"

#ifdef USDSTAGE_USDTransactor_generated_h
#error "USDTransactor.generated.h already included, missing '#pragma once' in USDTransactor.h"
#endif
#define USDSTAGE_USDTransactor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUsdTransactor ***********************************************************
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDTransactor_h_42_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UUsdTransactor, USDSTAGE_API)


struct Z_Construct_UClass_UUsdTransactor_Statics;
USDSTAGE_API UClass* Z_Construct_UClass_UUsdTransactor_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDTransactor_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUsdTransactor(); \
	friend struct ::Z_Construct_UClass_UUsdTransactor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDSTAGE_API UClass* ::Z_Construct_UClass_UUsdTransactor_NoRegister(); \
public: \
	DECLARE_CLASS2(UUsdTransactor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/USDStage"), Z_Construct_UClass_UUsdTransactor_NoRegister) \
	DECLARE_SERIALIZER(UUsdTransactor) \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDTransactor_h_42_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDTransactor_h_42_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUsdTransactor(UUsdTransactor&&) = delete; \
	UUsdTransactor(const UUsdTransactor&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUsdTransactor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUsdTransactor)


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDTransactor_h_39_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDTransactor_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDTransactor_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDTransactor_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUsdTransactor;

// ********** End Class UUsdTransactor *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDTransactor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
