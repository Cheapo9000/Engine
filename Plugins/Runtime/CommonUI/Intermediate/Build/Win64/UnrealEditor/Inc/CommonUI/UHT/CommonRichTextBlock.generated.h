// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonRichTextBlock.h"

#ifdef COMMONUI_CommonRichTextBlock_generated_h
#error "CommonRichTextBlock.generated.h already included, missing '#pragma once' in CommonRichTextBlock.h"
#endif
#define COMMONUI_CommonRichTextBlock_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UCommonTextStyle;

// ********** Begin Class UCommonRichTextBlock *****************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonRichTextBlock_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetScrollingEnabled); \
	DECLARE_FUNCTION(execSetStyle);


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonRichTextBlock_h_37_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCommonRichTextBlock, COMMONUI_API)


struct Z_Construct_UClass_UCommonRichTextBlock_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonRichTextBlock_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonRichTextBlock_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonRichTextBlock(); \
	friend struct ::Z_Construct_UClass_UCommonRichTextBlock_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonRichTextBlock_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonRichTextBlock, URichTextBlock, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonRichTextBlock_NoRegister) \
	DECLARE_SERIALIZER(UCommonRichTextBlock) \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonRichTextBlock_h_37_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonRichTextBlock_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonRichTextBlock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonRichTextBlock(UCommonRichTextBlock&&) = delete; \
	UCommonRichTextBlock(const UCommonRichTextBlock&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonRichTextBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonRichTextBlock); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonRichTextBlock) \
	COMMONUI_API virtual ~UCommonRichTextBlock();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonRichTextBlock_h_34_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonRichTextBlock_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonRichTextBlock_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonRichTextBlock_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonRichTextBlock_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonRichTextBlock;

// ********** End Class UCommonRichTextBlock *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonRichTextBlock_h

// ********** Begin Enum ERichTextInlineIconDisplayMode ********************************************
#define FOREACH_ENUM_ERICHTEXTINLINEICONDISPLAYMODE(op) \
	op(ERichTextInlineIconDisplayMode::IconOnly) \
	op(ERichTextInlineIconDisplayMode::TextOnly) \
	op(ERichTextInlineIconDisplayMode::IconAndText) 

enum class ERichTextInlineIconDisplayMode : uint8;
template<> struct TIsUEnumClass<ERichTextInlineIconDisplayMode> { enum { Value = true }; };
template<> COMMONUI_NON_ATTRIBUTED_API UEnum* StaticEnum<ERichTextInlineIconDisplayMode>();
// ********** End Enum ERichTextInlineIconDisplayMode **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
