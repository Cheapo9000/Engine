// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundConcurrency.h"

#ifdef ENGINE_SoundConcurrency_generated_h
#error "SoundConcurrency.generated.h already included, missing '#pragma once' in SoundConcurrency.h"
#endif
#define ENGINE_SoundConcurrency_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSoundConcurrencySettings *****************************************
struct Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_76_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSoundConcurrencySettings;
// ********** End ScriptStruct FSoundConcurrencySettings *******************************************

// ********** Begin Class USoundConcurrency ********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_218_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetMaxCount);


struct Z_Construct_UClass_USoundConcurrency_Statics;
ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_218_INCLASS \
private: \
	static void StaticRegisterNativesUSoundConcurrency(); \
	friend struct ::Z_Construct_UClass_USoundConcurrency_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USoundConcurrency_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundConcurrency, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USoundConcurrency_NoRegister) \
	DECLARE_SERIALIZER(USoundConcurrency)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_218_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundConcurrency(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundConcurrency) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundConcurrency); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundConcurrency); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundConcurrency(USoundConcurrency&&) = delete; \
	USoundConcurrency(const USoundConcurrency&) = delete; \
	ENGINE_API virtual ~USoundConcurrency();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_215_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_218_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_218_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_218_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_218_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundConcurrency;

// ********** End Class USoundConcurrency **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h

// ********** Begin Enum EMaxConcurrentResolutionRule **********************************************
#define FOREACH_ENUM_EMAXCONCURRENTRESOLUTIONRULE(op) \
	op(EMaxConcurrentResolutionRule::PreventNew) \
	op(EMaxConcurrentResolutionRule::StopOldest) \
	op(EMaxConcurrentResolutionRule::StopFarthestThenPreventNew) \
	op(EMaxConcurrentResolutionRule::StopFarthestThenOldest) \
	op(EMaxConcurrentResolutionRule::StopLowestPriority) \
	op(EMaxConcurrentResolutionRule::StopQuietest) \
	op(EMaxConcurrentResolutionRule::StopLowestPriorityThenPreventNew) \
	op(EMaxConcurrentResolutionRule::Count) 

namespace EMaxConcurrentResolutionRule { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaxConcurrentResolutionRule::Type>();
// ********** End Enum EMaxConcurrentResolutionRule ************************************************

// ********** Begin Enum EConcurrencyVolumeScaleMode ***********************************************
#define FOREACH_ENUM_ECONCURRENCYVOLUMESCALEMODE(op) \
	op(EConcurrencyVolumeScaleMode::Default) \
	op(EConcurrencyVolumeScaleMode::Distance) \
	op(EConcurrencyVolumeScaleMode::Priority) 

enum class EConcurrencyVolumeScaleMode;
template<> struct TIsUEnumClass<EConcurrencyVolumeScaleMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EConcurrencyVolumeScaleMode>();
// ********** End Enum EConcurrencyVolumeScaleMode *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
