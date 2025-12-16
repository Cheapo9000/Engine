// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerMappableKeySettings.h"

#ifdef ENHANCEDINPUT_PlayerMappableKeySettings_generated_h
#error "PlayerMappableKeySettings.generated.h already included, missing '#pragma once' in PlayerMappableKeySettings.h"
#endif
#define ENHANCEDINPUT_PlayerMappableKeySettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPlayerMappableKeySettings ***********************************************
#if WITH_EDITOR
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h_19_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetKnownMappingNames);
#else // WITH_EDITOR
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h_19_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UPlayerMappableKeySettings_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UPlayerMappableKeySettings_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerMappableKeySettings(); \
	friend struct ::Z_Construct_UClass_UPlayerMappableKeySettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UPlayerMappableKeySettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlayerMappableKeySettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UPlayerMappableKeySettings_NoRegister) \
	DECLARE_SERIALIZER(UPlayerMappableKeySettings)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UPlayerMappableKeySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlayerMappableKeySettings(UPlayerMappableKeySettings&&) = delete; \
	UPlayerMappableKeySettings(const UPlayerMappableKeySettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UPlayerMappableKeySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerMappableKeySettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerMappableKeySettings) \
	ENHANCEDINPUT_API virtual ~UPlayerMappableKeySettings();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h_16_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h_19_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlayerMappableKeySettings;

// ********** End Class UPlayerMappableKeySettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
