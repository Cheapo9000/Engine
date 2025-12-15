// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CineCameraSettings.h"

#ifdef CINEMATICCAMERA_CineCameraSettings_generated_h
#error "CineCameraSettings.generated.h already included, missing '#pragma once' in CineCameraSettings.h"
#endif
#define CINEMATICCAMERA_CineCameraSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCineCameraSettings;
struct FCameraFilmbackSettings;
struct FCameraLensSettings;
struct FNamedFilmbackPreset;
struct FNamedLensPreset;
struct FNamedPlateCropPreset;
struct FPlateCropSettings;

// ********** Begin ScriptStruct FCameraFilmbackSettings *******************************************
struct Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics;
#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


struct FCameraFilmbackSettings;
// ********** End ScriptStruct FCameraFilmbackSettings *********************************************

// ********** Begin ScriptStruct FNamedFilmbackPreset **********************************************
struct Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics;
#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_71_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


struct FNamedFilmbackPreset;
// ********** End ScriptStruct FNamedFilmbackPreset ************************************************

// ********** Begin ScriptStruct FCameraLensSettings ***********************************************
struct Z_Construct_UScriptStruct_FCameraLensSettings_Statics;
#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_91_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCameraLensSettings_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


struct FCameraLensSettings;
// ********** End ScriptStruct FCameraLensSettings *************************************************

// ********** Begin ScriptStruct FNamedLensPreset **************************************************
struct Z_Construct_UScriptStruct_FNamedLensPreset_Statics;
#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_148_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNamedLensPreset_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


struct FNamedLensPreset;
// ********** End ScriptStruct FNamedLensPreset ****************************************************

// ********** Begin ScriptStruct FPlateCropSettings ************************************************
struct Z_Construct_UScriptStruct_FPlateCropSettings_Statics;
#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_164_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPlateCropSettings_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


struct FPlateCropSettings;
// ********** End ScriptStruct FPlateCropSettings **************************************************

// ********** Begin ScriptStruct FNamedPlateCropPreset *********************************************
struct Z_Construct_UScriptStruct_FNamedPlateCropPreset_Statics;
#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_179_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNamedPlateCropPreset_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


struct FNamedPlateCropPreset;
// ********** End ScriptStruct FNamedPlateCropPreset ***********************************************

// ********** Begin ScriptStruct FCameraTrackingFocusSettings **************************************
struct Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics;
#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_212_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


struct FCameraTrackingFocusSettings;
// ********** End ScriptStruct FCameraTrackingFocusSettings ****************************************

// ********** Begin ScriptStruct FCameraFocusSettings **********************************************
struct Z_Construct_UScriptStruct_FCameraFocusSettings_Statics;
#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_236_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCameraFocusSettings_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


struct FCameraFocusSettings;
// ********** End ScriptStruct FCameraFocusSettings ************************************************

// ********** Begin Class UCineCameraSettings ******************************************************
#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_302_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCropPresetNames); \
	DECLARE_FUNCTION(execGetFilmbackPresetNames); \
	DECLARE_FUNCTION(execGetLensPresetNames); \
	DECLARE_FUNCTION(execSetCropPresets); \
	DECLARE_FUNCTION(execSetDefaultCropPresetName); \
	DECLARE_FUNCTION(execSetFilmbackPresets); \
	DECLARE_FUNCTION(execSetDefaultFilmbackPreset); \
	DECLARE_FUNCTION(execSetLensPresets); \
	DECLARE_FUNCTION(execSetDefaultLensFStop); \
	DECLARE_FUNCTION(execSetDefaultLensFocalLength); \
	DECLARE_FUNCTION(execSetDefaultLensPresetName); \
	DECLARE_FUNCTION(execGetCineCameraSettings); \
	DECLARE_FUNCTION(execGetCropPresetByName); \
	DECLARE_FUNCTION(execGetFilmbackPresetByName); \
	DECLARE_FUNCTION(execGetLensPresetByName);


struct Z_Construct_UClass_UCineCameraSettings_Statics;
CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraSettings_NoRegister();

#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_302_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCineCameraSettings(); \
	friend struct ::Z_Construct_UClass_UCineCameraSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CINEMATICCAMERA_API UClass* ::Z_Construct_UClass_UCineCameraSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UCineCameraSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CinematicCamera"), Z_Construct_UClass_UCineCameraSettings_NoRegister) \
	DECLARE_SERIALIZER(UCineCameraSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_302_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CINEMATICCAMERA_API UCineCameraSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCineCameraSettings(UCineCameraSettings&&) = delete; \
	UCineCameraSettings(const UCineCameraSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CINEMATICCAMERA_API, UCineCameraSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCineCameraSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCineCameraSettings) \
	CINEMATICCAMERA_API virtual ~UCineCameraSettings();


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_299_PROLOG
#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_302_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_302_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_302_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_302_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCineCameraSettings;

// ********** End Class UCineCameraSettings ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h

// ********** Begin Enum ECameraFocusMethod ********************************************************
#define FOREACH_ENUM_ECAMERAFOCUSMETHOD(op) \
	op(ECameraFocusMethod::DoNotOverride) \
	op(ECameraFocusMethod::Manual) \
	op(ECameraFocusMethod::Tracking) \
	op(ECameraFocusMethod::Disable) 

enum class ECameraFocusMethod : uint8;
template<> struct TIsUEnumClass<ECameraFocusMethod> { enum { Value = true }; };
template<> CINEMATICCAMERA_NON_ATTRIBUTED_API UEnum* StaticEnum<ECameraFocusMethod>();
// ********** End Enum ECameraFocusMethod **********************************************************

// ********** Begin Enum ECameraExposureMethod *****************************************************
#define FOREACH_ENUM_ECAMERAEXPOSUREMETHOD(op) \
	op(ECameraExposureMethod::DoNotOverride) \
	op(ECameraExposureMethod::Enabled) 

enum class ECameraExposureMethod : uint8;
template<> struct TIsUEnumClass<ECameraExposureMethod> { enum { Value = true }; };
template<> CINEMATICCAMERA_NON_ATTRIBUTED_API UEnum* StaticEnum<ECameraExposureMethod>();
// ********** End Enum ECameraExposureMethod *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
