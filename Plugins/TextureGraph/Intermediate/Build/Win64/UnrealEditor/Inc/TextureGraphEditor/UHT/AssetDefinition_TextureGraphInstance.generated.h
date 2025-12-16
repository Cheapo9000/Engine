// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetDefinition_TextureGraphInstance.h"

#ifdef TEXTUREGRAPHEDITOR_AssetDefinition_TextureGraphInstance_generated_h
#error "AssetDefinition_TextureGraphInstance.generated.h already included, missing '#pragma once' in AssetDefinition_TextureGraphInstance.h"
#endif
#define TEXTUREGRAPHEDITOR_AssetDefinition_TextureGraphInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_TextureGraphInstance ************************************
struct Z_Construct_UClass_UAssetDefinition_TextureGraphInstance_Statics;
TEXTUREGRAPHEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_TextureGraphInstance_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_AssetDefinition_TextureGraphInstance_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_TextureGraphInstance(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_TextureGraphInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPHEDITOR_API UClass* ::Z_Construct_UClass_UAssetDefinition_TextureGraphInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_TextureGraphInstance, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraphEditor"), Z_Construct_UClass_UAssetDefinition_TextureGraphInstance_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_TextureGraphInstance)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_AssetDefinition_TextureGraphInstance_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_TextureGraphInstance(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_TextureGraphInstance(UAssetDefinition_TextureGraphInstance&&) = delete; \
	UAssetDefinition_TextureGraphInstance(const UAssetDefinition_TextureGraphInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_TextureGraphInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_TextureGraphInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_TextureGraphInstance) \
	NO_API virtual ~UAssetDefinition_TextureGraphInstance();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_AssetDefinition_TextureGraphInstance_h_10_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_AssetDefinition_TextureGraphInstance_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_AssetDefinition_TextureGraphInstance_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_AssetDefinition_TextureGraphInstance_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_TextureGraphInstance;

// ********** End Class UAssetDefinition_TextureGraphInstance **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_AssetDefinition_TextureGraphInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
