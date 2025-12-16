// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UIFPlayerComponent.h"

#ifdef UIFRAMEWORK_UIFPlayerComponent_generated_h
#error "UIFPlayerComponent.generated.h already included, missing '#pragma once' in UIFPlayerComponent.h"
#endif
#define UIFRAMEWORK_UIFPlayerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUIFrameworkWidget;
struct FUIFrameworkGameLayerSlot;
struct FUIFrameworkWidgetId;

// ********** Begin ScriptStruct FUIFrameworkGameLayerSlot *****************************************
struct Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics;
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics; \
	UIFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FUIFrameworkSlotBase Super;


struct FUIFrameworkGameLayerSlot;
// ********** End ScriptStruct FUIFrameworkGameLayerSlot *******************************************

// ********** Begin ScriptStruct FUIFrameworkGameLayerSlotList *************************************
struct Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList_Statics;
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_73_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList_Statics; \
	UIFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FUIFrameworkGameLayerSlotList, Entries, UIFRAMEWORK_API );


struct FUIFrameworkGameLayerSlotList;
// ********** End ScriptStruct FUIFrameworkGameLayerSlotList ***************************************

// ********** Begin Class UUIFrameworkPlayerComponent **********************************************
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	UIFRAMEWORK_API virtual void ServerRemoveWidgetRootFromTree_Implementation(FUIFrameworkWidgetId WidgetId); \
	DECLARE_FUNCTION(execOnRep_WidgetToFocus); \
	DECLARE_FUNCTION(execServerRemoveWidgetRootFromTree); \
	DECLARE_FUNCTION(execRemoveWidget); \
	DECLARE_FUNCTION(execAddWidget);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_119_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics;
UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkPlayerComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkPlayerComponent(); \
	friend struct ::Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIFRAMEWORK_API UClass* ::Z_Construct_UClass_UUIFrameworkPlayerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIFrameworkPlayerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UIFramework"), Z_Construct_UClass_UUIFrameworkPlayerComponent_NoRegister) \
	DECLARE_SERIALIZER(UUIFrameworkPlayerComponent) \
	UIFRAMEWORK_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RootList=NETFIELD_REP_START, \
		WidgetTree, \
		WidgetToFocus, \
		NETFIELD_REP_END=WidgetToFocus	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(UIFRAMEWORK_API)


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_119_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIFrameworkPlayerComponent(UUIFrameworkPlayerComponent&&) = delete; \
	UUIFrameworkPlayerComponent(const UUIFrameworkPlayerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UIFRAMEWORK_API, UUIFrameworkPlayerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkPlayerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIFrameworkPlayerComponent) \
	UIFRAMEWORK_API virtual ~UUIFrameworkPlayerComponent();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_116_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_119_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_119_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_119_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIFrameworkPlayerComponent;

// ********** End Class UUIFrameworkPlayerComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h

// ********** Begin Enum EUIFrameworkGameLayerType *************************************************
#define FOREACH_ENUM_EUIFRAMEWORKGAMELAYERTYPE(op) \
	op(EUIFrameworkGameLayerType::Viewport) \
	op(EUIFrameworkGameLayerType::PlayerScreen) 

enum class EUIFrameworkGameLayerType : uint8;
template<> struct TIsUEnumClass<EUIFrameworkGameLayerType> { enum { Value = true }; };
template<> UIFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EUIFrameworkGameLayerType>();
// ********** End Enum EUIFrameworkGameLayerType ***************************************************

// ********** Begin Enum EUIFrameworkInputMode *****************************************************
#define FOREACH_ENUM_EUIFRAMEWORKINPUTMODE(op) \
	op(EUIFrameworkInputMode::UI) \
	op(EUIFrameworkInputMode::Game) 

enum class EUIFrameworkInputMode : uint8;
template<> struct TIsUEnumClass<EUIFrameworkInputMode> { enum { Value = true }; };
template<> UIFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EUIFrameworkInputMode>();
// ********** End Enum EUIFrameworkInputMode *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
