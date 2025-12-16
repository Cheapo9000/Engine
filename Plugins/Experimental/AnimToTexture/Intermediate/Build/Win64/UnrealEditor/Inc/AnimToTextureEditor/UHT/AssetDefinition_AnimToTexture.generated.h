// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetDefinition_AnimToTexture.h"

#ifdef ANIMTOTEXTUREEDITOR_AssetDefinition_AnimToTexture_generated_h
#error "AssetDefinition_AnimToTexture.generated.h already included, missing '#pragma once' in AssetDefinition_AnimToTexture.h"
#endif
#define ANIMTOTEXTUREEDITOR_AssetDefinition_AnimToTexture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_AnimToTexture *******************************************
struct Z_Construct_UClass_UAssetDefinition_AnimToTexture_Statics;
ANIMTOTEXTUREEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_AnimToTexture_NoRegister();

#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AssetDefinition_AnimToTexture_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_AnimToTexture(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_AnimToTexture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMTOTEXTUREEDITOR_API UClass* ::Z_Construct_UClass_UAssetDefinition_AnimToTexture_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_AnimToTexture, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimToTextureEditor"), Z_Construct_UClass_UAssetDefinition_AnimToTexture_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_AnimToTexture)


#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AssetDefinition_AnimToTexture_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_AnimToTexture(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_AnimToTexture(UAssetDefinition_AnimToTexture&&) = delete; \
	UAssetDefinition_AnimToTexture(const UAssetDefinition_AnimToTexture&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_AnimToTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_AnimToTexture); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_AnimToTexture) \
	NO_API virtual ~UAssetDefinition_AnimToTexture();


#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AssetDefinition_AnimToTexture_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AssetDefinition_AnimToTexture_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AssetDefinition_AnimToTexture_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AssetDefinition_AnimToTexture_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_AnimToTexture;

// ********** End Class UAssetDefinition_AnimToTexture *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AssetDefinition_AnimToTexture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
