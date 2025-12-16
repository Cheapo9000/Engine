// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDPrimTwin.h"

#ifdef USDSTAGE_USDPrimTwin_generated_h
#error "USDPrimTwin.generated.h already included, missing '#pragma once' in USDPrimTwin.h"
#endif
#define USDSTAGE_USDPrimTwin_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUsdPrimTwin *************************************************************
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDPrimTwin_h_16_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UUsdPrimTwin, USDSTAGE_API)


struct Z_Construct_UClass_UUsdPrimTwin_Statics;
USDSTAGE_API UClass* Z_Construct_UClass_UUsdPrimTwin_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDPrimTwin_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUsdPrimTwin(); \
	friend struct ::Z_Construct_UClass_UUsdPrimTwin_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDSTAGE_API UClass* ::Z_Construct_UClass_UUsdPrimTwin_NoRegister(); \
public: \
	DECLARE_CLASS2(UUsdPrimTwin, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/USDStage"), Z_Construct_UClass_UUsdPrimTwin_NoRegister) \
	DECLARE_SERIALIZER(UUsdPrimTwin) \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDPrimTwin_h_16_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDPrimTwin_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	USDSTAGE_API UUsdPrimTwin(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUsdPrimTwin(UUsdPrimTwin&&) = delete; \
	UUsdPrimTwin(const UUsdPrimTwin&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(USDSTAGE_API, UUsdPrimTwin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUsdPrimTwin); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUsdPrimTwin) \
	USDSTAGE_API virtual ~UUsdPrimTwin();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDPrimTwin_h_13_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDPrimTwin_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDPrimTwin_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDPrimTwin_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUsdPrimTwin;

// ********** End Class UUsdPrimTwin ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDPrimTwin_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
