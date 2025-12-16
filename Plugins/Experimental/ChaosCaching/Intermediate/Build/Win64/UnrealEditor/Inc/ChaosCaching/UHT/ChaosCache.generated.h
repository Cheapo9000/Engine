// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chaos/ChaosCache.h"

#ifdef CHAOSCACHING_ChaosCache_generated_h
#error "ChaosCache.generated.h already included, missing '#pragma once' in ChaosCache.h"
#endif
#define CHAOSCACHING_ChaosCache_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FParticleTransformTrack *******************************************
struct Z_Construct_UScriptStruct_FParticleTransformTrack_Statics;
#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FParticleTransformTrack_Statics; \
	CHAOSCACHING_API static class UScriptStruct* StaticStruct();


struct FParticleTransformTrack;
// ********** End ScriptStruct FParticleTransformTrack *********************************************

// ********** Begin ScriptStruct FPerParticleCacheData *********************************************
struct Z_Construct_UScriptStruct_FPerParticleCacheData_Statics;
#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_82_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPerParticleCacheData_Statics; \
	CHAOSCACHING_API static class UScriptStruct* StaticStruct();


struct FPerParticleCacheData;
// ********** End ScriptStruct FPerParticleCacheData ***********************************************

// ********** Begin ScriptStruct FCacheSpawnableTemplate *******************************************
struct Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics;
#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_99_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics; \
	CHAOSCACHING_API static class UScriptStruct* StaticStruct();


struct FCacheSpawnableTemplate;
// ********** End ScriptStruct FCacheSpawnableTemplate *********************************************

// ********** Begin ScriptStruct FRichCurves *******************************************************
struct Z_Construct_UScriptStruct_FRichCurves_Statics;
#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_209_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRichCurves_Statics; \
	CHAOSCACHING_API static class UScriptStruct* StaticStruct();


struct FRichCurves;
// ********** End ScriptStruct FRichCurves *********************************************************

// ********** Begin ScriptStruct FCompressedRichCurves *********************************************
struct Z_Construct_UScriptStruct_FCompressedRichCurves_Statics;
#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_218_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCompressedRichCurves_Statics; \
	CHAOSCACHING_API static class UScriptStruct* StaticStruct();


struct FCompressedRichCurves;
// ********** End ScriptStruct FCompressedRichCurves ***********************************************

// ********** Begin Interface UChaosCacheData ******************************************************
struct Z_Construct_UClass_UChaosCacheData_Statics;
CHAOSCACHING_API UClass* Z_Construct_UClass_UChaosCacheData_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_303_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSCACHING_API UChaosCacheData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosCacheData(UChaosCacheData&&) = delete; \
	UChaosCacheData(const UChaosCacheData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCACHING_API, UChaosCacheData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosCacheData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosCacheData) \
	virtual ~UChaosCacheData() = default;


#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_303_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUChaosCacheData(); \
	friend struct ::Z_Construct_UClass_UChaosCacheData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCACHING_API UClass* ::Z_Construct_UClass_UChaosCacheData_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosCacheData, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ChaosCaching"), Z_Construct_UClass_UChaosCacheData_NoRegister) \
	DECLARE_SERIALIZER(UChaosCacheData)


#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_303_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_303_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_303_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_303_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IChaosCacheData() {} \
public: \
	typedef UChaosCacheData UClassType; \
	typedef IChaosCacheData ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_300_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_307_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_303_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosCacheData;

// ********** End Interface UChaosCacheData ********************************************************

// ********** Begin Class UChaosCache **************************************************************
#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_317_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UChaosCache, CHAOSCACHING_API)


struct Z_Construct_UClass_UChaosCache_Statics;
CHAOSCACHING_API UClass* Z_Construct_UClass_UChaosCache_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_317_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosCache(); \
	friend struct ::Z_Construct_UClass_UChaosCache_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCACHING_API UClass* ::Z_Construct_UClass_UChaosCache_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosCache, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosCaching"), Z_Construct_UClass_UChaosCache_NoRegister) \
	DECLARE_SERIALIZER(UChaosCache) \
	FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_317_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_317_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosCache(UChaosCache&&) = delete; \
	UChaosCache(const UChaosCache&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCACHING_API, UChaosCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosCache); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosCache) \
	CHAOSCACHING_API virtual ~UChaosCache();


#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_314_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_317_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_317_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_317_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosCache;

// ********** End Class UChaosCache ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
