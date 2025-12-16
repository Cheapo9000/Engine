// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TedsSettingsFactory.h"

#ifdef TEDSSETTINGS_TedsSettingsFactory_generated_h
#error "TedsSettingsFactory.generated.h already included, missing '#pragma once' in TedsSettingsFactory.h"
#endif
#define TEDSSETTINGS_TedsSettingsFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTedsSettingsFactory *****************************************************
struct Z_Construct_UClass_UTedsSettingsFactory_Statics;
TEDSSETTINGS_API UClass* Z_Construct_UClass_UTedsSettingsFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsSettings_Private_TedsSettingsFactory_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTedsSettingsFactory(); \
	friend struct ::Z_Construct_UClass_UTedsSettingsFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEDSSETTINGS_API UClass* ::Z_Construct_UClass_UTedsSettingsFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UTedsSettingsFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsSettings"), Z_Construct_UClass_UTedsSettingsFactory_NoRegister) \
	DECLARE_SERIALIZER(UTedsSettingsFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsSettings_Private_TedsSettingsFactory_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTedsSettingsFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTedsSettingsFactory(UTedsSettingsFactory&&) = delete; \
	UTedsSettingsFactory(const UTedsSettingsFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTedsSettingsFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTedsSettingsFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTedsSettingsFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsSettings_Private_TedsSettingsFactory_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsSettings_Private_TedsSettingsFactory_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsSettings_Private_TedsSettingsFactory_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsSettings_Private_TedsSettingsFactory_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTedsSettingsFactory;

// ********** End Class UTedsSettingsFactory *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsSettings_Private_TedsSettingsFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
