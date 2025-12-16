// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/UIFStackBox.h"

#ifdef UIFRAMEWORK_UIFStackBox_generated_h
#error "UIFStackBox.generated.h already included, missing '#pragma once' in UIFStackBox.h"
#endif
#define UIFRAMEWORK_UIFStackBox_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUIFrameworkWidget;
struct FUIFrameworkStackBoxSlot;

// ********** Begin ScriptStruct FUIFrameworkStackBoxSlot ******************************************
struct Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics;
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics; \
	UIFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FUIFrameworkSlotBase Super;


struct FUIFrameworkStackBoxSlot;
// ********** End ScriptStruct FUIFrameworkStackBoxSlot ********************************************

// ********** Begin ScriptStruct FUIFrameworkStackBoxSlotList **************************************
struct Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList_Statics;
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList_Statics; \
	UIFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FUIFrameworkStackBoxSlotList, Slots, UIFRAMEWORK_API );


struct FUIFrameworkStackBoxSlotList;
// ********** End ScriptStruct FUIFrameworkStackBoxSlotList ****************************************

// ********** Begin Class UUIFrameworkStackBox *****************************************************
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Orientation); \
	DECLARE_FUNCTION(execRemoveWidget); \
	DECLARE_FUNCTION(execAddWidget);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_98_ACCESSORS \
static void GetOrientation_WrapperImpl(const void* Object, void* OutValue); \
static void SetOrientation_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UUIFrameworkStackBox_Statics;
UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkStackBox_NoRegister();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkStackBox(); \
	friend struct ::Z_Construct_UClass_UUIFrameworkStackBox_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIFRAMEWORK_API UClass* ::Z_Construct_UClass_UUIFrameworkStackBox_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIFrameworkStackBox, UUIFrameworkWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), Z_Construct_UClass_UUIFrameworkStackBox_NoRegister) \
	DECLARE_SERIALIZER(UUIFrameworkStackBox) \
	UIFRAMEWORK_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Orientation=NETFIELD_REP_START, \
		ReplicatedSlotList, \
		NETFIELD_REP_END=ReplicatedSlotList	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(UIFRAMEWORK_API)


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_98_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIFrameworkStackBox(UUIFrameworkStackBox&&) = delete; \
	UUIFrameworkStackBox(const UUIFrameworkStackBox&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UIFRAMEWORK_API, UUIFrameworkStackBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkStackBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIFrameworkStackBox) \
	UIFRAMEWORK_API virtual ~UUIFrameworkStackBox();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_95_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_98_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_98_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIFrameworkStackBox;

// ********** End Class UUIFrameworkStackBox *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
