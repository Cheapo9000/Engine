// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/ControlRigPoseProjectSettings.h"

#ifdef CONTROLRIG_ControlRigPoseProjectSettings_generated_h
#error "ControlRigPoseProjectSettings.generated.h already included, missing '#pragma once' in ControlRigPoseProjectSettings.h"
#endif
#define CONTROLRIG_ControlRigPoseProjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UControlRigPoseProjectSettings *******************************************
struct Z_Construct_UClass_UControlRigPoseProjectSettings_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigPoseProjectSettings_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPoseProjectSettings_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlRigPoseProjectSettings(); \
	friend struct ::Z_Construct_UClass_UControlRigPoseProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_UControlRigPoseProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigPoseProjectSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_UControlRigPoseProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UControlRigPoseProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPoseProjectSettings_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigPoseProjectSettings(UControlRigPoseProjectSettings&&) = delete; \
	UControlRigPoseProjectSettings(const UControlRigPoseProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, UControlRigPoseProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigPoseProjectSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UControlRigPoseProjectSettings) \
	CONTROLRIG_API virtual ~UControlRigPoseProjectSettings();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPoseProjectSettings_h_14_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPoseProjectSettings_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPoseProjectSettings_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPoseProjectSettings_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigPoseProjectSettings;

// ********** End Class UControlRigPoseProjectSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPoseProjectSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
