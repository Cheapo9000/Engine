// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/UIFColorBlock.h"

#ifdef UIFRAMEWORK_UIFColorBlock_generated_h
#error "UIFColorBlock.generated.h already included, missing '#pragma once' in UIFColorBlock.h"
#endif
#define UIFRAMEWORK_UIFColorBlock_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;

// ********** Begin Class UUIFrameworkColorBlock ***************************************************
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_DesiredSize); \
	DECLARE_FUNCTION(execOnRep_Color); \
	DECLARE_FUNCTION(execGetDesiredSize); \
	DECLARE_FUNCTION(execSetDesiredSize); \
	DECLARE_FUNCTION(execGetColor); \
	DECLARE_FUNCTION(execSetColor);


struct Z_Construct_UClass_UUIFrameworkColorBlock_Statics;
UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkColorBlock_NoRegister();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkColorBlock(); \
	friend struct ::Z_Construct_UClass_UUIFrameworkColorBlock_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIFRAMEWORK_API UClass* ::Z_Construct_UClass_UUIFrameworkColorBlock_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIFrameworkColorBlock, UUIFrameworkWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), Z_Construct_UClass_UUIFrameworkColorBlock_NoRegister) \
	DECLARE_SERIALIZER(UUIFrameworkColorBlock) \
	UIFRAMEWORK_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Color=NETFIELD_REP_START, \
		DesiredSize, \
		NETFIELD_REP_END=DesiredSize	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(UIFRAMEWORK_API)


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIFrameworkColorBlock(UUIFrameworkColorBlock&&) = delete; \
	UUIFrameworkColorBlock(const UUIFrameworkColorBlock&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UIFRAMEWORK_API, UUIFrameworkColorBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkColorBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIFrameworkColorBlock) \
	UIFRAMEWORK_API virtual ~UUIFrameworkColorBlock();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIFrameworkColorBlock;

// ********** End Class UUIFrameworkColorBlock *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
