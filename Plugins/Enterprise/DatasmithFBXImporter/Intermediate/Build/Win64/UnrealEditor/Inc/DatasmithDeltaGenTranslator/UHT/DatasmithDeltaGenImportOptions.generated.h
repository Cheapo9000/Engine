// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithDeltaGenImportOptions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATASMITHDELTAGENTRANSLATOR_DatasmithDeltaGenImportOptions_generated_h
#error "DatasmithDeltaGenImportOptions.generated.h already included, missing '#pragma once' in DatasmithDeltaGenImportOptions.h"
#endif
#define DATASMITHDELTAGENTRANSLATOR_DatasmithDeltaGenImportOptions_generated_h

#define FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithDeltaGenTranslator_Private_DatasmithDeltaGenImportOptions_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithDeltaGenImportOptions(); \
	friend struct Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics; \
public: \
	DECLARE_CLASS(UDatasmithDeltaGenImportOptions, UDatasmithFBXImportOptions, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DatasmithDeltaGenTranslator"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithDeltaGenImportOptions)


#define FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithDeltaGenTranslator_Private_DatasmithDeltaGenImportOptions_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithDeltaGenImportOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithDeltaGenImportOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithDeltaGenImportOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithDeltaGenImportOptions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDatasmithDeltaGenImportOptions(UDatasmithDeltaGenImportOptions&&); \
	UDatasmithDeltaGenImportOptions(const UDatasmithDeltaGenImportOptions&); \
public: \
	NO_API virtual ~UDatasmithDeltaGenImportOptions();


#define FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithDeltaGenTranslator_Private_DatasmithDeltaGenImportOptions_h_21_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithDeltaGenTranslator_Private_DatasmithDeltaGenImportOptions_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithDeltaGenTranslator_Private_DatasmithDeltaGenImportOptions_h_24_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithDeltaGenTranslator_Private_DatasmithDeltaGenImportOptions_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHDELTAGENTRANSLATOR_API UClass* StaticClass<class UDatasmithDeltaGenImportOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithDeltaGenTranslator_Private_DatasmithDeltaGenImportOptions_h


#define FOREACH_ENUM_ESHADOWTEXTUREMODE(op) \
	op(EShadowTextureMode::Ignore) \
	op(EShadowTextureMode::AmbientOcclusion) \
	op(EShadowTextureMode::Multiplier) \
	op(EShadowTextureMode::AmbientOcclusionAndMultiplier) 

enum class EShadowTextureMode : uint8;
template<> struct TIsUEnumClass<EShadowTextureMode> { enum { Value = true }; };
template<> DATASMITHDELTAGENTRANSLATOR_API UEnum* StaticEnum<EShadowTextureMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
