// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaMaskSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMASK_AvaMaskSettings_generated_h
#error "AvaMaskSettings.generated.h already included, missing '#pragma once' in AvaMaskSettings.h"
#endif
#define AVALANCHEMASK_AvaMaskSettings_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMask_Private_AvaMaskSettings_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaMaskSettings(); \
	friend struct Z_Construct_UClass_UAvaMaskSettings_Statics; \
public: \
	DECLARE_CLASS(UAvaMaskSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheMask"), NO_API) \
	DECLARE_SERIALIZER(UAvaMaskSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMask_Private_AvaMaskSettings_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaMaskSettings(UAvaMaskSettings&&); \
	UAvaMaskSettings(const UAvaMaskSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaMaskSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaMaskSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaMaskSettings) \
	NO_API virtual ~UAvaMaskSettings();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMask_Private_AvaMaskSettings_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMask_Private_AvaMaskSettings_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMask_Private_AvaMaskSettings_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMask_Private_AvaMaskSettings_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMASK_API UClass* StaticClass<class UAvaMaskSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMask_Private_AvaMaskSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
