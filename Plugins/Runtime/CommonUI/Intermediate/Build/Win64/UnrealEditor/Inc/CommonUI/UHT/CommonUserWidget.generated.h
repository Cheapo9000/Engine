// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonUserWidget.h"

#ifdef COMMONUI_CommonUserWidget_generated_h
#error "CommonUserWidget.generated.h already included, missing '#pragma once' in CommonUserWidget.h"
#endif
#define COMMONUI_CommonUserWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;

// ********** Begin Class UCommonUserWidget ********************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_23_RPC_WRAPPERS \
	DECLARE_FUNCTION(execUnregisterScrollRecipientExternal); \
	DECLARE_FUNCTION(execRegisterScrollRecipientExternal); \
	DECLARE_FUNCTION(execSetConsumePointerInput);


struct Z_Construct_UClass_UCommonUserWidget_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUCommonUserWidget(); \
	friend struct ::Z_Construct_UClass_UCommonUserWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonUserWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonUserWidget_NoRegister) \
	DECLARE_SERIALIZER(UCommonUserWidget)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUserWidget); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonUserWidget(UCommonUserWidget&&) = delete; \
	UCommonUserWidget(const UCommonUserWidget&) = delete; \
	COMMONUI_API virtual ~UCommonUserWidget();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_23_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_23_INCLASS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonUserWidget;

// ********** End Class UCommonUserWidget **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUserWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
