// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCacheStreamerSettings.h"

#ifdef GEOMETRYCACHESTREAMER_GeometryCacheStreamerSettings_generated_h
#error "GeometryCacheStreamerSettings.generated.h already included, missing '#pragma once' in GeometryCacheStreamerSettings.h"
#endif
#define GEOMETRYCACHESTREAMER_GeometryCacheStreamerSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGeometryCacheStreamerSettings *******************************************
struct Z_Construct_UClass_UGeometryCacheStreamerSettings_Statics;
GEOMETRYCACHESTREAMER_API UClass* Z_Construct_UClass_UGeometryCacheStreamerSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheStreamer_Public_GeometryCacheStreamerSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryCacheStreamerSettings(); \
	friend struct ::Z_Construct_UClass_UGeometryCacheStreamerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYCACHESTREAMER_API UClass* ::Z_Construct_UClass_UGeometryCacheStreamerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryCacheStreamerSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCacheStreamer"), Z_Construct_UClass_UGeometryCacheStreamerSettings_NoRegister) \
	DECLARE_SERIALIZER(UGeometryCacheStreamerSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheStreamer_Public_GeometryCacheStreamerSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryCacheStreamerSettings(UGeometryCacheStreamerSettings&&) = delete; \
	UGeometryCacheStreamerSettings(const UGeometryCacheStreamerSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCACHESTREAMER_API, UGeometryCacheStreamerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCacheStreamerSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGeometryCacheStreamerSettings) \
	GEOMETRYCACHESTREAMER_API virtual ~UGeometryCacheStreamerSettings();


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheStreamer_Public_GeometryCacheStreamerSettings_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheStreamer_Public_GeometryCacheStreamerSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheStreamer_Public_GeometryCacheStreamerSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheStreamer_Public_GeometryCacheStreamerSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryCacheStreamerSettings;

// ********** End Class UGeometryCacheStreamerSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheStreamer_Public_GeometryCacheStreamerSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
