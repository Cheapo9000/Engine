// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GPULightmassSettings.h"

#ifdef GPULIGHTMASS_GPULightmassSettings_generated_h
#error "GPULightmassSettings.generated.h already included, missing '#pragma once' in GPULightmassSettings.h"
#endif
#define GPULIGHTMASS_GPULightmassSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGPULightmassSettings;

// ********** Begin Class UGPULightmassSettings ****************************************************
struct Z_Construct_UClass_UGPULightmassSettings_Statics;
GPULIGHTMASS_API UClass* Z_Construct_UClass_UGPULightmassSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGPULightmassSettings(); \
	friend struct ::Z_Construct_UClass_UGPULightmassSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GPULIGHTMASS_API UClass* ::Z_Construct_UClass_UGPULightmassSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UGPULightmassSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GPULightmass"), Z_Construct_UClass_UGPULightmassSettings_NoRegister) \
	DECLARE_SERIALIZER(UGPULightmassSettings)


#define FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGPULightmassSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGPULightmassSettings(UGPULightmassSettings&&) = delete; \
	UGPULightmassSettings(const UGPULightmassSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGPULightmassSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGPULightmassSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGPULightmassSettings) \
	NO_API virtual ~UGPULightmassSettings();


#define FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_32_PROLOG
#define FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGPULightmassSettings;

// ********** End Class UGPULightmassSettings ******************************************************

// ********** Begin Class AGPULightmassSettingsActor ***********************************************
struct Z_Construct_UClass_AGPULightmassSettingsActor_Statics;
GPULIGHTMASS_API UClass* Z_Construct_UClass_AGPULightmassSettingsActor_NoRegister();

#define FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_145_INCLASS \
private: \
	static void StaticRegisterNativesAGPULightmassSettingsActor(); \
	friend struct ::Z_Construct_UClass_AGPULightmassSettingsActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GPULIGHTMASS_API UClass* ::Z_Construct_UClass_AGPULightmassSettingsActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AGPULightmassSettingsActor, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GPULightmass"), Z_Construct_UClass_AGPULightmassSettingsActor_NoRegister) \
	DECLARE_SERIALIZER(AGPULightmassSettingsActor)


#define FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_145_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGPULightmassSettingsActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGPULightmassSettingsActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGPULightmassSettingsActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGPULightmassSettingsActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGPULightmassSettingsActor(AGPULightmassSettingsActor&&) = delete; \
	AGPULightmassSettingsActor(const AGPULightmassSettingsActor&) = delete; \
	NO_API virtual ~AGPULightmassSettingsActor();


#define FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_142_PROLOG
#define FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_145_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_145_INCLASS \
	FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_145_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGPULightmassSettingsActor;

// ********** End Class AGPULightmassSettingsActor *************************************************

// ********** Begin Class UGPULightmassSubsystem ***************************************************
#define FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_159_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSave); \
	DECLARE_FUNCTION(execSetRealtime); \
	DECLARE_FUNCTION(execGetPercentage); \
	DECLARE_FUNCTION(execEndRecordingVisibleTiles); \
	DECLARE_FUNCTION(execStartRecordingVisibleTiles); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execLaunch); \
	DECLARE_FUNCTION(execGetSettings);


struct Z_Construct_UClass_UGPULightmassSubsystem_Statics;
GPULIGHTMASS_API UClass* Z_Construct_UClass_UGPULightmassSubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_159_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGPULightmassSubsystem(); \
	friend struct ::Z_Construct_UClass_UGPULightmassSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GPULIGHTMASS_API UClass* ::Z_Construct_UClass_UGPULightmassSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UGPULightmassSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GPULightmass"), Z_Construct_UClass_UGPULightmassSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UGPULightmassSubsystem)


#define FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_159_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGPULightmassSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGPULightmassSubsystem(UGPULightmassSubsystem&&) = delete; \
	UGPULightmassSubsystem(const UGPULightmassSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGPULightmassSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGPULightmassSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGPULightmassSubsystem) \
	NO_API virtual ~UGPULightmassSubsystem();


#define FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_156_PROLOG
#define FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_159_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_159_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_159_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_159_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGPULightmassSubsystem;

// ********** End Class UGPULightmassSubsystem *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h

// ********** Begin Enum EGPULightmassMode *********************************************************
#define FOREACH_ENUM_EGPULIGHTMASSMODE(op) \
	op(EGPULightmassMode::FullBake) \
	op(EGPULightmassMode::BakeWhatYouSee) 

enum class EGPULightmassMode : uint8;
template<> struct TIsUEnumClass<EGPULightmassMode> { enum { Value = true }; };
template<> GPULIGHTMASS_NON_ATTRIBUTED_API UEnum* StaticEnum<EGPULightmassMode>();
// ********** End Enum EGPULightmassMode ***********************************************************

// ********** Begin Enum EGPULightmassDenoisingOptions *********************************************
#define FOREACH_ENUM_EGPULIGHTMASSDENOISINGOPTIONS(op) \
	op(EGPULightmassDenoisingOptions::None) \
	op(EGPULightmassDenoisingOptions::OnCompletion) \
	op(EGPULightmassDenoisingOptions::DuringInteractivePreview) 

enum class EGPULightmassDenoisingOptions : uint8;
template<> struct TIsUEnumClass<EGPULightmassDenoisingOptions> { enum { Value = true }; };
template<> GPULIGHTMASS_NON_ATTRIBUTED_API UEnum* StaticEnum<EGPULightmassDenoisingOptions>();
// ********** End Enum EGPULightmassDenoisingOptions ***********************************************

// ********** Begin Enum EGPULightmassDenoiser *****************************************************
#define FOREACH_ENUM_EGPULIGHTMASSDENOISER(op) \
	op(EGPULightmassDenoiser::IntelOIDN) \
	op(EGPULightmassDenoiser::SimpleFireflyRemover) 

enum class EGPULightmassDenoiser : uint8;
template<> struct TIsUEnumClass<EGPULightmassDenoiser> { enum { Value = true }; };
template<> GPULIGHTMASS_NON_ATTRIBUTED_API UEnum* StaticEnum<EGPULightmassDenoiser>();
// ********** End Enum EGPULightmassDenoiser *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
