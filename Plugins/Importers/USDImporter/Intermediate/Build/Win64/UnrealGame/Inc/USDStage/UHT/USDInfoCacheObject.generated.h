// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDInfoCacheObject.h"

#ifdef USDSTAGE_USDInfoCacheObject_generated_h
#error "USDInfoCacheObject.generated.h already included, missing '#pragma once' in USDInfoCacheObject.h"
#endif
#define USDSTAGE_USDInfoCacheObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUsdInfoCache ************************************************************
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDInfoCacheObject_h_26_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UUsdInfoCache, USDSTAGE_API)


struct Z_Construct_UClass_UUsdInfoCache_Statics;
USDSTAGE_API UClass* Z_Construct_UClass_UUsdInfoCache_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDInfoCacheObject_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUsdInfoCache(); \
	friend struct ::Z_Construct_UClass_UUsdInfoCache_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDSTAGE_API UClass* ::Z_Construct_UClass_UUsdInfoCache_NoRegister(); \
public: \
	DECLARE_CLASS2(UUsdInfoCache, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/USDStage"), Z_Construct_UClass_UUsdInfoCache_NoRegister) \
	DECLARE_SERIALIZER(UUsdInfoCache) \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDInfoCacheObject_h_26_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDInfoCacheObject_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUsdInfoCache(UUsdInfoCache&&) = delete; \
	UUsdInfoCache(const UUsdInfoCache&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(USDSTAGE_API, UUsdInfoCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUsdInfoCache); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUsdInfoCache) \
	USDSTAGE_API virtual ~UUsdInfoCache();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDInfoCacheObject_h_23_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDInfoCacheObject_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDInfoCacheObject_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDInfoCacheObject_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUsdInfoCache;

// ********** End Class UUsdInfoCache **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDInfoCacheObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
