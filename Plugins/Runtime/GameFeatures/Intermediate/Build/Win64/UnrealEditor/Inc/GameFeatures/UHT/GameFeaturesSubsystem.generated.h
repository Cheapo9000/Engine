// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFeaturesSubsystem.h"

#ifdef GAMEFEATURES_GameFeaturesSubsystem_generated_h
#error "GameFeaturesSubsystem.generated.h already included, missing '#pragma once' in GameFeaturesSubsystem.h"
#endif
#define GAMEFEATURES_GameFeaturesSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameFeaturePluginIdentifier **************************************
struct Z_Construct_UScriptStruct_FGameFeaturePluginIdentifier_Statics;
#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_302_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameFeaturePluginIdentifier_Statics; \
	GAMEFEATURES_API static class UScriptStruct* StaticStruct();


struct FGameFeaturePluginIdentifier;
// ********** End ScriptStruct FGameFeaturePluginIdentifier ****************************************

// ********** Begin ScriptStruct FInstallBundlePluginProtocolOptions *******************************
struct Z_Construct_UScriptStruct_FInstallBundlePluginProtocolOptions_Statics;
#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_365_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInstallBundlePluginProtocolOptions_Statics; \
	GAMEFEATURES_API static class UScriptStruct* StaticStruct();


struct FInstallBundlePluginProtocolOptions;
// ********** End ScriptStruct FInstallBundlePluginProtocolOptions *********************************

// ********** Begin Class UGameFeaturesSubsystem ***************************************************
struct Z_Construct_UClass_UGameFeaturesSubsystem_Statics;
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeaturesSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_437_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameFeaturesSubsystem(); \
	friend struct ::Z_Construct_UClass_UGameFeaturesSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEFEATURES_API UClass* ::Z_Construct_UClass_UGameFeaturesSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameFeaturesSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameFeatures"), Z_Construct_UClass_UGameFeaturesSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UGameFeaturesSubsystem)


#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_437_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEFEATURES_API UGameFeaturesSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameFeaturesSubsystem(UGameFeaturesSubsystem&&) = delete; \
	UGameFeaturesSubsystem(const UGameFeaturesSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEFEATURES_API, UGameFeaturesSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameFeaturesSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameFeaturesSubsystem) \
	GAMEFEATURES_API virtual ~UGameFeaturesSubsystem();


#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_434_PROLOG
#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_437_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_437_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_437_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameFeaturesSubsystem;

// ********** End Class UGameFeaturesSubsystem *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h

// ********** Begin Enum EGameFeatureTargetState ***************************************************
#define FOREACH_ENUM_EGAMEFEATURETARGETSTATE(op) \
	op(EGameFeatureTargetState::Installed) \
	op(EGameFeatureTargetState::Registered) \
	op(EGameFeatureTargetState::Loaded) \
	op(EGameFeatureTargetState::Active) \
	op(EGameFeatureTargetState::Count) 

enum class EGameFeatureTargetState : uint8;
template<> struct TIsUEnumClass<EGameFeatureTargetState> { enum { Value = true }; };
template<> GAMEFEATURES_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameFeatureTargetState>();
// ********** End Enum EGameFeatureTargetState *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
