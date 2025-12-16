// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chaos/CacheManagerActor.h"

#ifdef CHAOSCACHING_CacheManagerActor_generated_h
#error "CacheManagerActor.generated.h already included, missing '#pragma once' in CacheManagerActor.h"
#endif
#define CHAOSCACHING_CacheManagerActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UChaosCacheCollection;
class UPrimitiveComponent;

// ********** Begin ScriptStruct FObservedComponent ************************************************
struct Z_Construct_UScriptStruct_FObservedComponent_Statics;
#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FObservedComponent_Statics; \
	CHAOSCACHING_API static class UScriptStruct* StaticStruct();


struct FObservedComponent;
// ********** End ScriptStruct FObservedComponent **************************************************

// ********** Begin Class AChaosCacheManager *******************************************************
#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_190_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEnablePlayback); \
	DECLARE_FUNCTION(execEnablePlaybackByCache); \
	DECLARE_FUNCTION(execTriggerAll); \
	DECLARE_FUNCTION(execTriggerComponentByCache); \
	DECLARE_FUNCTION(execTriggerComponent); \
	DECLARE_FUNCTION(execSetCacheCollection); \
	DECLARE_FUNCTION(execClearObservedComponents); \
	DECLARE_FUNCTION(execRemoveObservedComponent); \
	DECLARE_FUNCTION(execFindOrAddObservedComponent); \
	DECLARE_FUNCTION(execResetSingleTransform); \
	DECLARE_FUNCTION(execResetAllComponentTransforms); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execStart); \
	DECLARE_FUNCTION(execSetCurrentTime); \
	DECLARE_FUNCTION(execSetStartTime); \
	DECLARE_FUNCTION(execIsRecording);


#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_190_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AChaosCacheManager, CHAOSCACHING_API)


struct Z_Construct_UClass_AChaosCacheManager_Statics;
CHAOSCACHING_API UClass* Z_Construct_UClass_AChaosCacheManager_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_190_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChaosCacheManager(); \
	friend struct ::Z_Construct_UClass_AChaosCacheManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCACHING_API UClass* ::Z_Construct_UClass_AChaosCacheManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AChaosCacheManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosCaching"), Z_Construct_UClass_AChaosCacheManager_NoRegister) \
	DECLARE_SERIALIZER(AChaosCacheManager) \
	FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_190_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_190_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AChaosCacheManager(AChaosCacheManager&&) = delete; \
	AChaosCacheManager(const AChaosCacheManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCACHING_API, AChaosCacheManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChaosCacheManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AChaosCacheManager) \
	CHAOSCACHING_API virtual ~AChaosCacheManager();


#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_187_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_190_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_190_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_190_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_190_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AChaosCacheManager;

// ********** End Class AChaosCacheManager *********************************************************

// ********** Begin Class AChaosCachePlayer ********************************************************
struct Z_Construct_UClass_AChaosCachePlayer_Statics;
CHAOSCACHING_API UClass* Z_Construct_UClass_AChaosCachePlayer_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_480_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChaosCachePlayer(); \
	friend struct ::Z_Construct_UClass_AChaosCachePlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCACHING_API UClass* ::Z_Construct_UClass_AChaosCachePlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(AChaosCachePlayer, AChaosCacheManager, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosCaching"), Z_Construct_UClass_AChaosCachePlayer_NoRegister) \
	DECLARE_SERIALIZER(AChaosCachePlayer)


#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_480_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AChaosCachePlayer(AChaosCachePlayer&&) = delete; \
	AChaosCachePlayer(const AChaosCachePlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCACHING_API, AChaosCachePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChaosCachePlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AChaosCachePlayer) \
	CHAOSCACHING_API virtual ~AChaosCachePlayer();


#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_477_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_480_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_480_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_480_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AChaosCachePlayer;

// ********** End Class AChaosCachePlayer **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h

// ********** Begin Enum ECacheMode ****************************************************************
#define FOREACH_ENUM_ECACHEMODE(op) \
	op(ECacheMode::None) \
	op(ECacheMode::Play) \
	op(ECacheMode::Record) 

enum class ECacheMode : uint8;
template<> struct TIsUEnumClass<ECacheMode> { enum { Value = true }; };
template<> CHAOSCACHING_NON_ATTRIBUTED_API UEnum* StaticEnum<ECacheMode>();
// ********** End Enum ECacheMode ******************************************************************

// ********** Begin Enum EStartMode ****************************************************************
#define FOREACH_ENUM_ESTARTMODE(op) \
	op(EStartMode::Timed) \
	op(EStartMode::Triggered) 

enum class EStartMode : uint8;
template<> struct TIsUEnumClass<EStartMode> { enum { Value = true }; };
template<> CHAOSCACHING_NON_ATTRIBUTED_API UEnum* StaticEnum<EStartMode>();
// ********** End Enum EStartMode ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
