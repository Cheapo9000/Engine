// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MusicTypes/MusicHandle.h"

#ifdef MUSICENVIRONMENT_MusicHandle_generated_h
#error "MusicHandle.generated.h already included, missing '#pragma once' in MusicHandle.h"
#endif
#define MUSICENVIRONMENT_MusicHandle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IMusicalAsset;
class IMusicEnvironmentClockSource;
class IMusicHandle;
enum class EMusicHanldeClockValidity : uint8;
enum class EMusicHanldeTransportState : uint8;
struct FGameplayTag;

// ********** Begin Interface UMusicHandle *********************************************************
#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicHandle_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnregisterAsTaggedClock); \
	DECLARE_FUNCTION(execRegisterAsTaggedClock); \
	DECLARE_FUNCTION(execRelinquishGlobalMusicClockAuthority); \
	DECLARE_FUNCTION(execBecomeGlobalMusicClockAuthority); \
	DECLARE_FUNCTION(execGetCurrentBarBeat); \
	DECLARE_FUNCTION(execGetMusicClockSource); \
	DECLARE_FUNCTION(execIsUsingAsset); \
	DECLARE_FUNCTION(execGetTransportState); \
	DECLARE_FUNCTION(execBranchOnTransportState); \
	DECLARE_FUNCTION(execKill); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execContinue); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execIsReadyToPlay); \
	DECLARE_FUNCTION(execIsValid);


struct Z_Construct_UClass_UMusicHandle_Statics;
MUSICENVIRONMENT_API UClass* Z_Construct_UClass_UMusicHandle_NoRegister();

#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicHandle_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MUSICENVIRONMENT_API UMusicHandle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMusicHandle(UMusicHandle&&) = delete; \
	UMusicHandle(const UMusicHandle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MUSICENVIRONMENT_API, UMusicHandle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMusicHandle); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMusicHandle) \
	virtual ~UMusicHandle() = default;


#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicHandle_h_64_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMusicHandle(); \
	friend struct ::Z_Construct_UClass_UMusicHandle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MUSICENVIRONMENT_API UClass* ::Z_Construct_UClass_UMusicHandle_NoRegister(); \
public: \
	DECLARE_CLASS2(UMusicHandle, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MusicEnvironment"), Z_Construct_UClass_UMusicHandle_NoRegister) \
	DECLARE_SERIALIZER(UMusicHandle)


#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicHandle_h_64_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicHandle_h_64_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicHandle_h_64_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicHandle_h_64_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMusicHandle() {} \
public: \
	typedef UMusicHandle UClassType; \
	typedef IMusicHandle ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicHandle_h_61_PROLOG
#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicHandle_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicHandle_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicHandle_h_64_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMusicHandle;

// ********** End Interface UMusicHandle ***********************************************************

// ********** Begin Class UMusicHandleBlueprintHelpers *********************************************
#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicHandle_h_234_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTransportState); \
	DECLARE_FUNCTION(execBranchOnTransportState);


struct Z_Construct_UClass_UMusicHandleBlueprintHelpers_Statics;
MUSICENVIRONMENT_API UClass* Z_Construct_UClass_UMusicHandleBlueprintHelpers_NoRegister();

#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicHandle_h_234_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMusicHandleBlueprintHelpers(); \
	friend struct ::Z_Construct_UClass_UMusicHandleBlueprintHelpers_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MUSICENVIRONMENT_API UClass* ::Z_Construct_UClass_UMusicHandleBlueprintHelpers_NoRegister(); \
public: \
	DECLARE_CLASS2(UMusicHandleBlueprintHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MusicEnvironment"), Z_Construct_UClass_UMusicHandleBlueprintHelpers_NoRegister) \
	DECLARE_SERIALIZER(UMusicHandleBlueprintHelpers)


#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicHandle_h_234_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMusicHandleBlueprintHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMusicHandleBlueprintHelpers(UMusicHandleBlueprintHelpers&&) = delete; \
	UMusicHandleBlueprintHelpers(const UMusicHandleBlueprintHelpers&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMusicHandleBlueprintHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMusicHandleBlueprintHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMusicHandleBlueprintHelpers) \
	NO_API virtual ~UMusicHandleBlueprintHelpers();


#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicHandle_h_231_PROLOG
#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicHandle_h_234_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicHandle_h_234_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicHandle_h_234_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicHandle_h_234_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMusicHandleBlueprintHelpers;

// ********** End Class UMusicHandleBlueprintHelpers ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicHandle_h

// ********** Begin Enum EMusicHanldeClockValidity *************************************************
#define FOREACH_ENUM_EMUSICHANLDECLOCKVALIDITY(op) \
	op(EMusicHanldeClockValidity::ClockValid) \
	op(EMusicHanldeClockValidity::ClockInvalid) 

enum class EMusicHanldeClockValidity : uint8;
template<> struct TIsUEnumClass<EMusicHanldeClockValidity> { enum { Value = true }; };
template<> MUSICENVIRONMENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMusicHanldeClockValidity>();
// ********** End Enum EMusicHanldeClockValidity ***************************************************

// ********** Begin Enum EMusicHanldeTransportState ************************************************
#define FOREACH_ENUM_EMUSICHANLDETRANSPORTSTATE(op) \
	op(EMusicHanldeTransportState::PreparingToPlay) \
	op(EMusicHanldeTransportState::ReadyToPlay) \
	op(EMusicHanldeTransportState::Playing) \
	op(EMusicHanldeTransportState::Paused) \
	op(EMusicHanldeTransportState::Stale) 

enum class EMusicHanldeTransportState : uint8;
template<> struct TIsUEnumClass<EMusicHanldeTransportState> { enum { Value = true }; };
template<> MUSICENVIRONMENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMusicHanldeTransportState>();
// ********** End Enum EMusicHanldeTransportState **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
