// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithTextureImporter.h"

#ifdef DATASMITHIMPORTER_DatasmithTextureImporter_generated_h
#error "DatasmithTextureImporter.generated.h already included, missing '#pragma once' in DatasmithTextureImporter.h"
#endif
#define DATASMITHIMPORTER_DatasmithTextureImporter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDatasmithTexturePipeline ************************************************
struct Z_Construct_UClass_UDatasmithTexturePipeline_Statics;
DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithTexturePipeline_NoRegister();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithTextureImporter_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithTexturePipeline(); \
	friend struct ::Z_Construct_UClass_UDatasmithTexturePipeline_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATASMITHIMPORTER_API UClass* ::Z_Construct_UClass_UDatasmithTexturePipeline_NoRegister(); \
public: \
	DECLARE_CLASS2(UDatasmithTexturePipeline, UInterchangePipelineBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), Z_Construct_UClass_UDatasmithTexturePipeline_NoRegister) \
	DECLARE_SERIALIZER(UDatasmithTexturePipeline)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithTextureImporter_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithTexturePipeline(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDatasmithTexturePipeline(UDatasmithTexturePipeline&&) = delete; \
	UDatasmithTexturePipeline(const UDatasmithTexturePipeline&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithTexturePipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithTexturePipeline); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithTexturePipeline) \
	NO_API virtual ~UDatasmithTexturePipeline();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithTextureImporter_h_43_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithTextureImporter_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithTextureImporter_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithTextureImporter_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDatasmithTexturePipeline;

// ********** End Class UDatasmithTexturePipeline **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithTextureImporter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
