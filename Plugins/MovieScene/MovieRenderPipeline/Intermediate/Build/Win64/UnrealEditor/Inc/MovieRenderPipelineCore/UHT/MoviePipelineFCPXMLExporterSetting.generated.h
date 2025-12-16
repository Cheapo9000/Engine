// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineFCPXMLExporterSetting.h"

#ifdef MOVIERENDERPIPELINECORE_MoviePipelineFCPXMLExporterSetting_generated_h
#error "MoviePipelineFCPXMLExporterSetting.generated.h already included, missing '#pragma once' in MoviePipelineFCPXMLExporterSetting.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelineFCPXMLExporterSetting_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoviePipelineFCPXMLExporter *********************************************
struct Z_Construct_UClass_UMoviePipelineFCPXMLExporter_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineFCPXMLExporter_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineFCPXMLExporterSetting_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineFCPXMLExporter(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineFCPXMLExporter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMoviePipelineFCPXMLExporter_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineFCPXMLExporter, UMoviePipelineOutputBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMoviePipelineFCPXMLExporter_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineFCPXMLExporter)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineFCPXMLExporterSetting_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineFCPXMLExporter(UMoviePipelineFCPXMLExporter&&) = delete; \
	UMoviePipelineFCPXMLExporter(const UMoviePipelineFCPXMLExporter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMoviePipelineFCPXMLExporter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineFCPXMLExporter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineFCPXMLExporter) \
	MOVIERENDERPIPELINECORE_API virtual ~UMoviePipelineFCPXMLExporter();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineFCPXMLExporterSetting_h_17_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineFCPXMLExporterSetting_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineFCPXMLExporterSetting_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineFCPXMLExporterSetting_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineFCPXMLExporter;

// ********** End Class UMoviePipelineFCPXMLExporter ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineFCPXMLExporterSetting_h

// ********** Begin Enum FCPXMLExportDataSource ****************************************************
#define FOREACH_ENUM_FCPXMLEXPORTDATASOURCE(op) \
	op(FCPXMLExportDataSource::OutputMetadata) \
	op(FCPXMLExportDataSource::SequenceData) 

enum class FCPXMLExportDataSource : uint8;
template<> struct TIsUEnumClass<FCPXMLExportDataSource> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<FCPXMLExportDataSource>();
// ********** End Enum FCPXMLExportDataSource ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
