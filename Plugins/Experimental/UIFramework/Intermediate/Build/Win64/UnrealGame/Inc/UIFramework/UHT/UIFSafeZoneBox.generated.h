// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/UIFSafeZoneBox.h"

#ifdef UIFRAMEWORK_UIFSafeZoneBox_generated_h
#error "UIFSafeZoneBox.generated.h already included, missing '#pragma once' in UIFSafeZoneBox.h"
#endif
#define UIFRAMEWORK_UIFSafeZoneBox_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUIFrameworkSlotBase;

// ********** Begin Class UUIFrameworkSafeZoneBox **************************************************
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSafeZoneBox_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetContent); \
	DECLARE_FUNCTION(execSetContent);


struct Z_Construct_UClass_UUIFrameworkSafeZoneBox_Statics;
UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkSafeZoneBox_NoRegister();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSafeZoneBox_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkSafeZoneBox(); \
	friend struct ::Z_Construct_UClass_UUIFrameworkSafeZoneBox_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIFRAMEWORK_API UClass* ::Z_Construct_UClass_UUIFrameworkSafeZoneBox_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIFrameworkSafeZoneBox, UUIFrameworkWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), Z_Construct_UClass_UUIFrameworkSafeZoneBox_NoRegister) \
	DECLARE_SERIALIZER(UUIFrameworkSafeZoneBox) \
	UIFRAMEWORK_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Slot=NETFIELD_REP_START, \
		NETFIELD_REP_END=Slot	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(UIFRAMEWORK_API)


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSafeZoneBox_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIFrameworkSafeZoneBox(UUIFrameworkSafeZoneBox&&) = delete; \
	UUIFrameworkSafeZoneBox(const UUIFrameworkSafeZoneBox&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UIFRAMEWORK_API, UUIFrameworkSafeZoneBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkSafeZoneBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIFrameworkSafeZoneBox) \
	UIFRAMEWORK_API virtual ~UUIFrameworkSafeZoneBox();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSafeZoneBox_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSafeZoneBox_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSafeZoneBox_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSafeZoneBox_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSafeZoneBox_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIFrameworkSafeZoneBox;

// ********** End Class UUIFrameworkSafeZoneBox ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSafeZoneBox_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
