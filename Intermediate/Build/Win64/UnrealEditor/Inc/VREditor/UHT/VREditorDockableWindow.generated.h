// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/VREditorDockableWindow.h"

#ifdef VREDITOR_VREditorDockableWindow_generated_h
#error "VREditorDockableWindow.generated.h already included, missing '#pragma once' in VREditorDockableWindow.h"
#endif
#define VREDITOR_VREditorDockableWindow_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AVREditorDockableWindow **************************************************
struct Z_Construct_UClass_AVREditorDockableWindow_Statics;
VREDITOR_API UClass* Z_Construct_UClass_AVREditorDockableWindow_NoRegister();

#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableWindow_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVREditorDockableWindow(); \
	friend struct ::Z_Construct_UClass_AVREditorDockableWindow_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VREDITOR_API UClass* ::Z_Construct_UClass_AVREditorDockableWindow_NoRegister(); \
public: \
	DECLARE_CLASS2(AVREditorDockableWindow, AVREditorFloatingUI, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VREditor"), Z_Construct_UClass_AVREditorDockableWindow_NoRegister) \
	DECLARE_SERIALIZER(AVREditorDockableWindow) \
	virtual UObject* _getUObject() const override { return const_cast<AVREditorDockableWindow*>(this); }


#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableWindow_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVREditorDockableWindow(AVREditorDockableWindow&&) = delete; \
	AVREditorDockableWindow(const AVREditorDockableWindow&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVREditorDockableWindow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVREditorDockableWindow); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVREditorDockableWindow) \
	NO_API virtual ~AVREditorDockableWindow();


#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableWindow_h_22_PROLOG
#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableWindow_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableWindow_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableWindow_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVREditorDockableWindow;

// ********** End Class AVREditorDockableWindow ****************************************************

// ********** Begin Class UDockableWindowDragOperation *********************************************
struct Z_Construct_UClass_UDockableWindowDragOperation_Statics;
VREDITOR_API UClass* Z_Construct_UClass_UDockableWindowDragOperation_NoRegister();

#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableWindow_h_154_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDockableWindowDragOperation(); \
	friend struct ::Z_Construct_UClass_UDockableWindowDragOperation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VREDITOR_API UClass* ::Z_Construct_UClass_UDockableWindowDragOperation_NoRegister(); \
public: \
	DECLARE_CLASS2(UDockableWindowDragOperation, UViewportDragOperation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), Z_Construct_UClass_UDockableWindowDragOperation_NoRegister) \
	DECLARE_SERIALIZER(UDockableWindowDragOperation)


#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableWindow_h_154_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDockableWindowDragOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDockableWindowDragOperation(UDockableWindowDragOperation&&) = delete; \
	UDockableWindowDragOperation(const UDockableWindowDragOperation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDockableWindowDragOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDockableWindowDragOperation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDockableWindowDragOperation) \
	NO_API virtual ~UDockableWindowDragOperation();


#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableWindow_h_151_PROLOG
#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableWindow_h_154_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableWindow_h_154_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableWindow_h_154_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDockableWindowDragOperation;

// ********** End Class UDockableWindowDragOperation ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableWindow_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
