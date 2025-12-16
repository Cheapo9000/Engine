// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SwitchboardEditorSettings.h"

#ifdef SWITCHBOARDEDITOR_SwitchboardEditorSettings_generated_h
#error "SwitchboardEditorSettings.generated.h already included, missing '#pragma once' in SwitchboardEditorSettings.h"
#endif
#define SWITCHBOARDEDITOR_SwitchboardEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USwitchboardEditorSettings;

// ********** Begin Class USwitchboardEditorSettings ***********************************************
#define FID_Engine_Plugins_VirtualProduction_Switchboard_Source_SwitchboardEditor_Public_SwitchboardEditorSettings_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSwitchboardEditorSettings);


struct Z_Construct_UClass_USwitchboardEditorSettings_Statics;
SWITCHBOARDEDITOR_API UClass* Z_Construct_UClass_USwitchboardEditorSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Switchboard_Source_SwitchboardEditor_Public_SwitchboardEditorSettings_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSwitchboardEditorSettings(); \
	friend struct ::Z_Construct_UClass_USwitchboardEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SWITCHBOARDEDITOR_API UClass* ::Z_Construct_UClass_USwitchboardEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USwitchboardEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SwitchboardEditor"), Z_Construct_UClass_USwitchboardEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(USwitchboardEditorSettings)


#define FID_Engine_Plugins_VirtualProduction_Switchboard_Source_SwitchboardEditor_Public_SwitchboardEditorSettings_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USwitchboardEditorSettings(USwitchboardEditorSettings&&) = delete; \
	USwitchboardEditorSettings(const USwitchboardEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USwitchboardEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USwitchboardEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USwitchboardEditorSettings) \
	NO_API virtual ~USwitchboardEditorSettings();


#define FID_Engine_Plugins_VirtualProduction_Switchboard_Source_SwitchboardEditor_Public_SwitchboardEditorSettings_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Switchboard_Source_SwitchboardEditor_Public_SwitchboardEditorSettings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Switchboard_Source_SwitchboardEditor_Public_SwitchboardEditorSettings_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Switchboard_Source_SwitchboardEditor_Public_SwitchboardEditorSettings_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Switchboard_Source_SwitchboardEditor_Public_SwitchboardEditorSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USwitchboardEditorSettings;

// ********** End Class USwitchboardEditorSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Switchboard_Source_SwitchboardEditor_Public_SwitchboardEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
