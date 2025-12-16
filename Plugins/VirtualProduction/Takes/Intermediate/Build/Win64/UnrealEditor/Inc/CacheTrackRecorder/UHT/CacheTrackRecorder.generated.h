// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Recorder/CacheTrackRecorder.h"

#ifdef CACHETRACKRECORDER_CacheTrackRecorder_generated_h
#error "CacheTrackRecorder.generated.h already included, missing '#pragma once' in CacheTrackRecorder.h"
#endif
#define CACHETRACKRECORDER_CacheTrackRecorder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelSequence;
enum class ECacheTrackRecorderState : uint8;

// ********** Begin ScriptStruct FCacheRecorderUserParameters **************************************
struct Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics;
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics; \
	CACHETRACKRECORDER_API static class UScriptStruct* StaticStruct();


struct FCacheRecorderUserParameters;
// ********** End ScriptStruct FCacheRecorderUserParameters ****************************************

// ********** Begin ScriptStruct FCacheRecorderProjectParameters ***********************************
struct Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics;
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics; \
	CACHETRACKRECORDER_API static class UScriptStruct* StaticStruct();


struct FCacheRecorderProjectParameters;
// ********** End ScriptStruct FCacheRecorderProjectParameters *************************************

// ********** Begin ScriptStruct FCacheRecorderParameters ******************************************
struct Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics;
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_88_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics; \
	CACHETRACKRECORDER_API static class UScriptStruct* StaticStruct();


struct FCacheRecorderParameters;
// ********** End ScriptStruct FCacheRecorderParameters ********************************************

// ********** Begin ScriptStruct FCachedTrackSource ************************************************
struct Z_Construct_UScriptStruct_FCachedTrackSource_Statics;
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_114_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCachedTrackSource_Statics; \
	CACHETRACKRECORDER_API static class UScriptStruct* StaticStruct();


struct FCachedTrackSource;
// ********** End ScriptStruct FCachedTrackSource **************************************************

// ********** Begin Class UCacheTrackRecorder ******************************************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_127_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetSequence);


struct Z_Construct_UClass_UCacheTrackRecorder_Statics;
CACHETRACKRECORDER_API UClass* Z_Construct_UClass_UCacheTrackRecorder_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_127_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCacheTrackRecorder(); \
	friend struct ::Z_Construct_UClass_UCacheTrackRecorder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CACHETRACKRECORDER_API UClass* ::Z_Construct_UClass_UCacheTrackRecorder_NoRegister(); \
public: \
	DECLARE_CLASS2(UCacheTrackRecorder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CacheTrackRecorder"), Z_Construct_UClass_UCacheTrackRecorder_NoRegister) \
	DECLARE_SERIALIZER(UCacheTrackRecorder)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_127_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CACHETRACKRECORDER_API UCacheTrackRecorder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCacheTrackRecorder(UCacheTrackRecorder&&) = delete; \
	UCacheTrackRecorder(const UCacheTrackRecorder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CACHETRACKRECORDER_API, UCacheTrackRecorder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCacheTrackRecorder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCacheTrackRecorder) \
	CACHETRACKRECORDER_API virtual ~UCacheTrackRecorder();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_122_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_127_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_127_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_127_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_127_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCacheTrackRecorder;

// ********** End Class UCacheTrackRecorder ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h

// ********** Begin Enum ECacheTrackRecorderState **************************************************
#define FOREACH_ENUM_ECACHETRACKRECORDERSTATE(op) \
	op(ECacheTrackRecorderState::Starting) \
	op(ECacheTrackRecorderState::PreRecord) \
	op(ECacheTrackRecorderState::TickingAfterPre) \
	op(ECacheTrackRecorderState::Started) \
	op(ECacheTrackRecorderState::Stopped) \
	op(ECacheTrackRecorderState::Cancelled) 

enum class ECacheTrackRecorderState : uint8;
template<> struct TIsUEnumClass<ECacheTrackRecorderState> { enum { Value = true }; };
template<> CACHETRACKRECORDER_NON_ATTRIBUTED_API UEnum* StaticEnum<ECacheTrackRecorderState>();
// ********** End Enum ECacheTrackRecorderState ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
