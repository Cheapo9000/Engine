// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CryptoKeysSettings.h"

#ifdef CRYPTOKEYS_CryptoKeysSettings_generated_h
#error "CryptoKeysSettings.generated.h already included, missing '#pragma once' in CryptoKeysSettings.h"
#endif
#define CRYPTOKEYS_CryptoKeysSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCryptoEncryptionKey **********************************************
struct Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics;
#define FID_Engine_Plugins_Editor_CryptoKeys_Source_CryptoKeys_Classes_CryptoKeysSettings_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics; \
	CRYPTOKEYS_API static class UScriptStruct* StaticStruct();


struct FCryptoEncryptionKey;
// ********** End ScriptStruct FCryptoEncryptionKey ************************************************

// ********** Begin Class UCryptoKeysSettings ******************************************************
struct Z_Construct_UClass_UCryptoKeysSettings_Statics;
CRYPTOKEYS_API UClass* Z_Construct_UClass_UCryptoKeysSettings_NoRegister();

#define FID_Engine_Plugins_Editor_CryptoKeys_Source_CryptoKeys_Classes_CryptoKeysSettings_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCryptoKeysSettings(); \
	friend struct ::Z_Construct_UClass_UCryptoKeysSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CRYPTOKEYS_API UClass* ::Z_Construct_UClass_UCryptoKeysSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UCryptoKeysSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CryptoKeys"), Z_Construct_UClass_UCryptoKeysSettings_NoRegister) \
	DECLARE_SERIALIZER(UCryptoKeysSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Crypto");} \



#define FID_Engine_Plugins_Editor_CryptoKeys_Source_CryptoKeys_Classes_CryptoKeysSettings_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCryptoKeysSettings(UCryptoKeysSettings&&) = delete; \
	UCryptoKeysSettings(const UCryptoKeysSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CRYPTOKEYS_API, UCryptoKeysSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCryptoKeysSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCryptoKeysSettings) \
	CRYPTOKEYS_API virtual ~UCryptoKeysSettings();


#define FID_Engine_Plugins_Editor_CryptoKeys_Source_CryptoKeys_Classes_CryptoKeysSettings_h_31_PROLOG
#define FID_Engine_Plugins_Editor_CryptoKeys_Source_CryptoKeys_Classes_CryptoKeysSettings_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_CryptoKeys_Source_CryptoKeys_Classes_CryptoKeysSettings_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_CryptoKeys_Source_CryptoKeys_Classes_CryptoKeysSettings_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCryptoKeysSettings;

// ********** End Class UCryptoKeysSettings ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_CryptoKeys_Source_CryptoKeys_Classes_CryptoKeysSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
