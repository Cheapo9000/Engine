// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/UIFOverlay.h"

#ifdef UIFRAMEWORK_UIFOverlay_generated_h
#error "UIFOverlay.generated.h already included, missing '#pragma once' in UIFOverlay.h"
#endif
#define UIFRAMEWORK_UIFOverlay_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUIFrameworkWidget;
struct FUIFrameworkOverlaySlot;

// ********** Begin ScriptStruct FUIFrameworkOverlaySlot *******************************************
struct Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics;
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics; \
	UIFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FUIFrameworkSlotBase Super;


struct FUIFrameworkOverlaySlot;
// ********** End ScriptStruct FUIFrameworkOverlaySlot *********************************************

// ********** Begin ScriptStruct FUIFrameworkOverlaySlotList ***************************************
struct Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList_Statics;
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList_Statics; \
	UIFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FUIFrameworkOverlaySlotList, Slots, UIFRAMEWORK_API );


struct FUIFrameworkOverlaySlotList;
// ********** End ScriptStruct FUIFrameworkOverlaySlotList *****************************************

// ********** Begin Class UUIFrameworkOverlay ******************************************************
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveWidget); \
	DECLARE_FUNCTION(execAddWidget);


struct Z_Construct_UClass_UUIFrameworkOverlay_Statics;
UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkOverlay_NoRegister();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkOverlay(); \
	friend struct ::Z_Construct_UClass_UUIFrameworkOverlay_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIFRAMEWORK_API UClass* ::Z_Construct_UClass_UUIFrameworkOverlay_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIFrameworkOverlay, UUIFrameworkWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), Z_Construct_UClass_UUIFrameworkOverlay_NoRegister) \
	DECLARE_SERIALIZER(UUIFrameworkOverlay) \
	UIFRAMEWORK_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedSlotList=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedSlotList	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(UIFRAMEWORK_API)


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_94_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIFrameworkOverlay(UUIFrameworkOverlay&&) = delete; \
	UUIFrameworkOverlay(const UUIFrameworkOverlay&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UIFRAMEWORK_API, UUIFrameworkOverlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkOverlay); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIFrameworkOverlay) \
	UIFRAMEWORK_API virtual ~UUIFrameworkOverlay();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_91_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_94_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIFrameworkOverlay;

// ********** End Class UUIFrameworkOverlay ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
