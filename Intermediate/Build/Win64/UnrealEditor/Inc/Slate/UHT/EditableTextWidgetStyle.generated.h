// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Framework/Styling/EditableTextWidgetStyle.h"

#ifdef SLATE_EditableTextWidgetStyle_generated_h
#error "EditableTextWidgetStyle.generated.h already included, missing '#pragma once' in EditableTextWidgetStyle.h"
#endif
#define SLATE_EditableTextWidgetStyle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditableTextWidgetStyle *************************************************
struct Z_Construct_UClass_UEditableTextWidgetStyle_Statics;
SLATE_API UClass* Z_Construct_UClass_UEditableTextWidgetStyle_NoRegister();

#define FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_EditableTextWidgetStyle_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableTextWidgetStyle(); \
	friend struct ::Z_Construct_UClass_UEditableTextWidgetStyle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SLATE_API UClass* ::Z_Construct_UClass_UEditableTextWidgetStyle_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditableTextWidgetStyle, USlateWidgetStyleContainerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Slate"), Z_Construct_UClass_UEditableTextWidgetStyle_NoRegister) \
	DECLARE_SERIALIZER(UEditableTextWidgetStyle)


#define FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_EditableTextWidgetStyle_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SLATE_API UEditableTextWidgetStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditableTextWidgetStyle(UEditableTextWidgetStyle&&) = delete; \
	UEditableTextWidgetStyle(const UEditableTextWidgetStyle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLATE_API, UEditableTextWidgetStyle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableTextWidgetStyle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableTextWidgetStyle) \
	SLATE_API virtual ~UEditableTextWidgetStyle();


#define FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_EditableTextWidgetStyle_h_13_PROLOG
#define FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_EditableTextWidgetStyle_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_EditableTextWidgetStyle_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_EditableTextWidgetStyle_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditableTextWidgetStyle;

// ********** End Class UEditableTextWidgetStyle ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_EditableTextWidgetStyle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
