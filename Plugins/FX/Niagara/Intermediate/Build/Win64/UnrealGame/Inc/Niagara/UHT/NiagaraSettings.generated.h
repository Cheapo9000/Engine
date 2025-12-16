// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraSettings.h"

#ifdef NIAGARA_NiagaraSettings_generated_h
#error "NiagaraSettings.generated.h already included, missing '#pragma once' in NiagaraSettings.h"
#endif
#define NIAGARA_NiagaraSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraSettings *********************************************************
struct Z_Construct_UClass_UNiagaraSettings_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSettings_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_123_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraSettings(); \
	friend struct ::Z_Construct_UClass_UNiagaraSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraSettings_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Niagara");} \



#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_123_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraSettings(UNiagaraSettings&&) = delete; \
	UNiagaraSettings(const UNiagaraSettings&) = delete; \
	NIAGARA_API virtual ~UNiagaraSettings();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_120_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_123_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_123_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_123_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraSettings;

// ********** End Class UNiagaraSettings ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h

// ********** Begin Enum ENDISkelMesh_GpuMaxInfluences *********************************************
#define FOREACH_ENUM_ENDISKELMESH_GPUMAXINFLUENCES(op) \
	op(ENDISkelMesh_GpuMaxInfluences::AllowMax4) \
	op(ENDISkelMesh_GpuMaxInfluences::AllowMax8) \
	op(ENDISkelMesh_GpuMaxInfluences::Unlimited) 

namespace ENDISkelMesh_GpuMaxInfluences { enum Type : int; }
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENDISkelMesh_GpuMaxInfluences::Type>();
// ********** End Enum ENDISkelMesh_GpuMaxInfluences ***********************************************

// ********** Begin Enum ENDISkelMesh_GpuUniformSamplingFormat *************************************
#define FOREACH_ENUM_ENDISKELMESH_GPUUNIFORMSAMPLINGFORMAT(op) \
	op(ENDISkelMesh_GpuUniformSamplingFormat::Full) \
	op(ENDISkelMesh_GpuUniformSamplingFormat::Limited_24_8) \
	op(ENDISkelMesh_GpuUniformSamplingFormat::Limited_23_9) 

namespace ENDISkelMesh_GpuUniformSamplingFormat { enum Type : int; }
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENDISkelMesh_GpuUniformSamplingFormat::Type>();
// ********** End Enum ENDISkelMesh_GpuUniformSamplingFormat ***************************************

// ********** Begin Enum ENDISkelMesh_AdjacencyTriangleIndexFormat *********************************
#define FOREACH_ENUM_ENDISKELMESH_ADJACENCYTRIANGLEINDEXFORMAT(op) \
	op(ENDISkelMesh_AdjacencyTriangleIndexFormat::Full) \
	op(ENDISkelMesh_AdjacencyTriangleIndexFormat::Half) 

namespace ENDISkelMesh_AdjacencyTriangleIndexFormat { enum Type : int; }
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENDISkelMesh_AdjacencyTriangleIndexFormat::Type>();
// ********** End Enum ENDISkelMesh_AdjacencyTriangleIndexFormat ***********************************

// ********** Begin Enum ENiagaraDefaultRendererPixelCoverageMode **********************************
#define FOREACH_ENUM_ENIAGARADEFAULTRENDERERPIXELCOVERAGEMODE(op) \
	op(ENiagaraDefaultRendererPixelCoverageMode::Enabled) \
	op(ENiagaraDefaultRendererPixelCoverageMode::Disabled) 

enum class ENiagaraDefaultRendererPixelCoverageMode : uint8;
template<> struct TIsUEnumClass<ENiagaraDefaultRendererPixelCoverageMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraDefaultRendererPixelCoverageMode>();
// ********** End Enum ENiagaraDefaultRendererPixelCoverageMode ************************************

// ********** Begin Enum ENiagaraDefaultSortPrecision **********************************************
#define FOREACH_ENUM_ENIAGARADEFAULTSORTPRECISION(op) \
	op(ENiagaraDefaultSortPrecision::Low) \
	op(ENiagaraDefaultSortPrecision::High) 

enum class ENiagaraDefaultSortPrecision : uint8;
template<> struct TIsUEnumClass<ENiagaraDefaultSortPrecision> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraDefaultSortPrecision>();
// ********** End Enum ENiagaraDefaultSortPrecision ************************************************

// ********** Begin Enum ENiagaraDefaultGpuTranslucentLatency **************************************
#define FOREACH_ENUM_ENIAGARADEFAULTGPUTRANSLUCENTLATENCY(op) \
	op(ENiagaraDefaultGpuTranslucentLatency::Immediate) \
	op(ENiagaraDefaultGpuTranslucentLatency::Latent) 

enum class ENiagaraDefaultGpuTranslucentLatency : uint8;
template<> struct TIsUEnumClass<ENiagaraDefaultGpuTranslucentLatency> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraDefaultGpuTranslucentLatency>();
// ********** End Enum ENiagaraDefaultGpuTranslucentLatency ****************************************

// ********** Begin Enum ENiagaraCompileErrorSeverity **********************************************
#define FOREACH_ENUM_ENIAGARACOMPILEERRORSEVERITY(op) \
	op(ENiagaraCompileErrorSeverity::Ignore) \
	op(ENiagaraCompileErrorSeverity::LogOnly) \
	op(ENiagaraCompileErrorSeverity::Warning) \
	op(ENiagaraCompileErrorSeverity::Error) 

enum class ENiagaraCompileErrorSeverity : uint8;
template<> struct TIsUEnumClass<ENiagaraCompileErrorSeverity> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraCompileErrorSeverity>();
// ********** End Enum ENiagaraCompileErrorSeverity ************************************************

// ********** Begin Enum ENDICollisionQuery_AsyncGpuTraceProvider **********************************
#define FOREACH_ENUM_ENDICOLLISIONQUERY_ASYNCGPUTRACEPROVIDER(op) \
	op(ENDICollisionQuery_AsyncGpuTraceProvider::Default) \
	op(ENDICollisionQuery_AsyncGpuTraceProvider::HWRT) \
	op(ENDICollisionQuery_AsyncGpuTraceProvider::GSDF) \
	op(ENDICollisionQuery_AsyncGpuTraceProvider::None) 

namespace ENDICollisionQuery_AsyncGpuTraceProvider { enum Type : int; }
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENDICollisionQuery_AsyncGpuTraceProvider::Type>();
// ********** End Enum ENDICollisionQuery_AsyncGpuTraceProvider ************************************

// ********** Begin Enum ENiagaraStripScriptByteCodeOption *****************************************
#define FOREACH_ENUM_ENIAGARASTRIPSCRIPTBYTECODEOPTION(op) \
	op(ENiagaraStripScriptByteCodeOption::Default) \
	op(ENiagaraStripScriptByteCodeOption::Strip_Original) \
	op(ENiagaraStripScriptByteCodeOption::Strip_Experimental) 

enum class ENiagaraStripScriptByteCodeOption : uint8;
template<> struct TIsUEnumClass<ENiagaraStripScriptByteCodeOption> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraStripScriptByteCodeOption>();
// ********** End Enum ENiagaraStripScriptByteCodeOption *******************************************

// ********** Begin Enum ENiagaraCompilationMode ***************************************************
#if WITH_EDITORONLY_DATA
#define FOREACH_ENUM_ENIAGARACOMPILATIONMODE(op) \
	op(ENiagaraCompilationMode::Original) \
	op(ENiagaraCompilationMode::AsyncTasks) \
	op(ENiagaraCompilationMode::Verify) 

enum class ENiagaraCompilationMode : int32;
template<> struct TIsUEnumClass<ENiagaraCompilationMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraCompilationMode>();
#endif // WITH_EDITORONLY_DATA
// ********** End Enum ENiagaraCompilationMode *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
