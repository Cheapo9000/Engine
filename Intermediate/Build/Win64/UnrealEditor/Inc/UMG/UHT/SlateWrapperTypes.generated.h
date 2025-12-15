// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SlateWrapperTypes.h"

#ifdef UMG_SlateWrapperTypes_generated_h
#error "SlateWrapperTypes.generated.h already included, missing '#pragma once' in SlateWrapperTypes.h"
#endif
#define UMG_SlateWrapperTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FGetText **************************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_66_DELEGATE \
static UMG_API FText FGetText_DelegateWrapper(const FScriptDelegate& GetText);


// ********** End Delegate FGetText ****************************************************************

// ********** Begin Class USlateAccessibleWidgetData ***********************************************
struct Z_Construct_UClass_USlateAccessibleWidgetData_Statics;
UMG_API UClass* Z_Construct_UClass_USlateAccessibleWidgetData_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlateAccessibleWidgetData(); \
	friend struct ::Z_Construct_UClass_USlateAccessibleWidgetData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_USlateAccessibleWidgetData_NoRegister(); \
public: \
	DECLARE_CLASS2(USlateAccessibleWidgetData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_USlateAccessibleWidgetData_NoRegister) \
	DECLARE_SERIALIZER(USlateAccessibleWidgetData)


#define FID_Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_63_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USlateAccessibleWidgetData(USlateAccessibleWidgetData&&) = delete; \
	USlateAccessibleWidgetData(const USlateAccessibleWidgetData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlateAccessibleWidgetData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateAccessibleWidgetData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USlateAccessibleWidgetData) \
	NO_API virtual ~USlateAccessibleWidgetData();


#define FID_Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_60_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_63_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USlateAccessibleWidgetData;

// ********** End Class USlateAccessibleWidgetData *************************************************

// ********** Begin ScriptStruct FEventReply *******************************************************
struct Z_Construct_UScriptStruct_FEventReply_Statics;
#define FID_Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_130_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEventReply_Statics; \
	UMG_API static class UScriptStruct* StaticStruct();


struct FEventReply;
// ********** End ScriptStruct FEventReply *********************************************************

// ********** Begin ScriptStruct FSlateChildSize ***************************************************
struct Z_Construct_UScriptStruct_FSlateChildSize_Statics;
#define FID_Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_146_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSlateChildSize_Statics; \
	UMG_API static class UScriptStruct* StaticStruct();


struct FSlateChildSize;
// ********** End ScriptStruct FSlateChildSize *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h

// ********** Begin Enum ESlateVisibility **********************************************************
#define FOREACH_ENUM_ESLATEVISIBILITY(op) \
	op(ESlateVisibility::Visible) \
	op(ESlateVisibility::Collapsed) \
	op(ESlateVisibility::Hidden) \
	op(ESlateVisibility::HitTestInvisible) \
	op(ESlateVisibility::SelfHitTestInvisible) 

enum class ESlateVisibility : uint8;
template<> struct TIsUEnumClass<ESlateVisibility> { enum { Value = true }; };
template<> UMG_NON_ATTRIBUTED_API UEnum* StaticEnum<ESlateVisibility>();
// ********** End Enum ESlateVisibility ************************************************************

// ********** Begin Enum ESlateAccessibleBehavior **************************************************
#define FOREACH_ENUM_ESLATEACCESSIBLEBEHAVIOR(op) \
	op(ESlateAccessibleBehavior::NotAccessible) \
	op(ESlateAccessibleBehavior::Auto) \
	op(ESlateAccessibleBehavior::Summary) \
	op(ESlateAccessibleBehavior::Custom) \
	op(ESlateAccessibleBehavior::ToolTip) 

enum class ESlateAccessibleBehavior : uint8;
template<> struct TIsUEnumClass<ESlateAccessibleBehavior> { enum { Value = true }; };
template<> UMG_NON_ATTRIBUTED_API UEnum* StaticEnum<ESlateAccessibleBehavior>();
// ********** End Enum ESlateAccessibleBehavior ****************************************************

// ********** Begin Enum ESlateSizeRule ************************************************************
#define FOREACH_ENUM_ESLATESIZERULE(op) \
	op(ESlateSizeRule::Automatic) \
	op(ESlateSizeRule::Fill) 

namespace ESlateSizeRule { enum Type : int; }
template<> UMG_NON_ATTRIBUTED_API UEnum* StaticEnum<ESlateSizeRule::Type>();
// ********** End Enum ESlateSizeRule **************************************************************

// ********** Begin Enum EVirtualKeyboardType ******************************************************
#define FOREACH_ENUM_EVIRTUALKEYBOARDTYPE(op) \
	op(EVirtualKeyboardType::Default) \
	op(EVirtualKeyboardType::Number) \
	op(EVirtualKeyboardType::Web) \
	op(EVirtualKeyboardType::Email) \
	op(EVirtualKeyboardType::Password) \
	op(EVirtualKeyboardType::AlphaNumeric) 

namespace EVirtualKeyboardType { enum Type : int; }
template<> UMG_NON_ATTRIBUTED_API UEnum* StaticEnum<EVirtualKeyboardType::Type>();
// ********** End Enum EVirtualKeyboardType ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
