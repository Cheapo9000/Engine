// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFeatureAction_DataRegistrySource.h"

#ifdef GAMEFEATURES_GameFeatureAction_DataRegistrySource_generated_h
#error "GameFeatureAction_DataRegistrySource.generated.h already included, missing '#pragma once' in GameFeatureAction_DataRegistrySource.h"
#endif
#define GAMEFEATURES_GameFeatureAction_DataRegistrySource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDataRegistrySourceToAdd ******************************************
struct Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics;
#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistrySource_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics; \
	GAMEFEATURES_API static class UScriptStruct* StaticStruct();


struct FDataRegistrySourceToAdd;
// ********** End ScriptStruct FDataRegistrySourceToAdd ********************************************

// ********** Begin Class UGameFeatureAction_DataRegistrySource ************************************
struct Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_Statics;
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_NoRegister();

#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistrySource_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameFeatureAction_DataRegistrySource(); \
	friend struct ::Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEFEATURES_API UClass* ::Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameFeatureAction_DataRegistrySource, UGameFeatureAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameFeatures"), Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_NoRegister) \
	DECLARE_SERIALIZER(UGameFeatureAction_DataRegistrySource)


#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistrySource_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEFEATURES_API UGameFeatureAction_DataRegistrySource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameFeatureAction_DataRegistrySource(UGameFeatureAction_DataRegistrySource&&) = delete; \
	UGameFeatureAction_DataRegistrySource(const UGameFeatureAction_DataRegistrySource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEFEATURES_API, UGameFeatureAction_DataRegistrySource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameFeatureAction_DataRegistrySource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameFeatureAction_DataRegistrySource) \
	GAMEFEATURES_API virtual ~UGameFeatureAction_DataRegistrySource();


#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistrySource_h_49_PROLOG
#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistrySource_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistrySource_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistrySource_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameFeatureAction_DataRegistrySource;

// ********** End Class UGameFeatureAction_DataRegistrySource **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistrySource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
