// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SinglePropertyView.h"

#ifdef SCRIPTABLEEDITORWIDGETS_SinglePropertyView_generated_h
#error "SinglePropertyView.generated.h already included, missing '#pragma once' in SinglePropertyView.h"
#endif
#define SCRIPTABLEEDITORWIDGETS_SinglePropertyView_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USinglePropertyView ******************************************************
#define FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_SinglePropertyView_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetNameOverride); \
	DECLARE_FUNCTION(execGetNameOverride); \
	DECLARE_FUNCTION(execSetPropertyName); \
	DECLARE_FUNCTION(execGetPropertyName);


struct Z_Construct_UClass_USinglePropertyView_Statics;
SCRIPTABLEEDITORWIDGETS_API UClass* Z_Construct_UClass_USinglePropertyView_NoRegister();

#define FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_SinglePropertyView_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSinglePropertyView(); \
	friend struct ::Z_Construct_UClass_USinglePropertyView_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTABLEEDITORWIDGETS_API UClass* ::Z_Construct_UClass_USinglePropertyView_NoRegister(); \
public: \
	DECLARE_CLASS2(USinglePropertyView, UPropertyViewBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScriptableEditorWidgets"), Z_Construct_UClass_USinglePropertyView_NoRegister) \
	DECLARE_SERIALIZER(USinglePropertyView)


#define FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_SinglePropertyView_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTABLEEDITORWIDGETS_API USinglePropertyView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USinglePropertyView(USinglePropertyView&&) = delete; \
	USinglePropertyView(const USinglePropertyView&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTABLEEDITORWIDGETS_API, USinglePropertyView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USinglePropertyView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USinglePropertyView) \
	SCRIPTABLEEDITORWIDGETS_API virtual ~USinglePropertyView();


#define FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_SinglePropertyView_h_23_PROLOG
#define FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_SinglePropertyView_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_SinglePropertyView_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_SinglePropertyView_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_SinglePropertyView_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USinglePropertyView;

// ********** End Class USinglePropertyView ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_SinglePropertyView_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
