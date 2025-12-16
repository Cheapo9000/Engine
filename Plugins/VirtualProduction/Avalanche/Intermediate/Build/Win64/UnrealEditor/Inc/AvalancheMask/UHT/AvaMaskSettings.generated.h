// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaMaskSettings.h"

#ifdef AVALANCHEMASK_AvaMaskSettings_generated_h
#error "AvaMaskSettings.generated.h already included, missing '#pragma once' in AvaMaskSettings.h"
#endif
#define AVALANCHEMASK_AvaMaskSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaMaskSettings *********************************************************
struct Z_Construct_UClass_UAvaMaskSettings_Statics;
AVALANCHEMASK_API UClass* Z_Construct_UClass_UAvaMaskSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Private_AvaMaskSettings_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaMaskSettings(); \
	friend struct ::Z_Construct_UClass_UAvaMaskSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMASK_API UClass* ::Z_Construct_UClass_UAvaMaskSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaMaskSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheMask"), Z_Construct_UClass_UAvaMaskSettings_NoRegister) \
	DECLARE_SERIALIZER(UAvaMaskSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Private_AvaMaskSettings_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaMaskSettings(UAvaMaskSettings&&) = delete; \
	UAvaMaskSettings(const UAvaMaskSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaMaskSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaMaskSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaMaskSettings) \
	NO_API virtual ~UAvaMaskSettings();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Private_AvaMaskSettings_h_17_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Private_AvaMaskSettings_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Private_AvaMaskSettings_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Private_AvaMaskSettings_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaMaskSettings;

// ********** End Class UAvaMaskSettings ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Private_AvaMaskSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
