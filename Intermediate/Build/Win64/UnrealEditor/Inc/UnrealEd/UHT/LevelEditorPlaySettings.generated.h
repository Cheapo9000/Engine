// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/LevelEditorPlaySettings.h"

#ifdef UNREALED_LevelEditorPlaySettings_generated_h
#error "LevelEditorPlaySettings.generated.h already included, missing '#pragma once' in LevelEditorPlaySettings.h"
#endif
#define UNREALED_LevelEditorPlaySettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPlayScreenResolution *********************************************
struct Z_Construct_UScriptStruct_FPlayScreenResolution_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_159_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPlayScreenResolution_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FPlayScreenResolution;
// ********** End ScriptStruct FPlayScreenResolution ***********************************************

// ********** Begin Class UCommonResolutionMenuContext *********************************************
struct Z_Construct_UClass_UCommonResolutionMenuContext_Statics;
UNREALED_API UClass* Z_Construct_UClass_UCommonResolutionMenuContext_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_203_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonResolutionMenuContext(); \
	friend struct ::Z_Construct_UClass_UCommonResolutionMenuContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UCommonResolutionMenuContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonResolutionMenuContext, UToolMenuContextBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UCommonResolutionMenuContext_NoRegister) \
	DECLARE_SERIALIZER(UCommonResolutionMenuContext)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_203_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UCommonResolutionMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonResolutionMenuContext(UCommonResolutionMenuContext&&) = delete; \
	UCommonResolutionMenuContext(const UCommonResolutionMenuContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UCommonResolutionMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonResolutionMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonResolutionMenuContext) \
	UNREALED_API virtual ~UCommonResolutionMenuContext();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_199_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_203_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_203_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_203_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonResolutionMenuContext;

// ********** End Class UCommonResolutionMenuContext ***********************************************

// ********** Begin Class ULevelEditorPlaySettings *************************************************
struct Z_Construct_UClass_ULevelEditorPlaySettings_Statics;
UNREALED_API UClass* Z_Construct_UClass_ULevelEditorPlaySettings_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_217_INCLASS \
private: \
	static void StaticRegisterNativesULevelEditorPlaySettings(); \
	friend struct ::Z_Construct_UClass_ULevelEditorPlaySettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_ULevelEditorPlaySettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelEditorPlaySettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_ULevelEditorPlaySettings_NoRegister) \
	DECLARE_SERIALIZER(ULevelEditorPlaySettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_217_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API ULevelEditorPlaySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelEditorPlaySettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, ULevelEditorPlaySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelEditorPlaySettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelEditorPlaySettings(ULevelEditorPlaySettings&&) = delete; \
	ULevelEditorPlaySettings(const ULevelEditorPlaySettings&) = delete; \
	UNREALED_API virtual ~ULevelEditorPlaySettings();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_213_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_217_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_217_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_217_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelEditorPlaySettings;

// ********** End Class ULevelEditorPlaySettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h

// ********** Begin Enum ELabelAnchorMode **********************************************************
#define FOREACH_ENUM_ELABELANCHORMODE(op) \
	op(LabelAnchorMode_TopLeft) \
	op(LabelAnchorMode_TopCenter) \
	op(LabelAnchorMode_TopRight) \
	op(LabelAnchorMode_CenterLeft) \
	op(LabelAnchorMode_Centered) \
	op(LabelAnchorMode_CenterRight) \
	op(LabelAnchorMode_BottomLeft) \
	op(LabelAnchorMode_BottomCenter) \
	op(LabelAnchorMode_BottomRight) 

enum ELabelAnchorMode : int;
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<ELabelAnchorMode>();
// ********** End Enum ELabelAnchorMode ************************************************************

// ********** Begin Enum ELaunchModeType ***********************************************************
#define FOREACH_ENUM_ELAUNCHMODETYPE(op) \
	op(LaunchMode_OnDevice) 

enum ELaunchModeType : int;
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<ELaunchModeType>();
// ********** End Enum ELaunchModeType *************************************************************

// ********** Begin Enum EPlayModeLocations ********************************************************
#define FOREACH_ENUM_EPLAYMODELOCATIONS(op) \
	op(PlayLocation_CurrentCameraLocation) \
	op(PlayLocation_DefaultPlayerStart) 

enum EPlayModeLocations : int;
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EPlayModeLocations>();
// ********** End Enum EPlayModeLocations **********************************************************

// ********** Begin Enum EPlayModeType *************************************************************
#define FOREACH_ENUM_EPLAYMODETYPE(op) \
	op(PlayMode_InViewPort) \
	op(PlayMode_InEditorFloating) \
	op(PlayMode_InMobilePreview) \
	op(PlayMode_InTargetedMobilePreview) \
	op(PlayMode_InVulkanPreview) \
	op(PlayMode_InNewProcess) \
	op(PlayMode_InVR) \
	op(PlayMode_Simulate) \
	op(PlayMode_QuickLaunch) \
	op(PlayMode_Count) 

enum EPlayModeType : int;
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EPlayModeType>();
// ********** End Enum EPlayModeType ***************************************************************

// ********** Begin Enum EPlayNetMode **************************************************************
#define FOREACH_ENUM_EPLAYNETMODE(op) \
	op(PIE_Standalone) \
	op(PIE_ListenServer) \
	op(PIE_Client) 

enum EPlayNetMode : int;
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EPlayNetMode>();
// ********** End Enum EPlayNetMode ****************************************************************

// ********** Begin Enum EPlayOnBuildMode **********************************************************
#define FOREACH_ENUM_EPLAYONBUILDMODE(op) \
	op(PlayOnBuild_Always) \
	op(PlayOnBuild_Never) \
	op(PlayOnBuild_Default) \
	op(PlayOnBuild_IfEditorBuiltLocally) 

enum EPlayOnBuildMode : int;
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EPlayOnBuildMode>();
// ********** End Enum EPlayOnBuildMode ************************************************************

// ********** Begin Enum EPlayOnLaunchConfiguration ************************************************
#define FOREACH_ENUM_EPLAYONLAUNCHCONFIGURATION(op) \
	op(LaunchConfig_Default) \
	op(LaunchConfig_Debug) \
	op(LaunchConfig_Development) \
	op(LaunchConfig_Test) \
	op(LaunchConfig_Shipping) 

enum EPlayOnLaunchConfiguration : int;
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EPlayOnLaunchConfiguration>();
// ********** End Enum EPlayOnLaunchConfiguration **************************************************

// ********** Begin Enum EPlayOnPakFileMode ********************************************************
#define FOREACH_ENUM_EPLAYONPAKFILEMODE(op) \
	op(EPlayOnPakFileMode::NoPak) \
	op(EPlayOnPakFileMode::PakNoCompress) \
	op(EPlayOnPakFileMode::PakCompress) 

enum class EPlayOnPakFileMode : uint8;
template<> struct TIsUEnumClass<EPlayOnPakFileMode> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EPlayOnPakFileMode>();
// ********** End Enum EPlayOnPakFileMode **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
