// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetDefinitionRegistry.h"

#ifdef ASSETDEFINITION_AssetDefinitionRegistry_generated_h
#error "AssetDefinitionRegistry.generated.h already included, missing '#pragma once' in AssetDefinitionRegistry.h"
#endif
#define ASSETDEFINITION_AssetDefinitionRegistry_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinitionRegistry *************************************************
struct Z_Construct_UClass_UAssetDefinitionRegistry_Statics;
ASSETDEFINITION_API UClass* Z_Construct_UClass_UAssetDefinitionRegistry_NoRegister();

#define FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinitionRegistry_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinitionRegistry(); \
	friend struct ::Z_Construct_UClass_UAssetDefinitionRegistry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASSETDEFINITION_API UClass* ::Z_Construct_UClass_UAssetDefinitionRegistry_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinitionRegistry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AssetDefinition"), Z_Construct_UClass_UAssetDefinitionRegistry_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinitionRegistry) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinitionRegistry_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinitionRegistry(UAssetDefinitionRegistry&&) = delete; \
	UAssetDefinitionRegistry(const UAssetDefinitionRegistry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASSETDEFINITION_API, UAssetDefinitionRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinitionRegistry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinitionRegistry) \
	ASSETDEFINITION_API virtual ~UAssetDefinitionRegistry();


#define FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinitionRegistry_h_17_PROLOG
#define FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinitionRegistry_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinitionRegistry_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinitionRegistry_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinitionRegistry;

// ********** End Class UAssetDefinitionRegistry ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinitionRegistry_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
