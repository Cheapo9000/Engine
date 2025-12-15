// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Framework/Styling/ButtonWidgetStyle.h"

#ifdef SLATE_ButtonWidgetStyle_generated_h
#error "ButtonWidgetStyle.generated.h already included, missing '#pragma once' in ButtonWidgetStyle.h"
#endif
#define SLATE_ButtonWidgetStyle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UButtonWidgetStyle *******************************************************
struct Z_Construct_UClass_UButtonWidgetStyle_Statics;
SLATE_API UClass* Z_Construct_UClass_UButtonWidgetStyle_NoRegister();

#define FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ButtonWidgetStyle_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUButtonWidgetStyle(); \
	friend struct ::Z_Construct_UClass_UButtonWidgetStyle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SLATE_API UClass* ::Z_Construct_UClass_UButtonWidgetStyle_NoRegister(); \
public: \
	DECLARE_CLASS2(UButtonWidgetStyle, USlateWidgetStyleContainerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Slate"), Z_Construct_UClass_UButtonWidgetStyle_NoRegister) \
	DECLARE_SERIALIZER(UButtonWidgetStyle)


#define FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ButtonWidgetStyle_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SLATE_API UButtonWidgetStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UButtonWidgetStyle(UButtonWidgetStyle&&) = delete; \
	UButtonWidgetStyle(const UButtonWidgetStyle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLATE_API, UButtonWidgetStyle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UButtonWidgetStyle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UButtonWidgetStyle) \
	SLATE_API virtual ~UButtonWidgetStyle();


#define FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ButtonWidgetStyle_h_13_PROLOG
#define FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ButtonWidgetStyle_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ButtonWidgetStyle_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ButtonWidgetStyle_h_17_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UButtonWidgetStyle;

// ********** End Class UButtonWidgetStyle *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ButtonWidgetStyle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
