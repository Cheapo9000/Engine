// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Input/CommonBoundActionButton.h"

#ifdef COMMONUI_CommonBoundActionButton_generated_h
#error "CommonBoundActionButton.generated.h already included, missing '#pragma once' in CommonBoundActionButton.h"
#endif
#define COMMONUI_CommonBoundActionButton_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCommonBoundActionButton *************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButton_h_17_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UCommonBoundActionButton_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonBoundActionButton_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButton_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonBoundActionButton(); \
	friend struct ::Z_Construct_UClass_UCommonBoundActionButton_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonBoundActionButton_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonBoundActionButton, UCommonButtonBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonBoundActionButton_NoRegister) \
	DECLARE_SERIALIZER(UCommonBoundActionButton) \
	virtual UObject* _getUObject() const override { return const_cast<UCommonBoundActionButton*>(this); }


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButton_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonBoundActionButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonBoundActionButton(UCommonBoundActionButton&&) = delete; \
	UCommonBoundActionButton(const UCommonBoundActionButton&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonBoundActionButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonBoundActionButton); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonBoundActionButton) \
	COMMONUI_API virtual ~UCommonBoundActionButton();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButton_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButton_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButton_h_17_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButton_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButton_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonBoundActionButton;

// ********** End Class UCommonBoundActionButton ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButton_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
