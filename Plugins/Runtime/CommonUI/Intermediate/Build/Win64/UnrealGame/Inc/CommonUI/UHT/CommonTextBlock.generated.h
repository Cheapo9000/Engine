// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonTextBlock.h"

#ifdef COMMONUI_CommonTextBlock_generated_h
#error "CommonTextBlock.generated.h already included, missing '#pragma once' in CommonTextBlock.h"
#endif
#define COMMONUI_CommonTextBlock_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UCommonTextStyle;
struct FLinearColor;
struct FMargin;
struct FSlateBrush;
struct FSlateFontInfo;

// ********** Begin Class UCommonTextStyle *********************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStrikeBrush); \
	DECLARE_FUNCTION(execGetShadowColor); \
	DECLARE_FUNCTION(execGetShadowOffset); \
	DECLARE_FUNCTION(execGetApplyLineHeightToBottomLine); \
	DECLARE_FUNCTION(execGetLineHeightPercentage); \
	DECLARE_FUNCTION(execGetMargin); \
	DECLARE_FUNCTION(execGetColor); \
	DECLARE_FUNCTION(execGetFont);


struct Z_Construct_UClass_UCommonTextStyle_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonTextStyle_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonTextStyle(); \
	friend struct ::Z_Construct_UClass_UCommonTextStyle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonTextStyle_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonTextStyle, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonTextStyle_NoRegister) \
	DECLARE_SERIALIZER(UCommonTextStyle)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonTextStyle(UCommonTextStyle&&) = delete; \
	UCommonTextStyle(const UCommonTextStyle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonTextStyle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonTextStyle); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCommonTextStyle) \
	COMMONUI_API virtual ~UCommonTextStyle();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonTextStyle;

// ********** End Class UCommonTextStyle ***********************************************************

// ********** Begin Class UCommonTextScrollStyle ***************************************************
struct Z_Construct_UClass_UCommonTextScrollStyle_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonTextScrollStyle_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonTextScrollStyle(); \
	friend struct ::Z_Construct_UClass_UCommonTextScrollStyle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonTextScrollStyle_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonTextScrollStyle, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonTextScrollStyle_NoRegister) \
	DECLARE_SERIALIZER(UCommonTextScrollStyle)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonTextScrollStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonTextScrollStyle(UCommonTextScrollStyle&&) = delete; \
	UCommonTextScrollStyle(const UCommonTextScrollStyle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonTextScrollStyle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonTextScrollStyle); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonTextScrollStyle) \
	COMMONUI_API virtual ~UCommonTextScrollStyle();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_98_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_101_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonTextScrollStyle;

// ********** End Class UCommonTextScrollStyle *****************************************************

// ********** Begin Class UCommonTextBlock *********************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_131_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetScrollingEnabled); \
	DECLARE_FUNCTION(execResetScrollState); \
	DECLARE_FUNCTION(execSetMobileFontSizeMultiplier); \
	DECLARE_FUNCTION(execGetMobileFontSizeMultiplier); \
	DECLARE_FUNCTION(execSetMargin); \
	DECLARE_FUNCTION(execGetMargin); \
	DECLARE_FUNCTION(execSetScrollOrientation); \
	DECLARE_FUNCTION(execSetStyle); \
	DECLARE_FUNCTION(execSetApplyLineHeightToBottomLine); \
	DECLARE_FUNCTION(execSetLineHeightPercentage); \
	DECLARE_FUNCTION(execSetTextCase); \
	DECLARE_FUNCTION(execSetWrapTextWidth);


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_131_ACCESSORS \
static void GetMobileFontSizeMultiplier_WrapperImpl(const void* Object, void* OutValue); \
static void SetMobileFontSizeMultiplier_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_131_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCommonTextBlock, COMMONUI_API)


struct Z_Construct_UClass_UCommonTextBlock_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_131_INCLASS \
private: \
	static void StaticRegisterNativesUCommonTextBlock(); \
	friend struct ::Z_Construct_UClass_UCommonTextBlock_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonTextBlock_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonTextBlock, UTextBlock, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonTextBlock_NoRegister) \
	DECLARE_SERIALIZER(UCommonTextBlock) \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_131_ARCHIVESERIALIZER \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("CommonUI");} \



#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_131_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonTextBlock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonTextBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonTextBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonTextBlock); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonTextBlock(UCommonTextBlock&&) = delete; \
	UCommonTextBlock(const UCommonTextBlock&) = delete; \
	COMMONUI_API virtual ~UCommonTextBlock();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_128_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_131_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_131_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_131_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_131_INCLASS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_131_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonTextBlock;

// ********** End Class UCommonTextBlock ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
