// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterWavesAssetFactory.h"

#ifdef WATEREDITOR_WaterWavesAssetFactory_generated_h
#error "WaterWavesAssetFactory.generated.h already included, missing '#pragma once' in WaterWavesAssetFactory.h"
#endif
#define WATEREDITOR_WaterWavesAssetFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWaterWavesAssetFactory **************************************************
struct Z_Construct_UClass_UWaterWavesAssetFactory_Statics;
WATEREDITOR_API UClass* Z_Construct_UClass_UWaterWavesAssetFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterWavesAssetFactory_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaterWavesAssetFactory(); \
	friend struct ::Z_Construct_UClass_UWaterWavesAssetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATEREDITOR_API UClass* ::Z_Construct_UClass_UWaterWavesAssetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterWavesAssetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WaterEditor"), Z_Construct_UClass_UWaterWavesAssetFactory_NoRegister) \
	DECLARE_SERIALIZER(UWaterWavesAssetFactory)


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterWavesAssetFactory_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterWavesAssetFactory(UWaterWavesAssetFactory&&) = delete; \
	UWaterWavesAssetFactory(const UWaterWavesAssetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterWavesAssetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterWavesAssetFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWaterWavesAssetFactory) \
	NO_API virtual ~UWaterWavesAssetFactory();


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterWavesAssetFactory_h_8_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterWavesAssetFactory_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterWavesAssetFactory_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterWavesAssetFactory_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterWavesAssetFactory;

// ********** End Class UWaterWavesAssetFactory ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterWavesAssetFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
