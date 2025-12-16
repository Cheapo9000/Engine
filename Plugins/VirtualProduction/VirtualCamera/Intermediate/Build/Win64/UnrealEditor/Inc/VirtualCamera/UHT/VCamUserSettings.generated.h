// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VCamUserSettings.h"

#ifdef VIRTUALCAMERA_VCamUserSettings_generated_h
#error "VCamUserSettings.generated.h already included, missing '#pragma once' in VCamUserSettings.h"
#endif
#define VIRTUALCAMERA_VCamUserSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVirtualCameraUserSettings;
enum class EVCamTutorialCompletionState : uint8;

// ********** Begin Class UVirtualCameraUserSettings ***********************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_VCamUserSettings_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTutorialCompletionState); \
	DECLARE_FUNCTION(execIsTutorialCompleted); \
	DECLARE_FUNCTION(execGetSettings);


struct Z_Construct_UClass_UVirtualCameraUserSettings_Statics;
VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraUserSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_VCamUserSettings_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVirtualCameraUserSettings(); \
	friend struct ::Z_Construct_UClass_UVirtualCameraUserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIRTUALCAMERA_API UClass* ::Z_Construct_UClass_UVirtualCameraUserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UVirtualCameraUserSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VirtualCamera"), Z_Construct_UClass_UVirtualCameraUserSettings_NoRegister) \
	DECLARE_SERIALIZER(UVirtualCameraUserSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_VCamUserSettings_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVirtualCameraUserSettings(UVirtualCameraUserSettings&&) = delete; \
	UVirtualCameraUserSettings(const UVirtualCameraUserSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualCameraUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualCameraUserSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVirtualCameraUserSettings) \
	NO_API virtual ~UVirtualCameraUserSettings();


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_VCamUserSettings_h_27_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_VCamUserSettings_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_VCamUserSettings_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_VCamUserSettings_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_VCamUserSettings_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVirtualCameraUserSettings;

// ********** End Class UVirtualCameraUserSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_VCamUserSettings_h

// ********** Begin Enum EVCamTutorialCompletionState **********************************************
#define FOREACH_ENUM_EVCAMTUTORIALCOMPLETIONSTATE(op) \
	op(EVCamTutorialCompletionState::Pending) \
	op(EVCamTutorialCompletionState::Completed) 

enum class EVCamTutorialCompletionState : uint8;
template<> struct TIsUEnumClass<EVCamTutorialCompletionState> { enum { Value = true }; };
template<> VIRTUALCAMERA_NON_ATTRIBUTED_API UEnum* StaticEnum<EVCamTutorialCompletionState>();
// ********** End Enum EVCamTutorialCompletionState ************************************************

// ********** Begin Enum EVCamPhotoSaveMode ********************************************************
#define FOREACH_ENUM_EVCAMPHOTOSAVEMODE(op) \
	op(EVCamPhotoSaveMode::Off) \
	op(EVCamPhotoSaveMode::PNG) \
	op(EVCamPhotoSaveMode::Texture) \
	op(EVCamPhotoSaveMode::Both) 

enum class EVCamPhotoSaveMode : uint8;
template<> struct TIsUEnumClass<EVCamPhotoSaveMode> { enum { Value = true }; };
template<> VIRTUALCAMERA_NON_ATTRIBUTED_API UEnum* StaticEnum<EVCamPhotoSaveMode>();
// ********** End Enum EVCamPhotoSaveMode **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
