// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetTypeActions/AssetDefinition_AudioBus.h"

#ifdef AUDIOEDITOR_AssetDefinition_AudioBus_generated_h
#error "AssetDefinition_AudioBus.generated.h already included, missing '#pragma once' in AssetDefinition_AudioBus.h"
#endif
#define AUDIOEDITOR_AssetDefinition_AudioBus_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_AudioBus ************************************************
struct Z_Construct_UClass_UAssetDefinition_AudioBus_Statics;
AUDIOEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_AudioBus_NoRegister();

#define FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_AudioBus_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_AudioBus(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_AudioBus_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEDITOR_API UClass* ::Z_Construct_UClass_UAssetDefinition_AudioBus_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_AudioBus, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), Z_Construct_UClass_UAssetDefinition_AudioBus_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_AudioBus)


#define FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_AudioBus_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_AudioBus(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_AudioBus(UAssetDefinition_AudioBus&&) = delete; \
	UAssetDefinition_AudioBus(const UAssetDefinition_AudioBus&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_AudioBus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_AudioBus); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_AudioBus) \
	NO_API virtual ~UAssetDefinition_AudioBus();


#define FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_AudioBus_h_11_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_AudioBus_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_AudioBus_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_AudioBus_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_AudioBus;

// ********** End Class UAssetDefinition_AudioBus **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_AudioBus_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
