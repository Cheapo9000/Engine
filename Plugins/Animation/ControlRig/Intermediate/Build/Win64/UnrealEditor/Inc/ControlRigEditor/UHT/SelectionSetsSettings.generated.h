// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/SelectionSets/SelectionSetsSettings.h"

#ifdef CONTROLRIGEDITOR_SelectionSetsSettings_generated_h
#error "SelectionSetsSettings.generated.h already included, missing '#pragma once' in SelectionSetsSettings.h"
#endif
#define CONTROLRIGEDITOR_SelectionSetsSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USelectionSetsSettings ***************************************************
struct Z_Construct_UClass_USelectionSetsSettings_Statics;
CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_USelectionSetsSettings_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_SelectionSets_SelectionSetsSettings_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSelectionSetsSettings(); \
	friend struct ::Z_Construct_UClass_USelectionSetsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGEDITOR_API UClass* ::Z_Construct_UClass_USelectionSetsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USelectionSetsSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), Z_Construct_UClass_USelectionSetsSettings_NoRegister) \
	DECLARE_SERIALIZER(USelectionSetsSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_SelectionSets_SelectionSetsSettings_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USelectionSetsSettings(USelectionSetsSettings&&) = delete; \
	USelectionSetsSettings(const USelectionSetsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIGEDITOR_API, USelectionSetsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelectionSetsSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USelectionSetsSettings) \
	CONTROLRIGEDITOR_API virtual ~USelectionSetsSettings();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_SelectionSets_SelectionSetsSettings_h_20_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_SelectionSets_SelectionSetsSettings_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_SelectionSets_SelectionSetsSettings_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_SelectionSets_SelectionSetsSettings_h_24_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USelectionSetsSettings;

// ********** End Class USelectionSetsSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_SelectionSets_SelectionSetsSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
