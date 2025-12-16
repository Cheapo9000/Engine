// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NamingTokensEditableText.h"

#ifdef NAMINGTOKENSUI_NamingTokensEditableText_generated_h
#error "NamingTokensEditableText.generated.h already included, missing '#pragma once' in NamingTokensEditableText.h"
#endif
#define NAMINGTOKENSUI_NamingTokensEditableText_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FSlateColor;
struct FTextBlockStyle;

// ********** Begin Delegate FOnPreEvaluateNamingTokens ********************************************
#define FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokensUI_Public_NamingTokensEditableText_h_22_DELEGATE \
static NAMINGTOKENSUI_API void FOnPreEvaluateNamingTokens_DelegateWrapper(const FMulticastScriptDelegate& OnPreEvaluateNamingTokens);


// ********** End Delegate FOnPreEvaluateNamingTokens **********************************************

// ********** Begin Class UNamingTokensEditableText ************************************************
#define FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokensUI_Public_NamingTokensEditableText_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCanDisplayResolvedText); \
	DECLARE_FUNCTION(execSetCanDisplayResolvedText); \
	DECLARE_FUNCTION(execGetDisplayBorderImage); \
	DECLARE_FUNCTION(execGetDisplayErrorMessage); \
	DECLARE_FUNCTION(execGetDisplayTokenIcon); \
	DECLARE_FUNCTION(execSetDisplayBorderImage); \
	DECLARE_FUNCTION(execSetDisplayErrorMessage); \
	DECLARE_FUNCTION(execSetDisplayTokenIcon); \
	DECLARE_FUNCTION(execSetContexts); \
	DECLARE_FUNCTION(execSetBackgroundColor); \
	DECLARE_FUNCTION(execSetWidgetArgumentStyle); \
	DECLARE_FUNCTION(execGetTokenizedText); \
	DECLARE_FUNCTION(execGetResolvedText);


struct Z_Construct_UClass_UNamingTokensEditableText_Statics;
NAMINGTOKENSUI_API UClass* Z_Construct_UClass_UNamingTokensEditableText_NoRegister();

#define FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokensUI_Public_NamingTokensEditableText_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNamingTokensEditableText(); \
	friend struct ::Z_Construct_UClass_UNamingTokensEditableText_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NAMINGTOKENSUI_API UClass* ::Z_Construct_UClass_UNamingTokensEditableText_NoRegister(); \
public: \
	DECLARE_CLASS2(UNamingTokensEditableText, UMultiLineEditableText, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/NamingTokensUI"), Z_Construct_UClass_UNamingTokensEditableText_NoRegister) \
	DECLARE_SERIALIZER(UNamingTokensEditableText) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("NamingTokens");} \



#define FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokensUI_Public_NamingTokensEditableText_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNamingTokensEditableText(UNamingTokensEditableText&&) = delete; \
	UNamingTokensEditableText(const UNamingTokensEditableText&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAMINGTOKENSUI_API, UNamingTokensEditableText); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNamingTokensEditableText); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNamingTokensEditableText) \
	NAMINGTOKENSUI_API virtual ~UNamingTokensEditableText();


#define FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokensUI_Public_NamingTokensEditableText_h_16_PROLOG
#define FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokensUI_Public_NamingTokensEditableText_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokensUI_Public_NamingTokensEditableText_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokensUI_Public_NamingTokensEditableText_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokensUI_Public_NamingTokensEditableText_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNamingTokensEditableText;

// ********** End Class UNamingTokensEditableText **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokensUI_Public_NamingTokensEditableText_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
