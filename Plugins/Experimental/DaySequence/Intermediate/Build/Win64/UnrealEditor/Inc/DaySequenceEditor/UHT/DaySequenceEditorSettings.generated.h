// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DaySequenceEditorSettings.h"

#ifdef DAYSEQUENCEEDITOR_DaySequenceEditorSettings_generated_h
#error "DaySequenceEditorSettings.generated.h already included, missing '#pragma once' in DaySequenceEditorSettings.h"
#endif
#define DAYSEQUENCEEDITOR_DaySequenceEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDaySequencePropertyTrackSettings *********************************
struct Z_Construct_UScriptStruct_FDaySequencePropertyTrackSettings_Statics;
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequenceEditor_Private_DaySequenceEditorSettings_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDaySequencePropertyTrackSettings_Statics; \
	DAYSEQUENCEEDITOR_API static class UScriptStruct* StaticStruct();


struct FDaySequencePropertyTrackSettings;
// ********** End ScriptStruct FDaySequencePropertyTrackSettings ***********************************

// ********** Begin ScriptStruct FDaySequenceTrackSettings *****************************************
struct Z_Construct_UScriptStruct_FDaySequenceTrackSettings_Statics;
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequenceEditor_Private_DaySequenceEditorSettings_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDaySequenceTrackSettings_Statics; \
	DAYSEQUENCEEDITOR_API static class UScriptStruct* StaticStruct();


struct FDaySequenceTrackSettings;
// ********** End ScriptStruct FDaySequenceTrackSettings *******************************************

// ********** Begin Class UDaySequenceEditorSettings ***********************************************
struct Z_Construct_UClass_UDaySequenceEditorSettings_Statics;
DAYSEQUENCEEDITOR_API UClass* Z_Construct_UClass_UDaySequenceEditorSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequenceEditor_Private_DaySequenceEditorSettings_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDaySequenceEditorSettings(); \
	friend struct ::Z_Construct_UClass_UDaySequenceEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DAYSEQUENCEEDITOR_API UClass* ::Z_Construct_UClass_UDaySequenceEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDaySequenceEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DaySequenceEditor"), Z_Construct_UClass_UDaySequenceEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UDaySequenceEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequenceEditor_Private_DaySequenceEditorSettings_h_59_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDaySequenceEditorSettings(UDaySequenceEditorSettings&&) = delete; \
	UDaySequenceEditorSettings(const UDaySequenceEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDaySequenceEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDaySequenceEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDaySequenceEditorSettings) \
	NO_API virtual ~UDaySequenceEditorSettings();


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequenceEditor_Private_DaySequenceEditorSettings_h_55_PROLOG
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequenceEditor_Private_DaySequenceEditorSettings_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequenceEditor_Private_DaySequenceEditorSettings_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequenceEditor_Private_DaySequenceEditorSettings_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDaySequenceEditorSettings;

// ********** End Class UDaySequenceEditorSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequenceEditor_Private_DaySequenceEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
