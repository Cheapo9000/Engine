// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HairCardGeneratorPluginSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HAIRCARDGENERATOREDITOR_HairCardGeneratorPluginSettings_generated_h
#error "HairCardGeneratorPluginSettings.generated.h already included, missing '#pragma once' in HairCardGeneratorPluginSettings.h"
#endif
#define HAIRCARDGENERATOREDITOR_HairCardGeneratorPluginSettings_generated_h

#define FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGeneratorPluginSettings_h_111_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHairCardGeneratorPluginSettings(); \
	friend struct Z_Construct_UClass_UHairCardGeneratorPluginSettings_Statics; \
public: \
	DECLARE_CLASS(UHairCardGeneratorPluginSettings, UHairCardGenerationSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairCardGeneratorEditor"), NO_API) \
	DECLARE_SERIALIZER(UHairCardGeneratorPluginSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGeneratorPluginSettings_h_111_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHairCardGeneratorPluginSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHairCardGeneratorPluginSettings(UHairCardGeneratorPluginSettings&&); \
	UHairCardGeneratorPluginSettings(const UHairCardGeneratorPluginSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHairCardGeneratorPluginSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHairCardGeneratorPluginSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHairCardGeneratorPluginSettings) \
	NO_API virtual ~UHairCardGeneratorPluginSettings();


#define FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGeneratorPluginSettings_h_108_PROLOG
#define FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGeneratorPluginSettings_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGeneratorPluginSettings_h_111_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGeneratorPluginSettings_h_111_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HAIRCARDGENERATOREDITOR_API UClass* StaticClass<class UHairCardGeneratorPluginSettings>();

#define FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGeneratorPluginSettings_h_343_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHairCardGeneratorGroupSettings(); \
	friend struct Z_Construct_UClass_UHairCardGeneratorGroupSettings_Statics; \
public: \
	DECLARE_CLASS(UHairCardGeneratorGroupSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairCardGeneratorEditor"), NO_API) \
	DECLARE_SERIALIZER(UHairCardGeneratorGroupSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGeneratorPluginSettings_h_343_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHairCardGeneratorGroupSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHairCardGeneratorGroupSettings(UHairCardGeneratorGroupSettings&&); \
	UHairCardGeneratorGroupSettings(const UHairCardGeneratorGroupSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHairCardGeneratorGroupSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHairCardGeneratorGroupSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHairCardGeneratorGroupSettings) \
	NO_API virtual ~UHairCardGeneratorGroupSettings();


#define FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGeneratorPluginSettings_h_340_PROLOG
#define FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGeneratorPluginSettings_h_343_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGeneratorPluginSettings_h_343_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGeneratorPluginSettings_h_343_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HAIRCARDGENERATOREDITOR_API UClass* StaticClass<class UHairCardGeneratorGroupSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGeneratorPluginSettings_h


#define FOREACH_ENUM_EHAIRCARDATLASSIZE(op) \
	op(EHairCardAtlasSize::Uninitialized) \
	op(EHairCardAtlasSize::AtlasSize1024) \
	op(EHairCardAtlasSize::AtlasSize2048) \
	op(EHairCardAtlasSize::AtlasSize4096) \
	op(EHairCardAtlasSize::AtlasSize8192) 

enum class EHairCardAtlasSize : uint8;
template<> struct TIsUEnumClass<EHairCardAtlasSize> { enum { Value = true }; };
template<> HAIRCARDGENERATOREDITOR_API UEnum* StaticEnum<EHairCardAtlasSize>();

#define FOREACH_ENUM_EHAIRCARDGENERATIONPIPELINE(op) \
	op(EHairCardGenerationPipeline::None) \
	op(EHairCardGenerationPipeline::StrandClustering) \
	op(EHairCardGenerationPipeline::GeometryGeneration) \
	op(EHairCardGenerationPipeline::TextureClustering) \
	op(EHairCardGenerationPipeline::TextureLayout) \
	op(EHairCardGenerationPipeline::TextureRendering) \
	op(EHairCardGenerationPipeline::GenerateMesh) \
	op(EHairCardGenerationPipeline::ImportTextures) \
	op(EHairCardGenerationPipeline::All) \
	op(EHairCardGenerationPipeline::GroupUpdate) \
	op(EHairCardGenerationPipeline::TextureUpdate) \
	op(EHairCardGenerationPipeline::ImportUpdate) 

enum class EHairCardGenerationPipeline : uint8;
template<> struct TIsUEnumClass<EHairCardGenerationPipeline> { enum { Value = true }; };
template<> HAIRCARDGENERATOREDITOR_API UEnum* StaticEnum<EHairCardGenerationPipeline>();

#define FOREACH_ENUM_EHAIRCARDGENERATIONSETTINGSCATEGORIES(op) \
	op(EHairCardGenerationSettingsCategories::None) \
	op(EHairCardGenerationSettingsCategories::All) \
	op(EHairCardGenerationSettingsCategories::Asset) \
	op(EHairCardGenerationSettingsCategories::LevelOfDetail) \
	op(EHairCardGenerationSettingsCategories::Randomness) \
	op(EHairCardGenerationSettingsCategories::Cards) \
	op(EHairCardGenerationSettingsCategories::Geometry) \
	op(EHairCardGenerationSettingsCategories::Textures) \
	op(EHairCardGenerationSettingsCategories::TextureRendering) \
	op(EHairCardGenerationSettingsCategories::Import) 

enum class EHairCardGenerationSettingsCategories : uint8;
template<> struct TIsUEnumClass<EHairCardGenerationSettingsCategories> { enum { Value = true }; };
template<> HAIRCARDGENERATOREDITOR_API UEnum* StaticEnum<EHairCardGenerationSettingsCategories>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
