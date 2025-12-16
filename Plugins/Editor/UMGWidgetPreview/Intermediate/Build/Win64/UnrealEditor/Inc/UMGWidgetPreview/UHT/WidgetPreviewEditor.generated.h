// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WidgetPreviewEditor.h"

#ifdef UMGWIDGETPREVIEW_WidgetPreviewEditor_generated_h
#error "WidgetPreviewEditor.generated.h already included, missing '#pragma once' in WidgetPreviewEditor.h"
#endif
#define UMGWIDGETPREVIEW_WidgetPreviewEditor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWidgetPreviewEditor *****************************************************
struct Z_Construct_UClass_UWidgetPreviewEditor_Statics;
UMGWIDGETPREVIEW_API UClass* Z_Construct_UClass_UWidgetPreviewEditor_NoRegister();

#define FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Private_WidgetPreviewEditor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetPreviewEditor(); \
	friend struct ::Z_Construct_UClass_UWidgetPreviewEditor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMGWIDGETPREVIEW_API UClass* ::Z_Construct_UClass_UWidgetPreviewEditor_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetPreviewEditor, UAssetEditor, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UMGWidgetPreview"), Z_Construct_UClass_UWidgetPreviewEditor_NoRegister) \
	DECLARE_SERIALIZER(UWidgetPreviewEditor)


#define FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Private_WidgetPreviewEditor_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetPreviewEditor(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetPreviewEditor(UWidgetPreviewEditor&&) = delete; \
	UWidgetPreviewEditor(const UWidgetPreviewEditor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetPreviewEditor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetPreviewEditor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWidgetPreviewEditor) \
	NO_API virtual ~UWidgetPreviewEditor();


#define FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Private_WidgetPreviewEditor_h_16_PROLOG
#define FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Private_WidgetPreviewEditor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Private_WidgetPreviewEditor_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Private_WidgetPreviewEditor_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetPreviewEditor;

// ********** End Class UWidgetPreviewEditor *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Private_WidgetPreviewEditor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
