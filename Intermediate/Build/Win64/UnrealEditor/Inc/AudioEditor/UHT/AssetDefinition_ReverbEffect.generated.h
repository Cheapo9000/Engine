// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetTypeActions/AssetDefinition_ReverbEffect.h"

#ifdef AUDIOEDITOR_AssetDefinition_ReverbEffect_generated_h
#error "AssetDefinition_ReverbEffect.generated.h already included, missing '#pragma once' in AssetDefinition_ReverbEffect.h"
#endif
#define AUDIOEDITOR_AssetDefinition_ReverbEffect_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_ReverbEffect ********************************************
struct Z_Construct_UClass_UAssetDefinition_ReverbEffect_Statics;
AUDIOEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_ReverbEffect_NoRegister();

#define FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_ReverbEffect_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_ReverbEffect(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_ReverbEffect_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEDITOR_API UClass* ::Z_Construct_UClass_UAssetDefinition_ReverbEffect_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_ReverbEffect, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), Z_Construct_UClass_UAssetDefinition_ReverbEffect_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_ReverbEffect)


#define FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_ReverbEffect_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_ReverbEffect(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_ReverbEffect(UAssetDefinition_ReverbEffect&&) = delete; \
	UAssetDefinition_ReverbEffect(const UAssetDefinition_ReverbEffect&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_ReverbEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_ReverbEffect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_ReverbEffect) \
	NO_API virtual ~UAssetDefinition_ReverbEffect();


#define FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_ReverbEffect_h_11_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_ReverbEffect_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_ReverbEffect_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_ReverbEffect_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_ReverbEffect;

// ********** End Class UAssetDefinition_ReverbEffect **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_ReverbEffect_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
