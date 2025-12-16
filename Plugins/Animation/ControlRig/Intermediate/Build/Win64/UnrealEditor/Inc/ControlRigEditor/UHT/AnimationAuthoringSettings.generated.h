// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/AnimationAuthoringSettings.h"

#ifdef CONTROLRIGEDITOR_AnimationAuthoringSettings_generated_h
#error "AnimationAuthoringSettings.generated.h already included, missing '#pragma once' in AnimationAuthoringSettings.h"
#endif
#define CONTROLRIGEDITOR_AnimationAuthoringSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimationAuthoringSettings **********************************************
struct Z_Construct_UClass_UAnimationAuthoringSettings_Statics;
CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UAnimationAuthoringSettings_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Sequencer_AnimationAuthoringSettings_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationAuthoringSettings(); \
	friend struct ::Z_Construct_UClass_UAnimationAuthoringSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGEDITOR_API UClass* ::Z_Construct_UClass_UAnimationAuthoringSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationAuthoringSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), Z_Construct_UClass_UAnimationAuthoringSettings_NoRegister) \
	DECLARE_SERIALIZER(UAnimationAuthoringSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Sequencer_AnimationAuthoringSettings_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIGEDITOR_API UAnimationAuthoringSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationAuthoringSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIGEDITOR_API, UAnimationAuthoringSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationAuthoringSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationAuthoringSettings(UAnimationAuthoringSettings&&) = delete; \
	UAnimationAuthoringSettings(const UAnimationAuthoringSettings&) = delete; \
	CONTROLRIGEDITOR_API virtual ~UAnimationAuthoringSettings();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Sequencer_AnimationAuthoringSettings_h_12_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Sequencer_AnimationAuthoringSettings_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Sequencer_AnimationAuthoringSettings_h_15_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Sequencer_AnimationAuthoringSettings_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationAuthoringSettings;

// ********** End Class UAnimationAuthoringSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Sequencer_AnimationAuthoringSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
