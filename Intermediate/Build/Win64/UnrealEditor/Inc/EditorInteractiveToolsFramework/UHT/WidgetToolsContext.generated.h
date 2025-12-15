// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolContexts/WidgetToolsContext.h"

#ifdef EDITORINTERACTIVETOOLSFRAMEWORK_WidgetToolsContext_generated_h
#error "WidgetToolsContext.generated.h already included, missing '#pragma once' in WidgetToolsContext.h"
#endif
#define EDITORINTERACTIVETOOLSFRAMEWORK_WidgetToolsContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWidgetToolsContext ******************************************************
struct Z_Construct_UClass_UWidgetToolsContext_Statics;
EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UWidgetToolsContext_NoRegister();

#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ToolContexts_WidgetToolsContext_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetToolsContext(); \
	friend struct ::Z_Construct_UClass_UWidgetToolsContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UWidgetToolsContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetToolsContext, UModeManagerInteractiveToolsContext, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/EditorInteractiveToolsFramework"), Z_Construct_UClass_UWidgetToolsContext_NoRegister) \
	DECLARE_SERIALIZER(UWidgetToolsContext)


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ToolContexts_WidgetToolsContext_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EDITORINTERACTIVETOOLSFRAMEWORK_API UWidgetToolsContext(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetToolsContext(UWidgetToolsContext&&) = delete; \
	UWidgetToolsContext(const UWidgetToolsContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORINTERACTIVETOOLSFRAMEWORK_API, UWidgetToolsContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetToolsContext); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWidgetToolsContext) \
	EDITORINTERACTIVETOOLSFRAMEWORK_API virtual ~UWidgetToolsContext();


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ToolContexts_WidgetToolsContext_h_32_PROLOG
#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ToolContexts_WidgetToolsContext_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ToolContexts_WidgetToolsContext_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ToolContexts_WidgetToolsContext_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetToolsContext;

// ********** End Class UWidgetToolsContext ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ToolContexts_WidgetToolsContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
