// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCacheTrackUSD.h"

#ifdef GEOMETRYCACHEUSD_GeometryCacheTrackUSD_generated_h
#error "GeometryCacheTrackUSD.generated.h already included, missing '#pragma once' in GeometryCacheTrackUSD.h"
#endif
#define GEOMETRYCACHEUSD_GeometryCacheTrackUSD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGeometryCacheTrackUsd ***************************************************
struct Z_Construct_UClass_UGeometryCacheTrackUsd_Statics;
GEOMETRYCACHEUSD_API UClass* Z_Construct_UClass_UGeometryCacheTrackUsd_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_GeometryCacheUSD_Public_GeometryCacheTrackUSD_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryCacheTrackUsd(); \
	friend struct ::Z_Construct_UClass_UGeometryCacheTrackUsd_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYCACHEUSD_API UClass* ::Z_Construct_UClass_UGeometryCacheTrackUsd_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryCacheTrackUsd, UGeometryCacheTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryCacheUSD"), Z_Construct_UClass_UGeometryCacheTrackUsd_NoRegister) \
	DECLARE_SERIALIZER(UGeometryCacheTrackUsd)


#define FID_Engine_Plugins_Importers_USDImporter_Source_GeometryCacheUSD_Public_GeometryCacheTrackUSD_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryCacheTrackUsd(UGeometryCacheTrackUsd&&) = delete; \
	UGeometryCacheTrackUsd(const UGeometryCacheTrackUsd&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryCacheTrackUsd); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCacheTrackUsd); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGeometryCacheTrackUsd) \
	NO_API virtual ~UGeometryCacheTrackUsd();


#define FID_Engine_Plugins_Importers_USDImporter_Source_GeometryCacheUSD_Public_GeometryCacheTrackUSD_h_20_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_GeometryCacheUSD_Public_GeometryCacheTrackUSD_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_GeometryCacheUSD_Public_GeometryCacheTrackUSD_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_GeometryCacheUSD_Public_GeometryCacheTrackUSD_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryCacheTrackUsd;

// ********** End Class UGeometryCacheTrackUsd *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_GeometryCacheUSD_Public_GeometryCacheTrackUSD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
