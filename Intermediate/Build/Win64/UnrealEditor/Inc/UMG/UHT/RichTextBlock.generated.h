// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/RichTextBlock.h"

#ifdef UMG_RichTextBlock_generated_h
#error "RichTextBlock.generated.h already included, missing '#pragma once' in RichTextBlock.h"
#endif
#define UMG_RichTextBlock_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UDataTable;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class URichTextBlockDecorator;
enum class ETextOverflowPolicy : uint8;
enum class ETextTransformPolicy : uint8;
struct FLinearColor;
struct FSlateBrush;
struct FSlateColor;
struct FSlateFontInfo;
struct FTextBlockStyle;

// ********** Begin ScriptStruct FRichTextStyleRow *************************************************
struct Z_Construct_UScriptStruct_FRichTextStyleRow_Statics;
#define FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRichTextStyleRow_Statics; \
	UMG_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FRichTextStyleRow;
// ********** End ScriptStruct FRichTextStyleRow ***************************************************

// ********** Begin Class URichTextBlock ***********************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRefreshTextLayout); \
	DECLARE_FUNCTION(execGetDecoratorByClass); \
	DECLARE_FUNCTION(execSetTextStyleSet); \
	DECLARE_FUNCTION(execGetTextStyleSet); \
	DECLARE_FUNCTION(execSetText); \
	DECLARE_FUNCTION(execGetText); \
	DECLARE_FUNCTION(execSetDecorators); \
	DECLARE_FUNCTION(execGetDefaultDynamicMaterial); \
	DECLARE_FUNCTION(execClearAllDefaultStyleOverrides); \
	DECLARE_FUNCTION(execSetDefaultMaterial); \
	DECLARE_FUNCTION(execSetDefaultTextStyle); \
	DECLARE_FUNCTION(execSetTextOverflowPolicy); \
	DECLARE_FUNCTION(execSetTextTransformPolicy); \
	DECLARE_FUNCTION(execSetAutoWrapText); \
	DECLARE_FUNCTION(execSetMinDesiredWidth); \
	DECLARE_FUNCTION(execSetDefaultStrikeBrush); \
	DECLARE_FUNCTION(execSetDefaultFont); \
	DECLARE_FUNCTION(execSetDefaultShadowOffset); \
	DECLARE_FUNCTION(execSetDefaultShadowColorAndOpacity); \
	DECLARE_FUNCTION(execSetDefaultColorAndOpacity);


#define FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_41_ACCESSORS \
static void GetText_WrapperImpl(const void* Object, void* OutValue); \
static void SetText_WrapperImpl(void* Object, const void* InValue); \
static void GetTextStyleSet_WrapperImpl(const void* Object, void* OutValue); \
static void SetTextStyleSet_WrapperImpl(void* Object, const void* InValue); \
static void GetDefaultTextStyleOverride_WrapperImpl(const void* Object, void* OutValue); \
static void SetDefaultTextStyleOverride_WrapperImpl(void* Object, const void* InValue); \
static void GetMinDesiredWidth_WrapperImpl(const void* Object, void* OutValue); \
static void SetMinDesiredWidth_WrapperImpl(void* Object, const void* InValue); \
static void GetTextTransformPolicy_WrapperImpl(const void* Object, void* OutValue); \
static void SetTextTransformPolicy_WrapperImpl(void* Object, const void* InValue); \
static void GetTextOverflowPolicy_WrapperImpl(const void* Object, void* OutValue); \
static void SetTextOverflowPolicy_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_URichTextBlock_Statics;
UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURichTextBlock(); \
	friend struct ::Z_Construct_UClass_URichTextBlock_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_URichTextBlock_NoRegister(); \
public: \
	DECLARE_CLASS2(URichTextBlock, UTextLayoutWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_URichTextBlock_NoRegister) \
	DECLARE_SERIALIZER(URichTextBlock)


#define FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URichTextBlock(URichTextBlock&&) = delete; \
	URichTextBlock(const URichTextBlock&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, URichTextBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URichTextBlock); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URichTextBlock) \
	UMG_API virtual ~URichTextBlock();


#define FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_41_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URichTextBlock;

// ********** End Class URichTextBlock *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
