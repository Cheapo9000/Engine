// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Framework/Styling/ProgressWidgetStyle.h"

#ifdef SLATE_ProgressWidgetStyle_generated_h
#error "ProgressWidgetStyle.generated.h already included, missing '#pragma once' in ProgressWidgetStyle.h"
#endif
#define SLATE_ProgressWidgetStyle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UProgressWidgetStyle *****************************************************
struct Z_Construct_UClass_UProgressWidgetStyle_Statics;
SLATE_API UClass* Z_Construct_UClass_UProgressWidgetStyle_NoRegister();

#define FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ProgressWidgetStyle_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProgressWidgetStyle(); \
	friend struct ::Z_Construct_UClass_UProgressWidgetStyle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SLATE_API UClass* ::Z_Construct_UClass_UProgressWidgetStyle_NoRegister(); \
public: \
	DECLARE_CLASS2(UProgressWidgetStyle, USlateWidgetStyleContainerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Slate"), Z_Construct_UClass_UProgressWidgetStyle_NoRegister) \
	DECLARE_SERIALIZER(UProgressWidgetStyle)


#define FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ProgressWidgetStyle_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SLATE_API UProgressWidgetStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProgressWidgetStyle(UProgressWidgetStyle&&) = delete; \
	UProgressWidgetStyle(const UProgressWidgetStyle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLATE_API, UProgressWidgetStyle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProgressWidgetStyle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProgressWidgetStyle) \
	SLATE_API virtual ~UProgressWidgetStyle();


#define FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ProgressWidgetStyle_h_13_PROLOG
#define FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ProgressWidgetStyle_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ProgressWidgetStyle_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ProgressWidgetStyle_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProgressWidgetStyle;

// ********** End Class UProgressWidgetStyle *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ProgressWidgetStyle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
