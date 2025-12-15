// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Snapping/EditorSnappingManager.h"

#ifdef EDITORINTERACTIVETOOLSFRAMEWORK_EditorSnappingManager_generated_h
#error "EditorSnappingManager.generated.h already included, missing '#pragma once' in EditorSnappingManager.h"
#endif
#define EDITORINTERACTIVETOOLSFRAMEWORK_EditorSnappingManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorSceneSnappingManager **********************************************
struct Z_Construct_UClass_UEditorSceneSnappingManager_Statics;
EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorSceneSnappingManager_NoRegister();

#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_Snapping_EditorSnappingManager_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorSceneSnappingManager(); \
	friend struct ::Z_Construct_UClass_UEditorSceneSnappingManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UEditorSceneSnappingManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorSceneSnappingManager, USceneSnappingManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorInteractiveToolsFramework"), Z_Construct_UClass_UEditorSceneSnappingManager_NoRegister) \
	DECLARE_SERIALIZER(UEditorSceneSnappingManager)


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_Snapping_EditorSnappingManager_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EDITORINTERACTIVETOOLSFRAMEWORK_API UEditorSceneSnappingManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorSceneSnappingManager(UEditorSceneSnappingManager&&) = delete; \
	UEditorSceneSnappingManager(const UEditorSceneSnappingManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORINTERACTIVETOOLSFRAMEWORK_API, UEditorSceneSnappingManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorSceneSnappingManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorSceneSnappingManager) \
	EDITORINTERACTIVETOOLSFRAMEWORK_API virtual ~UEditorSceneSnappingManager();


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_Snapping_EditorSnappingManager_h_30_PROLOG
#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_Snapping_EditorSnappingManager_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_Snapping_EditorSnappingManager_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_Snapping_EditorSnappingManager_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorSceneSnappingManager;

// ********** End Class UEditorSceneSnappingManager ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_Snapping_EditorSnappingManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
