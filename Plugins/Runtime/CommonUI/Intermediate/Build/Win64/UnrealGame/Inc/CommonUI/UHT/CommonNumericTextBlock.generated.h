// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonNumericTextBlock.h"

#ifdef COMMONUI_CommonNumericTextBlock_generated_h
#error "CommonNumericTextBlock.generated.h already included, missing '#pragma once' in CommonNumericTextBlock.h"
#endif
#define COMMONUI_CommonNumericTextBlock_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonNumericTextBlock;
enum class ECommonNumericType : uint8;

// ********** Begin ScriptStruct FCommonNumberFormattingOptions ************************************
struct Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics;
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics; \
	COMMONUI_API static class UScriptStruct* StaticStruct();


struct FCommonNumberFormattingOptions;
// ********** End ScriptStruct FCommonNumberFormattingOptions **************************************

// ********** Begin Delegate FOnInterpolationStarted ***********************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_110_DELEGATE \
static COMMONUI_API void FOnInterpolationStarted_DelegateWrapper(const FMulticastScriptDelegate& OnInterpolationStarted, UCommonNumericTextBlock* NumericTextBlock);


// ********** End Delegate FOnInterpolationStarted *************************************************

// ********** Begin Delegate FOnInterpolationUpdated ***********************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_115_DELEGATE \
static COMMONUI_API void FOnInterpolationUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnInterpolationUpdated, UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue);


// ********** End Delegate FOnInterpolationUpdated *************************************************

// ********** Begin Delegate FOnOutro **************************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_120_DELEGATE \
static COMMONUI_API void FOnOutro_DelegateWrapper(const FMulticastScriptDelegate& OnOutro, UCommonNumericTextBlock* NumericTextBlock);


// ********** End Delegate FOnOutro ****************************************************************

// ********** Begin Delegate FOnInterpolationEnded *************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_125_DELEGATE \
static COMMONUI_API void FOnInterpolationEnded_DelegateWrapper(const FMulticastScriptDelegate& OnInterpolationEnded, UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);


// ********** End Delegate FOnInterpolationEnded ***************************************************

// ********** Begin Class UCommonNumericTextBlock **************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetNumericType); \
	DECLARE_FUNCTION(execIsInterpolatingNumericValue); \
	DECLARE_FUNCTION(execInterpolateToValue); \
	DECLARE_FUNCTION(execSetCurrentValue); \
	DECLARE_FUNCTION(execGetTargetValue);


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_69_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCommonNumericTextBlock, COMMONUI_API)


struct Z_Construct_UClass_UCommonNumericTextBlock_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonNumericTextBlock_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonNumericTextBlock(); \
	friend struct ::Z_Construct_UClass_UCommonNumericTextBlock_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonNumericTextBlock_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonNumericTextBlock, UCommonTextBlock, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonNumericTextBlock_NoRegister) \
	DECLARE_SERIALIZER(UCommonNumericTextBlock) \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_69_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_69_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonNumericTextBlock(UCommonNumericTextBlock&&) = delete; \
	UCommonNumericTextBlock(const UCommonNumericTextBlock&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonNumericTextBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonNumericTextBlock); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonNumericTextBlock) \
	COMMONUI_API virtual ~UCommonNumericTextBlock();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_66_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonNumericTextBlock;

// ********** End Class UCommonNumericTextBlock ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h

// ********** Begin Enum ECommonNumericType ********************************************************
#define FOREACH_ENUM_ECOMMONNUMERICTYPE(op) \
	op(ECommonNumericType::Number) \
	op(ECommonNumericType::Percentage) \
	op(ECommonNumericType::Seconds) \
	op(ECommonNumericType::Distance) 

enum class ECommonNumericType : uint8;
template<> struct TIsUEnumClass<ECommonNumericType> { enum { Value = true }; };
template<> COMMONUI_NON_ATTRIBUTED_API UEnum* StaticEnum<ECommonNumericType>();
// ********** End Enum ECommonNumericType **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
