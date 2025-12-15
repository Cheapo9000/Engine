// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequencerSettings.h"

#ifdef SEQUENCER_SequencerSettings_generated_h
#error "SequencerSettings.generated.h already included, missing '#pragma once' in SequencerSettings.h"
#endif
#define SEQUENCER_SequencerSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USequencerSettingsContainer **********************************************
struct Z_Construct_UClass_USequencerSettingsContainer_Statics;
SEQUENCER_API UClass* Z_Construct_UClass_USequencerSettingsContainer_NoRegister();

#define FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerSettingsContainer(); \
	friend struct ::Z_Construct_UClass_USequencerSettingsContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCER_API UClass* ::Z_Construct_UClass_USequencerSettingsContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(USequencerSettingsContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sequencer"), Z_Construct_UClass_USequencerSettingsContainer_NoRegister) \
	DECLARE_SERIALIZER(USequencerSettingsContainer)


#define FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SEQUENCER_API USequencerSettingsContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequencerSettingsContainer(USequencerSettingsContainer&&) = delete; \
	USequencerSettingsContainer(const USequencerSettingsContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SEQUENCER_API, USequencerSettingsContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerSettingsContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerSettingsContainer) \
	SEQUENCER_API virtual ~USequencerSettingsContainer();


#define FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_72_PROLOG
#define FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_77_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_77_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequencerSettingsContainer;

// ********** End Class USequencerSettingsContainer ************************************************

// ********** Begin ScriptStruct FColumnVisibilitySetting ******************************************
struct Z_Construct_UScriptStruct_FColumnVisibilitySetting_Statics;
#define FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_107_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FColumnVisibilitySetting_Statics; \
	SEQUENCER_API static class UScriptStruct* StaticStruct();


struct FColumnVisibilitySetting;
// ********** End ScriptStruct FColumnVisibilitySetting ********************************************

// ********** Begin Class USequencerSettings *******************************************************
#define FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_137_RPC_WRAPPERS \
	DECLARE_FUNCTION(execShouldShowThumbnailCaptureSettings);


struct Z_Construct_UClass_USequencerSettings_Statics;
SEQUENCER_API UClass* Z_Construct_UClass_USequencerSettings_NoRegister();

#define FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_137_INCLASS \
private: \
	static void StaticRegisterNativesUSequencerSettings(); \
	friend struct ::Z_Construct_UClass_USequencerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCER_API UClass* ::Z_Construct_UClass_USequencerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USequencerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sequencer"), Z_Construct_UClass_USequencerSettings_NoRegister) \
	DECLARE_SERIALIZER(USequencerSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_137_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SEQUENCER_API USequencerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SEQUENCER_API, USequencerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequencerSettings(USequencerSettings&&) = delete; \
	USequencerSettings(const USequencerSettings&) = delete; \
	SEQUENCER_API virtual ~USequencerSettings();


#define FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_132_PROLOG
#define FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_137_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_137_RPC_WRAPPERS \
	FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_137_INCLASS \
	FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_137_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequencerSettings;

// ********** End Class USequencerSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h

// ********** Begin Enum ESequencerSpawnPosition ***************************************************
#define FOREACH_ENUM_ESEQUENCERSPAWNPOSITION(op) \
	op(SSP_Origin) \
	op(SSP_PlaceInFrontOfCamera) 

enum ESequencerSpawnPosition : int;
template<> SEQUENCER_NON_ATTRIBUTED_API UEnum* StaticEnum<ESequencerSpawnPosition>();
// ********** End Enum ESequencerSpawnPosition *****************************************************

// ********** Begin Enum ESequencerZoomPosition ****************************************************
#define FOREACH_ENUM_ESEQUENCERZOOMPOSITION(op) \
	op(SZP_CurrentTime) \
	op(SZP_MousePosition) 

enum ESequencerZoomPosition : int;
template<> SEQUENCER_NON_ATTRIBUTED_API UEnum* StaticEnum<ESequencerZoomPosition>();
// ********** End Enum ESequencerZoomPosition ******************************************************

// ********** Begin Enum ESequencerLoopMode ********************************************************
#define FOREACH_ENUM_ESEQUENCERLOOPMODE(op) \
	op(SLM_NoLoop) \
	op(SLM_Loop) \
	op(SLM_LoopSelectionRange) 

enum ESequencerLoopMode : int;
template<> SEQUENCER_NON_ATTRIBUTED_API UEnum* StaticEnum<ESequencerLoopMode>();
// ********** End Enum ESequencerLoopMode **********************************************************

// ********** Begin Enum ESequencerTimeWarpDisplay *************************************************
#define FOREACH_ENUM_ESEQUENCERTIMEWARPDISPLAY(op) \
	op(ESequencerTimeWarpDisplay::UnwarpedTime) \
	op(ESequencerTimeWarpDisplay::WarpedTime) \
	op(ESequencerTimeWarpDisplay::Both) 

enum class ESequencerTimeWarpDisplay : uint8;
template<> struct TIsUEnumClass<ESequencerTimeWarpDisplay> { enum { Value = true }; };
template<> SEQUENCER_NON_ATTRIBUTED_API UEnum* StaticEnum<ESequencerTimeWarpDisplay>();
// ********** End Enum ESequencerTimeWarpDisplay ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
