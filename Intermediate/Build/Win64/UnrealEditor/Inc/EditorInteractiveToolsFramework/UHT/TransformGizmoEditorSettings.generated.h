// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TransformGizmoEditorSettings.h"

#ifdef EDITORINTERACTIVETOOLSFRAMEWORK_TransformGizmoEditorSettings_generated_h
#error "TransformGizmoEditorSettings.generated.h already included, missing '#pragma once' in TransformGizmoEditorSettings.h"
#endif
#define EDITORINTERACTIVETOOLSFRAMEWORK_TransformGizmoEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTransformGizmoEditorSettings ********************************************
struct Z_Construct_UClass_UTransformGizmoEditorSettings_Statics;
EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformGizmoEditorSettings_NoRegister();

#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_TransformGizmoEditorSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransformGizmoEditorSettings(); \
	friend struct ::Z_Construct_UClass_UTransformGizmoEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UTransformGizmoEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UTransformGizmoEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EditorInteractiveToolsFramework"), Z_Construct_UClass_UTransformGizmoEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UTransformGizmoEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_TransformGizmoEditorSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTransformGizmoEditorSettings(UTransformGizmoEditorSettings&&) = delete; \
	UTransformGizmoEditorSettings(const UTransformGizmoEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORINTERACTIVETOOLSFRAMEWORK_API, UTransformGizmoEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransformGizmoEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransformGizmoEditorSettings) \
	EDITORINTERACTIVETOOLSFRAMEWORK_API virtual ~UTransformGizmoEditorSettings();


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_TransformGizmoEditorSettings_h_12_PROLOG
#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_TransformGizmoEditorSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_TransformGizmoEditorSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_TransformGizmoEditorSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTransformGizmoEditorSettings;

// ********** End Class UTransformGizmoEditorSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_TransformGizmoEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
