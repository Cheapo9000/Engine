// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetTypeActions/AssetDefinition_SoundWave.h"

#ifdef AUDIOEDITOR_AssetDefinition_SoundWave_generated_h
#error "AssetDefinition_SoundWave.generated.h already included, missing '#pragma once' in AssetDefinition_SoundWave.h"
#endif
#define AUDIOEDITOR_AssetDefinition_SoundWave_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_SoundWave ***********************************************
struct Z_Construct_UClass_UAssetDefinition_SoundWave_Statics;
AUDIOEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_SoundWave_NoRegister();

#define FID_Engine_Source_Editor_AudioEditor_Public_AssetTypeActions_AssetDefinition_SoundWave_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_SoundWave(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_SoundWave_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEDITOR_API UClass* ::Z_Construct_UClass_UAssetDefinition_SoundWave_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_SoundWave, UAssetDefinition_SoundBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), Z_Construct_UClass_UAssetDefinition_SoundWave_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_SoundWave)


#define FID_Engine_Source_Editor_AudioEditor_Public_AssetTypeActions_AssetDefinition_SoundWave_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API UAssetDefinition_SoundWave(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_SoundWave(UAssetDefinition_SoundWave&&) = delete; \
	UAssetDefinition_SoundWave(const UAssetDefinition_SoundWave&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, UAssetDefinition_SoundWave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_SoundWave); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_SoundWave) \
	AUDIOEDITOR_API virtual ~UAssetDefinition_SoundWave();


#define FID_Engine_Source_Editor_AudioEditor_Public_AssetTypeActions_AssetDefinition_SoundWave_h_13_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Public_AssetTypeActions_AssetDefinition_SoundWave_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Public_AssetTypeActions_AssetDefinition_SoundWave_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AudioEditor_Public_AssetTypeActions_AssetDefinition_SoundWave_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_SoundWave;

// ********** End Class UAssetDefinition_SoundWave *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Public_AssetTypeActions_AssetDefinition_SoundWave_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
