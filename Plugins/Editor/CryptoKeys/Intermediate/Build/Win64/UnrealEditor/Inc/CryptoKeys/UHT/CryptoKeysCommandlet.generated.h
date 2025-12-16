// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CryptoKeysCommandlet.h"

#ifdef CRYPTOKEYS_CryptoKeysCommandlet_generated_h
#error "CryptoKeysCommandlet.generated.h already included, missing '#pragma once' in CryptoKeysCommandlet.h"
#endif
#define CRYPTOKEYS_CryptoKeysCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCryptoKeysCommandlet ****************************************************
struct Z_Construct_UClass_UCryptoKeysCommandlet_Statics;
CRYPTOKEYS_API UClass* Z_Construct_UClass_UCryptoKeysCommandlet_NoRegister();

#define FID_Engine_Plugins_Editor_CryptoKeys_Source_CryptoKeys_Classes_CryptoKeysCommandlet_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCryptoKeysCommandlet(); \
	friend struct ::Z_Construct_UClass_UCryptoKeysCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CRYPTOKEYS_API UClass* ::Z_Construct_UClass_UCryptoKeysCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UCryptoKeysCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CryptoKeys"), Z_Construct_UClass_UCryptoKeysCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UCryptoKeysCommandlet)


#define FID_Engine_Plugins_Editor_CryptoKeys_Source_CryptoKeys_Classes_CryptoKeysCommandlet_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CRYPTOKEYS_API UCryptoKeysCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCryptoKeysCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CRYPTOKEYS_API, UCryptoKeysCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCryptoKeysCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCryptoKeysCommandlet(UCryptoKeysCommandlet&&) = delete; \
	UCryptoKeysCommandlet(const UCryptoKeysCommandlet&) = delete; \
	CRYPTOKEYS_API virtual ~UCryptoKeysCommandlet();


#define FID_Engine_Plugins_Editor_CryptoKeys_Source_CryptoKeys_Classes_CryptoKeysCommandlet_h_13_PROLOG
#define FID_Engine_Plugins_Editor_CryptoKeys_Source_CryptoKeys_Classes_CryptoKeysCommandlet_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_CryptoKeys_Source_CryptoKeys_Classes_CryptoKeysCommandlet_h_16_INCLASS \
	FID_Engine_Plugins_Editor_CryptoKeys_Source_CryptoKeys_Classes_CryptoKeysCommandlet_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCryptoKeysCommandlet;

// ********** End Class UCryptoKeysCommandlet ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_CryptoKeys_Source_CryptoKeys_Classes_CryptoKeysCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
