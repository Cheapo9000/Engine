// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditMode/ControlRigEditModeSettings.h"

#ifdef CONTROLRIGEDITOR_ControlRigEditModeSettings_generated_h
#error "ControlRigEditModeSettings.generated.h already included, missing '#pragma once' in ControlRigEditModeSettings.h"
#endif
#define CONTROLRIGEDITOR_ControlRigEditModeSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UControlRigEditModeSettings **********************************************
struct Z_Construct_UClass_UControlRigEditModeSettings_Statics;
CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigEditModeSettings_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_EditMode_ControlRigEditModeSettings_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlRigEditModeSettings(); \
	friend struct ::Z_Construct_UClass_UControlRigEditModeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGEDITOR_API UClass* ::Z_Construct_UClass_UControlRigEditModeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigEditModeSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), Z_Construct_UClass_UControlRigEditModeSettings_NoRegister) \
	DECLARE_SERIALIZER(UControlRigEditModeSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_EditMode_ControlRigEditModeSettings_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigEditModeSettings(UControlRigEditModeSettings&&) = delete; \
	UControlRigEditModeSettings(const UControlRigEditModeSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIGEDITOR_API, UControlRigEditModeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigEditModeSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UControlRigEditModeSettings) \
	CONTROLRIGEDITOR_API virtual ~UControlRigEditModeSettings();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_EditMode_ControlRigEditModeSettings_h_14_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_EditMode_ControlRigEditModeSettings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_EditMode_ControlRigEditModeSettings_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_EditMode_ControlRigEditModeSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigEditModeSettings;

// ********** End Class UControlRigEditModeSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_EditMode_ControlRigEditModeSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
