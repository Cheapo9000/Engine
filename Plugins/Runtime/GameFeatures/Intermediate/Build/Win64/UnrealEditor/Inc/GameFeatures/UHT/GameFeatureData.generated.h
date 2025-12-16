// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFeatureData.h"

#ifdef GAMEFEATURES_GameFeatureData_generated_h
#error "GameFeatureData.generated.h already included, missing '#pragma once' in GameFeatureData.h"
#endif
#define GAMEFEATURES_GameFeatureData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UGameFeatureData;
class UObject;

// ********** Begin Class UGameFeatureData *********************************************************
#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureData_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPluginName);


#if WITH_EDITOR
#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureData_h_45_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetDisallowedActions);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureData_h_45_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UGameFeatureData_Statics;
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureData_NoRegister();

#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureData_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameFeatureData(); \
	friend struct ::Z_Construct_UClass_UGameFeatureData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEFEATURES_API UClass* ::Z_Construct_UClass_UGameFeatureData_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameFeatureData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameFeatures"), Z_Construct_UClass_UGameFeatureData_NoRegister) \
	DECLARE_SERIALIZER(UGameFeatureData)


#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureData_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEFEATURES_API UGameFeatureData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameFeatureData(UGameFeatureData&&) = delete; \
	UGameFeatureData(const UGameFeatureData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEFEATURES_API, UGameFeatureData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameFeatureData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameFeatureData) \
	GAMEFEATURES_API virtual ~UGameFeatureData();


#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureData_h_42_PROLOG
#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureData_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureData_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureData_h_45_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureData_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureData_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameFeatureData;

// ********** End Class UGameFeatureData ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
