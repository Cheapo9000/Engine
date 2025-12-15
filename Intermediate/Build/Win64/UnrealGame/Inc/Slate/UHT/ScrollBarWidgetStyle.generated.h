// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Framework/Styling/ScrollBarWidgetStyle.h"

#ifdef SLATE_ScrollBarWidgetStyle_generated_h
#error "ScrollBarWidgetStyle.generated.h already included, missing '#pragma once' in ScrollBarWidgetStyle.h"
#endif
#define SLATE_ScrollBarWidgetStyle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UScrollBarWidgetStyle ****************************************************
struct Z_Construct_UClass_UScrollBarWidgetStyle_Statics;
SLATE_API UClass* Z_Construct_UClass_UScrollBarWidgetStyle_NoRegister();

#define FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ScrollBarWidgetStyle_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScrollBarWidgetStyle(); \
	friend struct ::Z_Construct_UClass_UScrollBarWidgetStyle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SLATE_API UClass* ::Z_Construct_UClass_UScrollBarWidgetStyle_NoRegister(); \
public: \
	DECLARE_CLASS2(UScrollBarWidgetStyle, USlateWidgetStyleContainerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Slate"), Z_Construct_UClass_UScrollBarWidgetStyle_NoRegister) \
	DECLARE_SERIALIZER(UScrollBarWidgetStyle)


#define FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ScrollBarWidgetStyle_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SLATE_API UScrollBarWidgetStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScrollBarWidgetStyle(UScrollBarWidgetStyle&&) = delete; \
	UScrollBarWidgetStyle(const UScrollBarWidgetStyle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLATE_API, UScrollBarWidgetStyle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScrollBarWidgetStyle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScrollBarWidgetStyle) \
	SLATE_API virtual ~UScrollBarWidgetStyle();


#define FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ScrollBarWidgetStyle_h_13_PROLOG
#define FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ScrollBarWidgetStyle_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ScrollBarWidgetStyle_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ScrollBarWidgetStyle_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScrollBarWidgetStyle;

// ********** End Class UScrollBarWidgetStyle ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ScrollBarWidgetStyle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
