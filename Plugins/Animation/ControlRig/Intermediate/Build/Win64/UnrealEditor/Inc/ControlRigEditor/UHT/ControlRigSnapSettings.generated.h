// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/ControlRigSnapSettings.h"

#ifdef CONTROLRIGEDITOR_ControlRigSnapSettings_generated_h
#error "ControlRigSnapSettings.generated.h already included, missing '#pragma once' in ControlRigSnapSettings.h"
#endif
#define CONTROLRIGEDITOR_ControlRigSnapSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UControlRigSnapSettings **************************************************
struct Z_Construct_UClass_UControlRigSnapSettings_Statics;
CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigSnapSettings_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_ControlRigSnapSettings_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlRigSnapSettings(); \
	friend struct ::Z_Construct_UClass_UControlRigSnapSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGEDITOR_API UClass* ::Z_Construct_UClass_UControlRigSnapSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigSnapSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), Z_Construct_UClass_UControlRigSnapSettings_NoRegister) \
	DECLARE_SERIALIZER(UControlRigSnapSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_ControlRigSnapSettings_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigSnapSettings(UControlRigSnapSettings&&) = delete; \
	UControlRigSnapSettings(const UControlRigSnapSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIGEDITOR_API, UControlRigSnapSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigSnapSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UControlRigSnapSettings) \
	CONTROLRIGEDITOR_API virtual ~UControlRigSnapSettings();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_ControlRigSnapSettings_h_15_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_ControlRigSnapSettings_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_ControlRigSnapSettings_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_ControlRigSnapSettings_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigSnapSettings;

// ********** End Class UControlRigSnapSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_ControlRigSnapSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
