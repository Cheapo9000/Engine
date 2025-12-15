// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangePipelineBase.h"

#ifdef INTERCHANGECORE_InterchangePipelineBase_generated_h
#error "InterchangePipelineBase.generated.h already included, missing '#pragma once' in InterchangePipelineBase.h"
#endif
#define INTERCHANGECORE_InterchangePipelineBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UInterchangeBaseNodeContainer;
class UInterchangeSourceData;
class UObject;
struct FInterchangePipelinePropertyStates;

// ********** Begin ScriptStruct FInterchangePipelineContextParams *********************************
struct Z_Construct_UScriptStruct_FInterchangePipelineContextParams_Statics;
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_61_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInterchangePipelineContextParams_Statics; \
	INTERCHANGECORE_API static class UScriptStruct* StaticStruct();


struct FInterchangePipelineContextParams;
// ********** End ScriptStruct FInterchangePipelineContextParams ***********************************

// ********** Begin ScriptStruct FInterchangePipelinePropertyStatePerContext ***********************
struct Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics;
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_81_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics; \
	INTERCHANGECORE_API static class UScriptStruct* StaticStruct();


struct FInterchangePipelinePropertyStatePerContext;
// ********** End ScriptStruct FInterchangePipelinePropertyStatePerContext *************************

// ********** Begin ScriptStruct FInterchangePipelinePropertyStates ********************************
struct Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics;
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_93_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics; \
	INTERCHANGECORE_API static class UScriptStruct* StaticStruct();


struct FInterchangePipelinePropertyStates;
// ********** End ScriptStruct FInterchangePipelinePropertyStates **********************************

// ********** Begin Class UInterchangePipelineBase *************************************************
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_218_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSupportReimport); \
	DECLARE_FUNCTION(execIsReimportContext); \
	DECLARE_FUNCTION(execFindOrAddPropertyStates); \
	DECLARE_FUNCTION(execDoesPropertyStatesExist); \
	DECLARE_FUNCTION(execScriptedSetReimportSourceIndex); \
	DECLARE_FUNCTION(execScriptedExecuteExportPipeline); \
	DECLARE_FUNCTION(execScriptedExecutePostBroadcastPipeline); \
	DECLARE_FUNCTION(execScriptedExecutePostImportPipeline); \
	DECLARE_FUNCTION(execScriptedExecutePostFactoryPipeline); \
	DECLARE_FUNCTION(execScriptedExecutePipeline); \
	DECLARE_FUNCTION(execScriptedGetPipelineDisplayName);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_218_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetSupportAssetClasses);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_218_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_218_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_218_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangePipelineBase, INTERCHANGECORE_API)


struct Z_Construct_UClass_UInterchangePipelineBase_Statics;
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase_NoRegister();

#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_218_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangePipelineBase(); \
	friend struct ::Z_Construct_UClass_UInterchangePipelineBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGECORE_API UClass* ::Z_Construct_UClass_UInterchangePipelineBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangePipelineBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeCore"), Z_Construct_UClass_UInterchangePipelineBase_NoRegister) \
	DECLARE_SERIALIZER(UInterchangePipelineBase) \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_218_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_218_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGECORE_API UInterchangePipelineBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangePipelineBase(UInterchangePipelineBase&&) = delete; \
	UInterchangePipelineBase(const UInterchangePipelineBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGECORE_API, UInterchangePipelineBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangePipelineBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangePipelineBase) \
	INTERCHANGECORE_API virtual ~UInterchangePipelineBase();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_215_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_218_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_218_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_218_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_218_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_218_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_218_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangePipelineBase;

// ********** End Class UInterchangePipelineBase ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h

// ********** Begin Enum EInterchangePipelineTask **************************************************
#define FOREACH_ENUM_EINTERCHANGEPIPELINETASK(op) \
	op(EInterchangePipelineTask::PostTranslator) \
	op(EInterchangePipelineTask::PostFactory) \
	op(EInterchangePipelineTask::PostImport) \
	op(EInterchangePipelineTask::Export) 

enum class EInterchangePipelineTask : uint8;
template<> struct TIsUEnumClass<EInterchangePipelineTask> { enum { Value = true }; };
template<> INTERCHANGECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangePipelineTask>();
// ********** End Enum EInterchangePipelineTask ****************************************************

// ********** Begin Enum EInterchangePipelineContext ***********************************************
#define FOREACH_ENUM_EINTERCHANGEPIPELINECONTEXT(op) \
	op(EInterchangePipelineContext::None) \
	op(EInterchangePipelineContext::AssetImport) \
	op(EInterchangePipelineContext::AssetReimport) \
	op(EInterchangePipelineContext::SceneImport) \
	op(EInterchangePipelineContext::SceneReimport) \
	op(EInterchangePipelineContext::AssetCustomLODImport) \
	op(EInterchangePipelineContext::AssetCustomLODReimport) \
	op(EInterchangePipelineContext::AssetAlternateSkinningImport) \
	op(EInterchangePipelineContext::AssetAlternateSkinningReimport) \
	op(EInterchangePipelineContext::AssetCustomMorphTargetImport) \
	op(EInterchangePipelineContext::AssetCustomMorphTargetReImport) 

enum class EInterchangePipelineContext : uint8;
template<> struct TIsUEnumClass<EInterchangePipelineContext> { enum { Value = true }; };
template<> INTERCHANGECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangePipelineContext>();
// ********** End Enum EInterchangePipelineContext *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
