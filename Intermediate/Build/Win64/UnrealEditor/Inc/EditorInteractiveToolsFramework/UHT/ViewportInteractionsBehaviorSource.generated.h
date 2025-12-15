// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewportInteractions/ViewportInteractionsBehaviorSource.h"

#ifdef EDITORINTERACTIVETOOLSFRAMEWORK_ViewportInteractionsBehaviorSource_generated_h
#error "ViewportInteractionsBehaviorSource.generated.h already included, missing '#pragma once' in ViewportInteractionsBehaviorSource.h"
#endif
#define EDITORINTERACTIVETOOLSFRAMEWORK_ViewportInteractionsBehaviorSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UViewportInteractionsBehaviorSource **************************************
struct Z_Construct_UClass_UViewportInteractionsBehaviorSource_Statics;
EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UViewportInteractionsBehaviorSource_NoRegister();

#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportInteractionsBehaviorSource_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewportInteractionsBehaviorSource(); \
	friend struct ::Z_Construct_UClass_UViewportInteractionsBehaviorSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UViewportInteractionsBehaviorSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UViewportInteractionsBehaviorSource, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/EditorInteractiveToolsFramework"), Z_Construct_UClass_UViewportInteractionsBehaviorSource_NoRegister) \
	DECLARE_SERIALIZER(UViewportInteractionsBehaviorSource) \
	virtual UObject* _getUObject() const override { return const_cast<UViewportInteractionsBehaviorSource*>(this); }


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportInteractionsBehaviorSource_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EDITORINTERACTIVETOOLSFRAMEWORK_API UViewportInteractionsBehaviorSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UViewportInteractionsBehaviorSource(UViewportInteractionsBehaviorSource&&) = delete; \
	UViewportInteractionsBehaviorSource(const UViewportInteractionsBehaviorSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORINTERACTIVETOOLSFRAMEWORK_API, UViewportInteractionsBehaviorSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportInteractionsBehaviorSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewportInteractionsBehaviorSource) \
	EDITORINTERACTIVETOOLSFRAMEWORK_API virtual ~UViewportInteractionsBehaviorSource();


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportInteractionsBehaviorSource_h_64_PROLOG
#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportInteractionsBehaviorSource_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportInteractionsBehaviorSource_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportInteractionsBehaviorSource_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UViewportInteractionsBehaviorSource;

// ********** End Class UViewportInteractionsBehaviorSource ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportInteractionsBehaviorSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
