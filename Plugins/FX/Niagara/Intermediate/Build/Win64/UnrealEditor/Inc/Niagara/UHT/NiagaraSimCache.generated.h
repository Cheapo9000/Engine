// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraSimCache.h"

#ifdef NIAGARA_NiagaraSimCache_generated_h
#error "NiagaraSimCache.generated.h already included, missing '#pragma once' in NiagaraSimCache.h"
#endif
#define NIAGARA_NiagaraSimCache_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UObject;
enum class ENiagaraSimCacheAttributeCaptureMode : uint8;
struct FLinearColor;
struct FNiagaraID;

// ********** Begin ScriptStruct FNiagaraSimCacheCreateParameters **********************************
struct Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraSimCacheCreateParameters;
// ********** End ScriptStruct FNiagaraSimCacheCreateParameters ************************************

// ********** Begin ScriptStruct FNiagaraSimCacheDataBuffers ***************************************
struct Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_143_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraSimCacheDataBuffers;
// ********** End ScriptStruct FNiagaraSimCacheDataBuffers *****************************************

// ********** Begin ScriptStruct FNiagaraSimCacheEmitterFrame **************************************
struct Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_176_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraSimCacheEmitterFrame;
// ********** End ScriptStruct FNiagaraSimCacheEmitterFrame ****************************************

// ********** Begin ScriptStruct FNiagaraSimCacheSystemFrame ***************************************
struct Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_192_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraSimCacheSystemFrame;
// ********** End ScriptStruct FNiagaraSimCacheSystemFrame *****************************************

// ********** Begin ScriptStruct FNiagaraSimCacheFrame *********************************************
struct Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_204_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraSimCacheFrame;
// ********** End ScriptStruct FNiagaraSimCacheFrame ***********************************************

// ********** Begin ScriptStruct FNiagaraSimCacheVariable ******************************************
struct Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_228_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraSimCacheVariable;
// ********** End ScriptStruct FNiagaraSimCacheVariable ********************************************

// ********** Begin ScriptStruct FNiagaraSimCacheDataBuffersLayout *********************************
struct Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_257_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraSimCacheDataBuffersLayout;
// ********** End ScriptStruct FNiagaraSimCacheDataBuffersLayout ***********************************

// ********** Begin ScriptStruct FNiagaraSimCacheLayout ********************************************
struct Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_369_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraSimCacheLayout;
// ********** End ScriptStruct FNiagaraSimCacheLayout **********************************************

// ********** Begin Class UNiagaraSimCache *********************************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_408_RPC_WRAPPERS \
	DECLARE_FUNCTION(execReadDataInterfaceAs); \
	DECLARE_FUNCTION(execReadQuatAttributeWithRebase); \
	DECLARE_FUNCTION(execReadQuatAttribute); \
	DECLARE_FUNCTION(execReadPositionAttributeWithRebase); \
	DECLARE_FUNCTION(execReadPositionAttribute); \
	DECLARE_FUNCTION(execReadIDAttribute); \
	DECLARE_FUNCTION(execReadColorAttribute); \
	DECLARE_FUNCTION(execReadVector4Attribute); \
	DECLARE_FUNCTION(execReadVectorAttribute); \
	DECLARE_FUNCTION(execReadVector2Attribute); \
	DECLARE_FUNCTION(execReadFloatAttribute); \
	DECLARE_FUNCTION(execReadIntAttribute); \
	DECLARE_FUNCTION(execGetEmitterNames); \
	DECLARE_FUNCTION(execGetEmitterName); \
	DECLARE_FUNCTION(execGetNumEmitters); \
	DECLARE_FUNCTION(execGetNumFrames); \
	DECLARE_FUNCTION(execGetStartSeconds); \
	DECLARE_FUNCTION(execGetAttributeCaptureMode); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execIsCacheValid);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_408_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraSimCache, NIAGARA_API)


struct Z_Construct_UClass_UNiagaraSimCache_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCache_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_408_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraSimCache(); \
	friend struct ::Z_Construct_UClass_UNiagaraSimCache_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraSimCache_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraSimCache, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraSimCache_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraSimCache) \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_408_ARCHIVESERIALIZER


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_408_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraSimCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSimCache) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraSimCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSimCache); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraSimCache(UNiagaraSimCache&&) = delete; \
	UNiagaraSimCache(const UNiagaraSimCache&) = delete; \
	NIAGARA_API virtual ~UNiagaraSimCache();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_399_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_408_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_408_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_408_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_408_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraSimCache;

// ********** End Class UNiagaraSimCache ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h

// ********** Begin Enum ENiagaraSimCacheAttributeCaptureMode **************************************
#define FOREACH_ENUM_ENIAGARASIMCACHEATTRIBUTECAPTUREMODE(op) \
	op(ENiagaraSimCacheAttributeCaptureMode::All) \
	op(ENiagaraSimCacheAttributeCaptureMode::RenderingOnly) \
	op(ENiagaraSimCacheAttributeCaptureMode::ExplicitAttributes) 

enum class ENiagaraSimCacheAttributeCaptureMode : uint8;
template<> struct TIsUEnumClass<ENiagaraSimCacheAttributeCaptureMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraSimCacheAttributeCaptureMode>();
// ********** End Enum ENiagaraSimCacheAttributeCaptureMode ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
