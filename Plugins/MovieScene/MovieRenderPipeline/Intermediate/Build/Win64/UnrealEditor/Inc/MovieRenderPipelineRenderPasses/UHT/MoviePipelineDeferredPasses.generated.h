// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineDeferredPasses.h"

#ifdef MOVIERENDERPIPELINERENDERPASSES_MoviePipelineDeferredPasses_generated_h
#error "MoviePipelineDeferredPasses.generated.h already included, missing '#pragma once' in MoviePipelineDeferredPasses.h"
#endif
#define MOVIERENDERPIPELINERENDERPASSES_MoviePipelineDeferredPasses_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMoviePipelinePostProcessPass *************************************
struct Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass_Statics;
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass_Statics; \
	MOVIERENDERPIPELINERENDERPASSES_API static class UScriptStruct* StaticStruct();


struct FMoviePipelinePostProcessPass;
// ********** End ScriptStruct FMoviePipelinePostProcessPass ***************************************

// ********** Begin Class UMoviePipelineDeferredPassBase *******************************************
struct Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics;
MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineDeferredPassBase_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineDeferredPassBase(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINERENDERPASSES_API UClass* ::Z_Construct_UClass_UMoviePipelineDeferredPassBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineDeferredPassBase, UMoviePipelineImagePassBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineRenderPasses"), Z_Construct_UClass_UMoviePipelineDeferredPassBase_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineDeferredPassBase)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_58_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineDeferredPassBase(UMoviePipelineDeferredPassBase&&) = delete; \
	UMoviePipelineDeferredPassBase(const UMoviePipelineDeferredPassBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINERENDERPASSES_API, UMoviePipelineDeferredPassBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineDeferredPassBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineDeferredPassBase) \
	MOVIERENDERPIPELINERENDERPASSES_API virtual ~UMoviePipelineDeferredPassBase();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_55_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineDeferredPassBase;

// ********** End Class UMoviePipelineDeferredPassBase *********************************************

// ********** Begin Class UMoviePipelineDeferredPass_Unlit *****************************************
struct Z_Construct_UClass_UMoviePipelineDeferredPass_Unlit_Statics;
MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineDeferredPass_Unlit_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_238_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineDeferredPass_Unlit(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineDeferredPass_Unlit_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINERENDERPASSES_API UClass* ::Z_Construct_UClass_UMoviePipelineDeferredPass_Unlit_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineDeferredPass_Unlit, UMoviePipelineDeferredPassBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineRenderPasses"), Z_Construct_UClass_UMoviePipelineDeferredPass_Unlit_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineDeferredPass_Unlit)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_238_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineDeferredPass_Unlit(UMoviePipelineDeferredPass_Unlit&&) = delete; \
	UMoviePipelineDeferredPass_Unlit(const UMoviePipelineDeferredPass_Unlit&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINERENDERPASSES_API, UMoviePipelineDeferredPass_Unlit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineDeferredPass_Unlit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineDeferredPass_Unlit) \
	MOVIERENDERPIPELINERENDERPASSES_API virtual ~UMoviePipelineDeferredPass_Unlit();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_235_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_238_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_238_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_238_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineDeferredPass_Unlit;

// ********** End Class UMoviePipelineDeferredPass_Unlit *******************************************

// ********** Begin Class UMoviePipelineDeferredPass_DetailLighting ********************************
struct Z_Construct_UClass_UMoviePipelineDeferredPass_DetailLighting_Statics;
MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineDeferredPass_DetailLighting_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_260_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineDeferredPass_DetailLighting(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineDeferredPass_DetailLighting_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINERENDERPASSES_API UClass* ::Z_Construct_UClass_UMoviePipelineDeferredPass_DetailLighting_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineDeferredPass_DetailLighting, UMoviePipelineDeferredPassBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineRenderPasses"), Z_Construct_UClass_UMoviePipelineDeferredPass_DetailLighting_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineDeferredPass_DetailLighting)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_260_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineDeferredPass_DetailLighting(UMoviePipelineDeferredPass_DetailLighting&&) = delete; \
	UMoviePipelineDeferredPass_DetailLighting(const UMoviePipelineDeferredPass_DetailLighting&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINERENDERPASSES_API, UMoviePipelineDeferredPass_DetailLighting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineDeferredPass_DetailLighting); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineDeferredPass_DetailLighting) \
	MOVIERENDERPIPELINERENDERPASSES_API virtual ~UMoviePipelineDeferredPass_DetailLighting();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_257_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_260_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_260_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_260_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineDeferredPass_DetailLighting;

// ********** End Class UMoviePipelineDeferredPass_DetailLighting **********************************

// ********** Begin Class UMoviePipelineDeferredPass_LightingOnly **********************************
struct Z_Construct_UClass_UMoviePipelineDeferredPass_LightingOnly_Statics;
MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineDeferredPass_LightingOnly_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_283_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineDeferredPass_LightingOnly(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineDeferredPass_LightingOnly_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINERENDERPASSES_API UClass* ::Z_Construct_UClass_UMoviePipelineDeferredPass_LightingOnly_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineDeferredPass_LightingOnly, UMoviePipelineDeferredPassBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineRenderPasses"), Z_Construct_UClass_UMoviePipelineDeferredPass_LightingOnly_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineDeferredPass_LightingOnly)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_283_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineDeferredPass_LightingOnly(UMoviePipelineDeferredPass_LightingOnly&&) = delete; \
	UMoviePipelineDeferredPass_LightingOnly(const UMoviePipelineDeferredPass_LightingOnly&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINERENDERPASSES_API, UMoviePipelineDeferredPass_LightingOnly); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineDeferredPass_LightingOnly); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineDeferredPass_LightingOnly) \
	MOVIERENDERPIPELINERENDERPASSES_API virtual ~UMoviePipelineDeferredPass_LightingOnly();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_280_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_283_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_283_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_283_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineDeferredPass_LightingOnly;

// ********** End Class UMoviePipelineDeferredPass_LightingOnly ************************************

// ********** Begin Class UMoviePipelineDeferredPass_ReflectionsOnly *******************************
struct Z_Construct_UClass_UMoviePipelineDeferredPass_ReflectionsOnly_Statics;
MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineDeferredPass_ReflectionsOnly_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_306_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineDeferredPass_ReflectionsOnly(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineDeferredPass_ReflectionsOnly_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINERENDERPASSES_API UClass* ::Z_Construct_UClass_UMoviePipelineDeferredPass_ReflectionsOnly_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineDeferredPass_ReflectionsOnly, UMoviePipelineDeferredPassBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineRenderPasses"), Z_Construct_UClass_UMoviePipelineDeferredPass_ReflectionsOnly_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineDeferredPass_ReflectionsOnly)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_306_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineDeferredPass_ReflectionsOnly(UMoviePipelineDeferredPass_ReflectionsOnly&&) = delete; \
	UMoviePipelineDeferredPass_ReflectionsOnly(const UMoviePipelineDeferredPass_ReflectionsOnly&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINERENDERPASSES_API, UMoviePipelineDeferredPass_ReflectionsOnly); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineDeferredPass_ReflectionsOnly); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineDeferredPass_ReflectionsOnly) \
	MOVIERENDERPIPELINERENDERPASSES_API virtual ~UMoviePipelineDeferredPass_ReflectionsOnly();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_303_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_306_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_306_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_306_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineDeferredPass_ReflectionsOnly;

// ********** End Class UMoviePipelineDeferredPass_ReflectionsOnly *********************************

// ********** Begin Class UMoviePipelineDeferredPass_PathTracer ************************************
struct Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer_Statics;
MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_329_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineDeferredPass_PathTracer(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINERENDERPASSES_API UClass* ::Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineDeferredPass_PathTracer, UMoviePipelineDeferredPassBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineRenderPasses"), Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineDeferredPass_PathTracer)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_329_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineDeferredPass_PathTracer(UMoviePipelineDeferredPass_PathTracer&&) = delete; \
	UMoviePipelineDeferredPass_PathTracer(const UMoviePipelineDeferredPass_PathTracer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINERENDERPASSES_API, UMoviePipelineDeferredPass_PathTracer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineDeferredPass_PathTracer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineDeferredPass_PathTracer) \
	MOVIERENDERPIPELINERENDERPASSES_API virtual ~UMoviePipelineDeferredPass_PathTracer();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_326_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_329_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_329_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_329_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineDeferredPass_PathTracer;

// ********** End Class UMoviePipelineDeferredPass_PathTracer **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
