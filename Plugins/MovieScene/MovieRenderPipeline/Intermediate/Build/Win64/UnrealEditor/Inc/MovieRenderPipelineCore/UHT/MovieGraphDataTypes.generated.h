// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/MovieGraphDataTypes.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphDataTypes_generated_h
#error "MovieGraphDataTypes.generated.h already included, missing '#pragma once' in MovieGraphDataTypes.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphDataTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMovieGraphImagePreviewData;
struct FMovieGraphTimeStepData;

// ********** Begin ScriptStruct FMovieGraphImagePreviewData ***************************************
struct Z_Construct_UScriptStruct_FMovieGraphImagePreviewData_Statics;
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieGraphImagePreviewData_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


struct FMovieGraphImagePreviewData;
// ********** End ScriptStruct FMovieGraphImagePreviewData *****************************************

// ********** Begin ScriptStruct FMovieGraphInitConfig *********************************************
struct Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics;
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_65_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


struct FMovieGraphInitConfig;
// ********** End ScriptStruct FMovieGraphInitConfig ***********************************************

// ********** Begin Class UMovieGraphTimeStepBase **************************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCalculatedTimeData);


struct Z_Construct_UClass_UMovieGraphTimeStepBase_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphTimeStepBase_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_103_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphTimeStepBase(); \
	friend struct ::Z_Construct_UClass_UMovieGraphTimeStepBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphTimeStepBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphTimeStepBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphTimeStepBase_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphTimeStepBase)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_103_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphTimeStepBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphTimeStepBase(UMovieGraphTimeStepBase&&) = delete; \
	UMovieGraphTimeStepBase(const UMovieGraphTimeStepBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphTimeStepBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphTimeStepBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieGraphTimeStepBase) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphTimeStepBase();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_100_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_103_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_103_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_103_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphTimeStepBase;

// ********** End Class UMovieGraphTimeStepBase ****************************************************

// ********** Begin Class UMovieGraphEngineTimeStep ************************************************
struct Z_Construct_UClass_UMovieGraphEngineTimeStep_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphEngineTimeStep_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_134_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphEngineTimeStep(); \
	friend struct ::Z_Construct_UClass_UMovieGraphEngineTimeStep_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphEngineTimeStep_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphEngineTimeStep, UEngineCustomTimeStep, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphEngineTimeStep_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphEngineTimeStep)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_134_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphEngineTimeStep(UMovieGraphEngineTimeStep&&) = delete; \
	UMovieGraphEngineTimeStep(const UMovieGraphEngineTimeStep&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphEngineTimeStep); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphEngineTimeStep); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphEngineTimeStep) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphEngineTimeStep();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_131_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_134_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_134_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_134_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphEngineTimeStep;

// ********** End Class UMovieGraphEngineTimeStep **************************************************

// ********** Begin Class UMovieGraphRendererBase **************************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_218_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPreviewData);


struct Z_Construct_UClass_UMovieGraphRendererBase_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphRendererBase_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_218_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphRendererBase(); \
	friend struct ::Z_Construct_UClass_UMovieGraphRendererBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphRendererBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphRendererBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphRendererBase_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphRendererBase)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_218_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphRendererBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphRendererBase(UMovieGraphRendererBase&&) = delete; \
	UMovieGraphRendererBase(const UMovieGraphRendererBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphRendererBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphRendererBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieGraphRendererBase) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphRendererBase();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_215_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_218_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_218_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_218_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_218_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphRendererBase;

// ********** End Class UMovieGraphRendererBase ****************************************************

// ********** Begin Class UMovieGraphDataSourceBase ************************************************
struct Z_Construct_UClass_UMovieGraphDataSourceBase_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphDataSourceBase_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_251_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphDataSourceBase(); \
	friend struct ::Z_Construct_UClass_UMovieGraphDataSourceBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphDataSourceBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphDataSourceBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphDataSourceBase_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphDataSourceBase)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_251_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphDataSourceBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphDataSourceBase(UMovieGraphDataSourceBase&&) = delete; \
	UMovieGraphDataSourceBase(const UMovieGraphDataSourceBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphDataSourceBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphDataSourceBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieGraphDataSourceBase) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphDataSourceBase();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_248_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_251_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_251_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_251_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphDataSourceBase;

// ********** End Class UMovieGraphDataSourceBase **************************************************

// ********** Begin Class UMovieGraphAudioRendererBase *********************************************
struct Z_Construct_UClass_UMovieGraphAudioRendererBase_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphAudioRendererBase_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_297_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphAudioRendererBase(); \
	friend struct ::Z_Construct_UClass_UMovieGraphAudioRendererBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphAudioRendererBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphAudioRendererBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphAudioRendererBase_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphAudioRendererBase)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_297_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphAudioRendererBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphAudioRendererBase(UMovieGraphAudioRendererBase&&) = delete; \
	UMovieGraphAudioRendererBase(const UMovieGraphAudioRendererBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphAudioRendererBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphAudioRendererBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieGraphAudioRendererBase) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphAudioRendererBase();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_294_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_297_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_297_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_297_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphAudioRendererBase;

// ********** End Class UMovieGraphAudioRendererBase ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
