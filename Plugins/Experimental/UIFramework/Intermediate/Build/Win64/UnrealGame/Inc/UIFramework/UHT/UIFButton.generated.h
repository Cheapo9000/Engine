// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/UIFButton.h"

#ifdef UIFRAMEWORK_UIFButton_generated_h
#error "UIFButton.generated.h already included, missing '#pragma once' in UIFButton.h"
#endif
#define UIFRAMEWORK_UIFButton_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
struct FUIFrameworkSimpleSlot;

// ********** Begin Class UUIFrameworkButton *******************************************************
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	UIFRAMEWORK_API virtual void ServerUnhovered_Implementation(APlayerController* PlayerController); \
	UIFRAMEWORK_API virtual void ServerHovered_Implementation(APlayerController* PlayerController); \
	UIFRAMEWORK_API virtual void ServerFocusLost_Implementation(APlayerController* PlayerController); \
	UIFRAMEWORK_API virtual void ServerFocusReceived_Implementation(APlayerController* PlayerController); \
	UIFRAMEWORK_API virtual void ServerClick_Implementation(APlayerController* PlayerController); \
	DECLARE_FUNCTION(execOnRep_Slot); \
	DECLARE_FUNCTION(execServerUnhovered); \
	DECLARE_FUNCTION(execHandleUnhovered); \
	DECLARE_FUNCTION(execServerHovered); \
	DECLARE_FUNCTION(execHandleHovered); \
	DECLARE_FUNCTION(execServerFocusLost); \
	DECLARE_FUNCTION(execHandleFocusLost); \
	DECLARE_FUNCTION(execServerFocusReceived); \
	DECLARE_FUNCTION(execHandleFocusReceived); \
	DECLARE_FUNCTION(execServerClick); \
	DECLARE_FUNCTION(execHandleClick); \
	DECLARE_FUNCTION(execGetContent); \
	DECLARE_FUNCTION(execSetContent);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_22_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UUIFrameworkButton_Statics;
UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkButton_NoRegister();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkButton(); \
	friend struct ::Z_Construct_UClass_UUIFrameworkButton_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIFRAMEWORK_API UClass* ::Z_Construct_UClass_UUIFrameworkButton_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIFrameworkButton, UUIFrameworkWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), Z_Construct_UClass_UUIFrameworkButton_NoRegister) \
	DECLARE_SERIALIZER(UUIFrameworkButton) \
	UIFRAMEWORK_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Slot=NETFIELD_REP_START, \
		NETFIELD_REP_END=Slot	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(UIFRAMEWORK_API)


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIFrameworkButton(UUIFrameworkButton&&) = delete; \
	UUIFrameworkButton(const UUIFrameworkButton&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UIFRAMEWORK_API, UUIFrameworkButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIFrameworkButton) \
	UIFRAMEWORK_API virtual ~UUIFrameworkButton();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_22_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIFrameworkButton;

// ********** End Class UUIFrameworkButton *********************************************************

// ********** Begin Class UUIFrameworkButtonWidget *************************************************
struct Z_Construct_UClass_UUIFrameworkButtonWidget_Statics;
UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkButtonWidget_NoRegister();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkButtonWidget(); \
	friend struct ::Z_Construct_UClass_UUIFrameworkButtonWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIFRAMEWORK_API UClass* ::Z_Construct_UClass_UUIFrameworkButtonWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIFrameworkButtonWidget, UButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), Z_Construct_UClass_UUIFrameworkButtonWidget_NoRegister) \
	DECLARE_SERIALIZER(UUIFrameworkButtonWidget)


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_95_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIFrameworkButtonWidget(UUIFrameworkButtonWidget&&) = delete; \
	UUIFrameworkButtonWidget(const UUIFrameworkButtonWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UIFRAMEWORK_API, UUIFrameworkButtonWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkButtonWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIFrameworkButtonWidget) \
	UIFRAMEWORK_API virtual ~UUIFrameworkButtonWidget();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_92_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_95_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_95_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIFrameworkButtonWidget;

// ********** End Class UUIFrameworkButtonWidget ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
