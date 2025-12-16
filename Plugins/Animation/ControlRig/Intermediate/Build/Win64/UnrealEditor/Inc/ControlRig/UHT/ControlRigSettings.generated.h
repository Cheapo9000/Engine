// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/ControlRigSettings.h"

#ifdef CONTROLRIG_ControlRigSettings_generated_h
#error "ControlRigSettings.generated.h already included, missing '#pragma once' in ControlRigSettings.h"
#endif
#define CONTROLRIG_ControlRigSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FControlRigSettingsPerPinBool *************************************
struct Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FControlRigSettingsPerPinBool;
// ********** End ScriptStruct FControlRigSettingsPerPinBool ***************************************

// ********** Begin Class UControlRigSettings ******************************************************
struct Z_Construct_UClass_UControlRigSettings_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigSettings_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUControlRigSettings(); \
	friend struct ::Z_Construct_UClass_UControlRigSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_UControlRigSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_UControlRigSettings_NoRegister) \
	DECLARE_SERIALIZER(UControlRigSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIG_API UControlRigSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, UControlRigSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigSettings(UControlRigSettings&&) = delete; \
	UControlRigSettings(const UControlRigSettings&) = delete; \
	CONTROLRIG_API virtual ~UControlRigSettings();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_43_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_46_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigSettings;

// ********** End Class UControlRigSettings ********************************************************

// ********** Begin Class UControlRigEditorSettings ************************************************
struct Z_Construct_UClass_UControlRigEditorSettings_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigEditorSettings_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_67_INCLASS \
private: \
	static void StaticRegisterNativesUControlRigEditorSettings(); \
	friend struct ::Z_Construct_UClass_UControlRigEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_UControlRigEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigEditorSettings, URigVMEditorSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_UControlRigEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UControlRigEditorSettings)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIG_API UControlRigEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, UControlRigEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigEditorSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigEditorSettings(UControlRigEditorSettings&&) = delete; \
	UControlRigEditorSettings(const UControlRigEditorSettings&) = delete; \
	CONTROLRIG_API virtual ~UControlRigEditorSettings();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_64_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_67_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigEditorSettings;

// ********** End Class UControlRigEditorSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h

// ********** Begin Enum EMultiRigTreeDisplayMode **************************************************
#define FOREACH_ENUM_EMULTIRIGTREEDISPLAYMODE(op) \
	op(EMultiRigTreeDisplayMode::All) \
	op(EMultiRigTreeDisplayMode::SelectedRigs) \
	op(EMultiRigTreeDisplayMode::SelectedModules) 

enum class EMultiRigTreeDisplayMode;
template<> struct TIsUEnumClass<EMultiRigTreeDisplayMode> { enum { Value = true }; };
template<> CONTROLRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EMultiRigTreeDisplayMode>();
// ********** End Enum EMultiRigTreeDisplayMode ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
