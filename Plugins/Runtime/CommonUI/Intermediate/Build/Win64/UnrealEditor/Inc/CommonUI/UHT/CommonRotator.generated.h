// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonRotator.h"

#ifdef COMMONUI_CommonRotator_generated_h
#error "CommonRotator.generated.h already included, missing '#pragma once' in CommonRotator.h"
#endif
#define COMMONUI_CommonRotator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ERotatorDirection : uint8;

// ********** Begin Delegate FOnRotated ************************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonRotator_h_22_DELEGATE \
COMMONUI_API void FOnRotated_DelegateWrapper(const FMulticastScriptDelegate& OnRotated, int32 Value);


// ********** End Delegate FOnRotated **************************************************************

// ********** Begin Delegate FOnRotatedWithDirection ***********************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonRotator_h_23_DELEGATE \
COMMONUI_API void FOnRotatedWithDirection_DelegateWrapper(const FMulticastScriptDelegate& OnRotatedWithDirection, int32 Value, ERotatorDirection RotatorDir);


// ********** End Delegate FOnRotatedWithDirection *************************************************

// ********** Begin Class UCommonRotator ***********************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonRotator_h_31_RPC_WRAPPERS \
	DECLARE_FUNCTION(execShiftTextRight); \
	DECLARE_FUNCTION(execShiftTextLeft); \
	DECLARE_FUNCTION(execGetSelectedIndex); \
	DECLARE_FUNCTION(execSetSelectedItem); \
	DECLARE_FUNCTION(execGetSelectedText); \
	DECLARE_FUNCTION(execPopulateTextLabels);


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonRotator_h_31_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UCommonRotator_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonRotator_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonRotator_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUCommonRotator(); \
	friend struct ::Z_Construct_UClass_UCommonRotator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonRotator_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonRotator, UCommonButtonBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonRotator_NoRegister) \
	DECLARE_SERIALIZER(UCommonRotator)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonRotator_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonRotator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonRotator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonRotator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonRotator); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonRotator(UCommonRotator&&) = delete; \
	UCommonRotator(const UCommonRotator&) = delete; \
	COMMONUI_API virtual ~UCommonRotator();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonRotator_h_28_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonRotator_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonRotator_h_31_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonRotator_h_31_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonRotator_h_31_INCLASS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonRotator_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonRotator;

// ********** End Class UCommonRotator *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonRotator_h

// ********** Begin Enum ERotatorDirection *********************************************************
#define FOREACH_ENUM_EROTATORDIRECTION(op) \
	op(ERotatorDirection::Right) \
	op(ERotatorDirection::Left) 

enum class ERotatorDirection : uint8;
template<> struct TIsUEnumClass<ERotatorDirection> { enum { Value = true }; };
template<> COMMONUI_NON_ATTRIBUTED_API UEnum* StaticEnum<ERotatorDirection>();
// ********** End Enum ERotatorDirection ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
