// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMXProtocolSettings.h"

#ifdef DMXPROTOCOL_DMXProtocolSettings_generated_h
#error "DMXProtocolSettings.generated.h already included, missing '#pragma once' in DMXProtocolSettings.h"
#endif
#define DMXPROTOCOL_DMXProtocolSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDMXProtocolSettings *****************************************************
struct Z_Construct_UClass_UDMXProtocolSettings_Statics;
DMXPROTOCOL_API UClass* Z_Construct_UClass_UDMXProtocolSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolSettings_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXProtocolSettings(); \
	friend struct ::Z_Construct_UClass_UDMXProtocolSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXPROTOCOL_API UClass* ::Z_Construct_UClass_UDMXProtocolSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXProtocolSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/DMXProtocol"), Z_Construct_UClass_UDMXProtocolSettings_NoRegister) \
	DECLARE_SERIALIZER(UDMXProtocolSettings)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolSettings_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXProtocolSettings(UDMXProtocolSettings&&) = delete; \
	UDMXProtocolSettings(const UDMXProtocolSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXProtocolSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXProtocolSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMXProtocolSettings) \
	NO_API virtual ~UDMXProtocolSettings();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolSettings_h_21_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolSettings_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolSettings_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolSettings_h_30_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXProtocolSettings;

// ********** End Class UDMXProtocolSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
