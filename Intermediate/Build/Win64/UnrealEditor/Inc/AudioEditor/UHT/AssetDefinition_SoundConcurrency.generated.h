// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetTypeActions/AssetDefinition_SoundConcurrency.h"

#ifdef AUDIOEDITOR_AssetDefinition_SoundConcurrency_generated_h
#error "AssetDefinition_SoundConcurrency.generated.h already included, missing '#pragma once' in AssetDefinition_SoundConcurrency.h"
#endif
#define AUDIOEDITOR_AssetDefinition_SoundConcurrency_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_SoundConcurrency ****************************************
struct Z_Construct_UClass_UAssetDefinition_SoundConcurrency_Statics;
AUDIOEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_SoundConcurrency_NoRegister();

#define FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundConcurrency_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_SoundConcurrency(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_SoundConcurrency_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEDITOR_API UClass* ::Z_Construct_UClass_UAssetDefinition_SoundConcurrency_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_SoundConcurrency, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), Z_Construct_UClass_UAssetDefinition_SoundConcurrency_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_SoundConcurrency)


#define FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundConcurrency_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_SoundConcurrency(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_SoundConcurrency(UAssetDefinition_SoundConcurrency&&) = delete; \
	UAssetDefinition_SoundConcurrency(const UAssetDefinition_SoundConcurrency&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_SoundConcurrency); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_SoundConcurrency); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_SoundConcurrency) \
	NO_API virtual ~UAssetDefinition_SoundConcurrency();


#define FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundConcurrency_h_12_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundConcurrency_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundConcurrency_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundConcurrency_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_SoundConcurrency;

// ********** End Class UAssetDefinition_SoundConcurrency ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundConcurrency_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
