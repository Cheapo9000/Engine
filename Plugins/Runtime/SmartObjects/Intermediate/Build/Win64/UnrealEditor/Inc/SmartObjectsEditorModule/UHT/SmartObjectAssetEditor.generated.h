// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmartObjectAssetEditor.h"

#ifdef SMARTOBJECTSEDITORMODULE_SmartObjectAssetEditor_generated_h
#error "SmartObjectAssetEditor.generated.h already included, missing '#pragma once' in SmartObjectAssetEditor.h"
#endif
#define SMARTOBJECTSEDITORMODULE_SmartObjectAssetEditor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USmartObjectAssetEditor **************************************************
struct Z_Construct_UClass_USmartObjectAssetEditor_Statics;
SMARTOBJECTSEDITORMODULE_API UClass* Z_Construct_UClass_USmartObjectAssetEditor_NoRegister();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Public_SmartObjectAssetEditor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmartObjectAssetEditor(); \
	friend struct ::Z_Construct_UClass_USmartObjectAssetEditor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SMARTOBJECTSEDITORMODULE_API UClass* ::Z_Construct_UClass_USmartObjectAssetEditor_NoRegister(); \
public: \
	DECLARE_CLASS2(USmartObjectAssetEditor, UAssetEditor, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SmartObjectsEditorModule"), Z_Construct_UClass_USmartObjectAssetEditor_NoRegister) \
	DECLARE_SERIALIZER(USmartObjectAssetEditor)


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Public_SmartObjectAssetEditor_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USmartObjectAssetEditor(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USmartObjectAssetEditor(USmartObjectAssetEditor&&) = delete; \
	USmartObjectAssetEditor(const USmartObjectAssetEditor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USmartObjectAssetEditor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartObjectAssetEditor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USmartObjectAssetEditor) \
	NO_API virtual ~USmartObjectAssetEditor();


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Public_SmartObjectAssetEditor_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Public_SmartObjectAssetEditor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Public_SmartObjectAssetEditor_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Public_SmartObjectAssetEditor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USmartObjectAssetEditor;

// ********** End Class USmartObjectAssetEditor ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Public_SmartObjectAssetEditor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
