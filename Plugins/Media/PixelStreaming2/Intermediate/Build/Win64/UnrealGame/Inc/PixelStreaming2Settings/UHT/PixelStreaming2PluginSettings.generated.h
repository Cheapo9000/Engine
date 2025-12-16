// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PixelStreaming2PluginSettings.h"

#ifdef PIXELSTREAMING2SETTINGS_PixelStreaming2PluginSettings_generated_h
#error "PixelStreaming2PluginSettings.generated.h already included, missing '#pragma once' in PixelStreaming2PluginSettings.h"
#endif
#define PIXELSTREAMING2SETTINGS_PixelStreaming2PluginSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPixelStreaming2PluginSettings *******************************************
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Settings_Internal_PixelStreaming2PluginSettings_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDefaultStreamerTypeOptions); \
	DECLARE_FUNCTION(execGetWebRTCCodecPreferencesOptions); \
	DECLARE_FUNCTION(execGetScalabilityModeOptions); \
	DECLARE_FUNCTION(execGetVideoCodecOptions);


struct Z_Construct_UClass_UPixelStreaming2PluginSettings_Statics;
PIXELSTREAMING2SETTINGS_API UClass* Z_Construct_UClass_UPixelStreaming2PluginSettings_NoRegister();

#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Settings_Internal_PixelStreaming2PluginSettings_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPixelStreaming2PluginSettings(); \
	friend struct ::Z_Construct_UClass_UPixelStreaming2PluginSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMING2SETTINGS_API UClass* ::Z_Construct_UClass_UPixelStreaming2PluginSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreaming2PluginSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/PixelStreaming2Settings"), Z_Construct_UClass_UPixelStreaming2PluginSettings_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreaming2PluginSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Settings_Internal_PixelStreaming2PluginSettings_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PIXELSTREAMING2SETTINGS_API UPixelStreaming2PluginSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreaming2PluginSettings(UPixelStreaming2PluginSettings&&) = delete; \
	UPixelStreaming2PluginSettings(const UPixelStreaming2PluginSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PIXELSTREAMING2SETTINGS_API, UPixelStreaming2PluginSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreaming2PluginSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreaming2PluginSettings)


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Settings_Internal_PixelStreaming2PluginSettings_h_82_PROLOG
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Settings_Internal_PixelStreaming2PluginSettings_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Settings_Internal_PixelStreaming2PluginSettings_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Settings_Internal_PixelStreaming2PluginSettings_h_85_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Settings_Internal_PixelStreaming2PluginSettings_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreaming2PluginSettings;

// ********** End Class UPixelStreaming2PluginSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Settings_Internal_PixelStreaming2PluginSettings_h

// ********** Begin Enum EPortAllocatorFlags *******************************************************
#define FOREACH_ENUM_EPORTALLOCATORFLAGS(op) \
	op(EPortAllocatorFlags::None) \
	op(EPortAllocatorFlags::DisableUdp) \
	op(EPortAllocatorFlags::DisableStun) \
	op(EPortAllocatorFlags::DisableRelay) \
	op(EPortAllocatorFlags::DisableTcp) \
	op(EPortAllocatorFlags::EnableIPV6) \
	op(EPortAllocatorFlags::EnableSharedSocket) \
	op(EPortAllocatorFlags::EnableStunRetransmitAttribute) \
	op(EPortAllocatorFlags::DisableAdapterEnumeration) \
	op(EPortAllocatorFlags::DisableDefaultLocalCandidate) \
	op(EPortAllocatorFlags::DisableUdpRelay) \
	op(EPortAllocatorFlags::DisableCostlyNetworks) \
	op(EPortAllocatorFlags::EnableIPV6OnWifi) \
	op(EPortAllocatorFlags::EnableAnyAddressPort) \
	op(EPortAllocatorFlags::DisableLinkLocalNetworks) 

enum class EPortAllocatorFlags : uint32;
template<> struct TIsUEnumClass<EPortAllocatorFlags> { enum { Value = true }; };
template<> PIXELSTREAMING2SETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EPortAllocatorFlags>();
// ********** End Enum EPortAllocatorFlags *********************************************************

// ********** Begin Enum EInputControllerMode ******************************************************
#define FOREACH_ENUM_EINPUTCONTROLLERMODE(op) \
	op(EInputControllerMode::Any) \
	op(EInputControllerMode::Host) 

enum class EInputControllerMode : uint8;
template<> struct TIsUEnumClass<EInputControllerMode> { enum { Value = true }; };
template<> PIXELSTREAMING2SETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EInputControllerMode>();
// ********** End Enum EInputControllerMode ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
