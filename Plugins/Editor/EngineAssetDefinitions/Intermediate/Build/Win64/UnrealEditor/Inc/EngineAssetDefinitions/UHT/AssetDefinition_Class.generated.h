// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Script/AssetDefinition_Class.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINEASSETDEFINITIONS_AssetDefinition_Class_generated_h
#error "AssetDefinition_Class.generated.h already included, missing '#pragma once' in AssetDefinition_Class.h"
#endif
#define ENGINEASSETDEFINITIONS_AssetDefinition_Class_generated_h

#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Script_AssetDefinition_Class_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_Class(); \
	friend struct Z_Construct_UClass_UAssetDefinition_Class_Statics; \
public: \
	DECLARE_CLASS(UAssetDefinition_Class, UAssetDefinition_ClassTypeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineAssetDefinitions"), NO_API) \
	DECLARE_SERIALIZER(UAssetDefinition_Class)


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Script_AssetDefinition_Class_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_Class(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssetDefinition_Class(UAssetDefinition_Class&&); \
	UAssetDefinition_Class(const UAssetDefinition_Class&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_Class); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_Class); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_Class) \
	NO_API virtual ~UAssetDefinition_Class();


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Script_AssetDefinition_Class_h_13_PROLOG
#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Script_AssetDefinition_Class_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Script_AssetDefinition_Class_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Script_AssetDefinition_Class_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<class UAssetDefinition_Class>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Script_AssetDefinition_Class_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
