// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/UIFUserWidget.h"

#ifdef UIFRAMEWORK_UIFUserWidget_generated_h
#error "UIFUserWidget.generated.h already included, missing '#pragma once' in UIFUserWidget.h"
#endif
#define UIFRAMEWORK_UIFUserWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UUIFrameworkWidget;
class UWidget;

// ********** Begin ScriptStruct FUIFrameworkUserWidgetNamedSlot ***********************************
struct Z_Construct_UScriptStruct_FUIFrameworkUserWidgetNamedSlot_Statics;
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUIFrameworkUserWidgetNamedSlot_Statics; \
	UIFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FUIFrameworkSlotBase Super;


struct FUIFrameworkUserWidgetNamedSlot;
// ********** End ScriptStruct FUIFrameworkUserWidgetNamedSlot *************************************

// ********** Begin ScriptStruct FUIFrameworkUserWidgetNamedSlotList *******************************
struct Z_Construct_UScriptStruct_FUIFrameworkUserWidgetNamedSlotList_Statics;
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUIFrameworkUserWidgetNamedSlotList_Statics; \
	UIFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FUIFrameworkUserWidgetNamedSlotList, Slots, UIFRAMEWORK_API );


struct FUIFrameworkUserWidgetNamedSlotList;
// ********** End ScriptStruct FUIFrameworkUserWidgetNamedSlotList *********************************

// ********** Begin Class UUIFrameworkUserWidget ***************************************************
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNamedSlot); \
	DECLARE_FUNCTION(execSetNamedSlot); \
	DECLARE_FUNCTION(execSetWidgetClass);


struct Z_Construct_UClass_UUIFrameworkUserWidget_Statics;
UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkUserWidget_NoRegister();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkUserWidget(); \
	friend struct ::Z_Construct_UClass_UUIFrameworkUserWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIFRAMEWORK_API UClass* ::Z_Construct_UClass_UUIFrameworkUserWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIFrameworkUserWidget, UUIFrameworkWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), Z_Construct_UClass_UUIFrameworkUserWidget_NoRegister) \
	DECLARE_SERIALIZER(UUIFrameworkUserWidget) \
	UIFRAMEWORK_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedNamedSlotList=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedNamedSlotList	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(UIFRAMEWORK_API)


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_78_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIFrameworkUserWidget(UUIFrameworkUserWidget&&) = delete; \
	UUIFrameworkUserWidget(const UUIFrameworkUserWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UIFRAMEWORK_API, UUIFrameworkUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkUserWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIFrameworkUserWidget) \
	UIFRAMEWORK_API virtual ~UUIFrameworkUserWidget();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_75_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_78_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIFrameworkUserWidget;

// ********** End Class UUIFrameworkUserWidget *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
