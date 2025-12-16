// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/UIFCanvasBox.h"

#ifdef UIFRAMEWORK_UIFCanvasBox_generated_h
#error "UIFCanvasBox.generated.h already included, missing '#pragma once' in UIFCanvasBox.h"
#endif
#define UIFRAMEWORK_UIFCanvasBox_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUIFrameworkWidget;
struct FUIFrameworkCanvasBoxSlot;

// ********** Begin ScriptStruct FUIFrameworkCanvasBoxSlot *****************************************
struct Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics;
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics; \
	UIFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FUIFrameworkSlotBase Super;


struct FUIFrameworkCanvasBoxSlot;
// ********** End ScriptStruct FUIFrameworkCanvasBoxSlot *******************************************

// ********** Begin ScriptStruct FUIFrameworkCanvasBoxSlotList *************************************
struct Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList_Statics;
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList_Statics; \
	UIFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FUIFrameworkCanvasBoxSlotList, Slots, UIFRAMEWORK_API );


struct FUIFrameworkCanvasBoxSlotList;
// ********** End ScriptStruct FUIFrameworkCanvasBoxSlotList ***************************************

// ********** Begin Class UUIFrameworkCanvasBox ****************************************************
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveWidget); \
	DECLARE_FUNCTION(execAddWidget);


struct Z_Construct_UClass_UUIFrameworkCanvasBox_Statics;
UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkCanvasBox_NoRegister();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkCanvasBox(); \
	friend struct ::Z_Construct_UClass_UUIFrameworkCanvasBox_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIFRAMEWORK_API UClass* ::Z_Construct_UClass_UUIFrameworkCanvasBox_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIFrameworkCanvasBox, UUIFrameworkWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), Z_Construct_UClass_UUIFrameworkCanvasBox_NoRegister) \
	DECLARE_SERIALIZER(UUIFrameworkCanvasBox) \
	UIFRAMEWORK_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedSlotList=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedSlotList	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(UIFRAMEWORK_API)


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_98_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIFrameworkCanvasBox(UUIFrameworkCanvasBox&&) = delete; \
	UUIFrameworkCanvasBox(const UUIFrameworkCanvasBox&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UIFRAMEWORK_API, UUIFrameworkCanvasBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkCanvasBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIFrameworkCanvasBox) \
	UIFRAMEWORK_API virtual ~UUIFrameworkCanvasBox();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_95_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_98_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIFrameworkCanvasBox;

// ********** End Class UUIFrameworkCanvasBox ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
