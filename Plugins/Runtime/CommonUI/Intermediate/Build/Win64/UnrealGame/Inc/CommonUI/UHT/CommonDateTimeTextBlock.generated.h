// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonDateTimeTextBlock.h"

#ifdef COMMONUI_CommonDateTimeTextBlock_generated_h
#error "CommonDateTimeTextBlock.generated.h already included, missing '#pragma once' in CommonDateTimeTextBlock.h"
#endif
#define COMMONUI_CommonDateTimeTextBlock_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateTime;
struct FTimespan;

// ********** Begin Class UCommonDateTimeTextBlock *************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDateTime); \
	DECLARE_FUNCTION(execSetCountDownCompletionText); \
	DECLARE_FUNCTION(execSetTimespanValue); \
	DECLARE_FUNCTION(execSetDateTimeValue);


struct Z_Construct_UClass_UCommonDateTimeTextBlock_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonDateTimeTextBlock_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonDateTimeTextBlock(); \
	friend struct ::Z_Construct_UClass_UCommonDateTimeTextBlock_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonDateTimeTextBlock_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonDateTimeTextBlock, UCommonTextBlock, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonDateTimeTextBlock_NoRegister) \
	DECLARE_SERIALIZER(UCommonDateTimeTextBlock)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonDateTimeTextBlock(UCommonDateTimeTextBlock&&) = delete; \
	UCommonDateTimeTextBlock(const UCommonDateTimeTextBlock&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonDateTimeTextBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonDateTimeTextBlock); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonDateTimeTextBlock) \
	COMMONUI_API virtual ~UCommonDateTimeTextBlock();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonDateTimeTextBlock;

// ********** End Class UCommonDateTimeTextBlock ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
