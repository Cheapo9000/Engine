// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorUtilityWidget.h"

#ifdef BLUTILITY_EditorUtilityWidget_generated_h
#error "EditorUtilityWidget.generated.h already included, missing '#pragma once' in EditorUtilityWidget.h"
#endif
#define BLUTILITY_EditorUtilityWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;

// ********** Begin Class UEditorUtilityWidget *****************************************************
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindChildWidgetByName);


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_29_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UEditorUtilityWidget_Statics;
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget_NoRegister();

#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorUtilityWidget(); \
	friend struct ::Z_Construct_UClass_UEditorUtilityWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUTILITY_API UClass* ::Z_Construct_UClass_UEditorUtilityWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorUtilityWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blutility"), Z_Construct_UClass_UEditorUtilityWidget_NoRegister) \
	DECLARE_SERIALIZER(UEditorUtilityWidget) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UEditorUtilityWidget*>(this); }


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUTILITY_API UEditorUtilityWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorUtilityWidget(UEditorUtilityWidget&&) = delete; \
	UEditorUtilityWidget(const UEditorUtilityWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, UEditorUtilityWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilityWidget) \
	BLUTILITY_API virtual ~UEditorUtilityWidget();


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_26_PROLOG
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_29_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorUtilityWidget;

// ********** End Class UEditorUtilityWidget *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
