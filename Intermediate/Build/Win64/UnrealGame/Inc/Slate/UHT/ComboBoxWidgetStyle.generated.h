// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Framework/Styling/ComboBoxWidgetStyle.h"

#ifdef SLATE_ComboBoxWidgetStyle_generated_h
#error "ComboBoxWidgetStyle.generated.h already included, missing '#pragma once' in ComboBoxWidgetStyle.h"
#endif
#define SLATE_ComboBoxWidgetStyle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UComboBoxWidgetStyle *****************************************************
struct Z_Construct_UClass_UComboBoxWidgetStyle_Statics;
SLATE_API UClass* Z_Construct_UClass_UComboBoxWidgetStyle_NoRegister();

#define FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ComboBoxWidgetStyle_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComboBoxWidgetStyle(); \
	friend struct ::Z_Construct_UClass_UComboBoxWidgetStyle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SLATE_API UClass* ::Z_Construct_UClass_UComboBoxWidgetStyle_NoRegister(); \
public: \
	DECLARE_CLASS2(UComboBoxWidgetStyle, USlateWidgetStyleContainerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Slate"), Z_Construct_UClass_UComboBoxWidgetStyle_NoRegister) \
	DECLARE_SERIALIZER(UComboBoxWidgetStyle)


#define FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ComboBoxWidgetStyle_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SLATE_API UComboBoxWidgetStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComboBoxWidgetStyle(UComboBoxWidgetStyle&&) = delete; \
	UComboBoxWidgetStyle(const UComboBoxWidgetStyle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLATE_API, UComboBoxWidgetStyle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboBoxWidgetStyle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComboBoxWidgetStyle) \
	SLATE_API virtual ~UComboBoxWidgetStyle();


#define FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ComboBoxWidgetStyle_h_13_PROLOG
#define FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ComboBoxWidgetStyle_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ComboBoxWidgetStyle_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ComboBoxWidgetStyle_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComboBoxWidgetStyle;

// ********** End Class UComboBoxWidgetStyle *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ComboBoxWidgetStyle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
