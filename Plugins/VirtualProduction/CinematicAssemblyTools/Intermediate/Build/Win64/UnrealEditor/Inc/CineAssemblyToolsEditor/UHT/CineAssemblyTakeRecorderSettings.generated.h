// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TakeRecorder/CineAssemblyTakeRecorderSettings.h"

#ifdef CINEASSEMBLYTOOLSEDITOR_CineAssemblyTakeRecorderSettings_generated_h
#error "CineAssemblyTakeRecorderSettings.generated.h already included, missing '#pragma once' in CineAssemblyTakeRecorderSettings.h"
#endif
#define CINEASSEMBLYTOOLSEDITOR_CineAssemblyTakeRecorderSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCineAssemblyTakeRecorderSettings ****************************************
#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyToolsEditor_Private_TakeRecorder_CineAssemblyTakeRecorderSettings_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCanEditAssemblySchema);


struct Z_Construct_UClass_UCineAssemblyTakeRecorderSettings_Statics;
CINEASSEMBLYTOOLSEDITOR_API UClass* Z_Construct_UClass_UCineAssemblyTakeRecorderSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyToolsEditor_Private_TakeRecorder_CineAssemblyTakeRecorderSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCineAssemblyTakeRecorderSettings(); \
	friend struct ::Z_Construct_UClass_UCineAssemblyTakeRecorderSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CINEASSEMBLYTOOLSEDITOR_API UClass* ::Z_Construct_UClass_UCineAssemblyTakeRecorderSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UCineAssemblyTakeRecorderSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CineAssemblyToolsEditor"), Z_Construct_UClass_UCineAssemblyTakeRecorderSettings_NoRegister) \
	DECLARE_SERIALIZER(UCineAssemblyTakeRecorderSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyToolsEditor_Private_TakeRecorder_CineAssemblyTakeRecorderSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCineAssemblyTakeRecorderSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCineAssemblyTakeRecorderSettings(UCineAssemblyTakeRecorderSettings&&) = delete; \
	UCineAssemblyTakeRecorderSettings(const UCineAssemblyTakeRecorderSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCineAssemblyTakeRecorderSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCineAssemblyTakeRecorderSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCineAssemblyTakeRecorderSettings) \
	NO_API virtual ~UCineAssemblyTakeRecorderSettings();


#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyToolsEditor_Private_TakeRecorder_CineAssemblyTakeRecorderSettings_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyToolsEditor_Private_TakeRecorder_CineAssemblyTakeRecorderSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyToolsEditor_Private_TakeRecorder_CineAssemblyTakeRecorderSettings_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyToolsEditor_Private_TakeRecorder_CineAssemblyTakeRecorderSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyToolsEditor_Private_TakeRecorder_CineAssemblyTakeRecorderSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCineAssemblyTakeRecorderSettings;

// ********** End Class UCineAssemblyTakeRecorderSettings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyToolsEditor_Private_TakeRecorder_CineAssemblyTakeRecorderSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
