// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolContexts/ToolStackContext.h"

#ifdef EDITORINTERACTIVETOOLSFRAMEWORK_ToolStackContext_generated_h
#error "ToolStackContext.generated.h already included, missing '#pragma once' in ToolStackContext.h"
#endif
#define EDITORINTERACTIVETOOLSFRAMEWORK_ToolStackContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UToolStackContext ********************************************************
struct Z_Construct_UClass_UToolStackContext_Statics;
EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolStackContext_NoRegister();

#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ToolContexts_ToolStackContext_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolStackContext(); \
	friend struct ::Z_Construct_UClass_UToolStackContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UToolStackContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UToolStackContext, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/EditorInteractiveToolsFramework"), Z_Construct_UClass_UToolStackContext_NoRegister) \
	DECLARE_SERIALIZER(UToolStackContext)


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ToolContexts_ToolStackContext_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EDITORINTERACTIVETOOLSFRAMEWORK_API UToolStackContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UToolStackContext(UToolStackContext&&) = delete; \
	UToolStackContext(const UToolStackContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORINTERACTIVETOOLSFRAMEWORK_API, UToolStackContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolStackContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolStackContext)


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ToolContexts_ToolStackContext_h_29_PROLOG
#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ToolContexts_ToolStackContext_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ToolContexts_ToolStackContext_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ToolContexts_ToolStackContext_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UToolStackContext;

// ********** End Class UToolStackContext **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ToolContexts_ToolStackContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
