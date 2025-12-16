// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCacheUSDComponent.h"

#ifdef GEOMETRYCACHEUSD_GeometryCacheUSDComponent_generated_h
#error "GeometryCacheUSDComponent.generated.h already included, missing '#pragma once' in GeometryCacheUSDComponent.h"
#endif
#define GEOMETRYCACHEUSD_GeometryCacheUSDComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGeometryCacheUsdComponent ***********************************************
struct Z_Construct_UClass_UGeometryCacheUsdComponent_Statics;
GEOMETRYCACHEUSD_API UClass* Z_Construct_UClass_UGeometryCacheUsdComponent_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_GeometryCacheUSD_Public_GeometryCacheUSDComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryCacheUsdComponent(); \
	friend struct ::Z_Construct_UClass_UGeometryCacheUsdComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYCACHEUSD_API UClass* ::Z_Construct_UClass_UGeometryCacheUsdComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryCacheUsdComponent, UGeometryCacheComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCacheUSD"), Z_Construct_UClass_UGeometryCacheUsdComponent_NoRegister) \
	DECLARE_SERIALIZER(UGeometryCacheUsdComponent)


#define FID_Engine_Plugins_Importers_USDImporter_Source_GeometryCacheUSD_Public_GeometryCacheUSDComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryCacheUsdComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryCacheUsdComponent(UGeometryCacheUsdComponent&&) = delete; \
	UGeometryCacheUsdComponent(const UGeometryCacheUsdComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryCacheUsdComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCacheUsdComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCacheUsdComponent) \
	NO_API virtual ~UGeometryCacheUsdComponent();


#define FID_Engine_Plugins_Importers_USDImporter_Source_GeometryCacheUSD_Public_GeometryCacheUSDComponent_h_14_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_GeometryCacheUSD_Public_GeometryCacheUSDComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_GeometryCacheUSD_Public_GeometryCacheUSDComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_GeometryCacheUSD_Public_GeometryCacheUSDComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryCacheUsdComponent;

// ********** End Class UGeometryCacheUsdComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_GeometryCacheUSD_Public_GeometryCacheUSDComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
