// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Script/AssetDefinition_ClassTypeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINEASSETDEFINITIONS_AssetDefinition_ClassTypeBase_generated_h
#error "AssetDefinition_ClassTypeBase.generated.h already included, missing '#pragma once' in AssetDefinition_ClassTypeBase.h"
#endif
#define ENGINEASSETDEFINITIONS_AssetDefinition_ClassTypeBase_generated_h

#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Script_AssetDefinition_ClassTypeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_ClassTypeBase(); \
	friend struct Z_Construct_UClass_UAssetDefinition_ClassTypeBase_Statics; \
public: \
	DECLARE_CLASS(UAssetDefinition_ClassTypeBase, UAssetDefinitionDefault, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EngineAssetDefinitions"), ENGINEASSETDEFINITIONS_API) \
	DECLARE_SERIALIZER(UAssetDefinition_ClassTypeBase)


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Script_AssetDefinition_ClassTypeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINEASSETDEFINITIONS_API UAssetDefinition_ClassTypeBase(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssetDefinition_ClassTypeBase(UAssetDefinition_ClassTypeBase&&); \
	UAssetDefinition_ClassTypeBase(const UAssetDefinition_ClassTypeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINEASSETDEFINITIONS_API, UAssetDefinition_ClassTypeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_ClassTypeBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_ClassTypeBase) \
	ENGINEASSETDEFINITIONS_API virtual ~UAssetDefinition_ClassTypeBase();


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Script_AssetDefinition_ClassTypeBase_h_12_PROLOG
#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Script_AssetDefinition_ClassTypeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Script_AssetDefinition_ClassTypeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Script_AssetDefinition_ClassTypeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<class UAssetDefinition_ClassTypeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Script_AssetDefinition_ClassTypeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
