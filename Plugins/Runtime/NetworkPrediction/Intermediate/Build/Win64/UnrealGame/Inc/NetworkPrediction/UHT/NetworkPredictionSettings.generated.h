// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetworkPredictionSettings.h"

#ifdef NETWORKPREDICTION_NetworkPredictionSettings_generated_h
#error "NetworkPredictionSettings.generated.h already included, missing '#pragma once' in NetworkPredictionSettings.h"
#endif
#define NETWORKPREDICTION_NetworkPredictionSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNetworkPredictionSettings ****************************************
struct Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics;
#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionSettings_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics; \
	NETWORKPREDICTION_API static class UScriptStruct* StaticStruct();


struct FNetworkPredictionSettings;
// ********** End ScriptStruct FNetworkPredictionSettings ******************************************

// ********** Begin ScriptStruct FNetworkPredictionDevHUDItem **************************************
struct Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics;
#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionSettings_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics; \
	NETWORKPREDICTION_API static class UScriptStruct* StaticStruct();


struct FNetworkPredictionDevHUDItem;
// ********** End ScriptStruct FNetworkPredictionDevHUDItem ****************************************

// ********** Begin ScriptStruct FNetworkPredictionDevHUD ******************************************
struct Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics;
#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionSettings_h_101_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics; \
	NETWORKPREDICTION_API static class UScriptStruct* StaticStruct();


struct FNetworkPredictionDevHUD;
// ********** End ScriptStruct FNetworkPredictionDevHUD ********************************************

// ********** Begin Class UNetworkPredictionSettingsObject *****************************************
struct Z_Construct_UClass_UNetworkPredictionSettingsObject_Statics;
NETWORKPREDICTION_API UClass* Z_Construct_UClass_UNetworkPredictionSettingsObject_NoRegister();

#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionSettings_h_122_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkPredictionSettingsObject(); \
	friend struct ::Z_Construct_UClass_UNetworkPredictionSettingsObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETWORKPREDICTION_API UClass* ::Z_Construct_UClass_UNetworkPredictionSettingsObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetworkPredictionSettingsObject, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPrediction"), Z_Construct_UClass_UNetworkPredictionSettingsObject_NoRegister) \
	DECLARE_SERIALIZER(UNetworkPredictionSettingsObject) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("NetworkPrediction");} \



#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionSettings_h_122_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetworkPredictionSettingsObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetworkPredictionSettingsObject(UNetworkPredictionSettingsObject&&) = delete; \
	UNetworkPredictionSettingsObject(const UNetworkPredictionSettingsObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworkPredictionSettingsObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkPredictionSettingsObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetworkPredictionSettingsObject) \
	NO_API virtual ~UNetworkPredictionSettingsObject();


#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionSettings_h_119_PROLOG
#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionSettings_h_122_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionSettings_h_122_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionSettings_h_122_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetworkPredictionSettingsObject;

// ********** End Class UNetworkPredictionSettingsObject *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
