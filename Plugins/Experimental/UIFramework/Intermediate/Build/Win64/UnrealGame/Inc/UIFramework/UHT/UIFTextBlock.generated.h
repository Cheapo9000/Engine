// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/UIFTextBlock.h"

#ifdef UIFRAMEWORK_UIFTextBlock_generated_h
#error "UIFTextBlock.generated.h already included, missing '#pragma once' in UIFTextBlock.h"
#endif
#define UIFRAMEWORK_UIFTextBlock_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETextOverflowPolicy : uint8;
struct FLinearColor;

// ********** Begin Class UUIFrameworkTextBase *****************************************************
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_OverflowPolicy); \
	DECLARE_FUNCTION(execOnRep_Justification); \
	DECLARE_FUNCTION(execOnRep_TextSize); \
	DECLARE_FUNCTION(execOnRep_TextColor); \
	DECLARE_FUNCTION(execOnRep_Message); \
	DECLARE_FUNCTION(execGetOverflowPolicy); \
	DECLARE_FUNCTION(execSetOverflowPolicy); \
	DECLARE_FUNCTION(execGetJustification); \
	DECLARE_FUNCTION(execSetJustification); \
	DECLARE_FUNCTION(execGetTextSize); \
	DECLARE_FUNCTION(execSetTextSize); \
	DECLARE_FUNCTION(execGetTextColor); \
	DECLARE_FUNCTION(execSetTextColor); \
	DECLARE_FUNCTION(execGetText);


struct Z_Construct_UClass_UUIFrameworkTextBase_Statics;
UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkTextBase_NoRegister();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkTextBase(); \
	friend struct ::Z_Construct_UClass_UUIFrameworkTextBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIFRAMEWORK_API UClass* ::Z_Construct_UClass_UUIFrameworkTextBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIFrameworkTextBase, UUIFrameworkWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UIFramework"), Z_Construct_UClass_UUIFrameworkTextBase_NoRegister) \
	DECLARE_SERIALIZER(UUIFrameworkTextBase) \
	UIFRAMEWORK_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Message=NETFIELD_REP_START, \
		TextColor, \
		TextSize, \
		Justification, \
		OverflowPolicy, \
		NETFIELD_REP_END=OverflowPolicy	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(UIFRAMEWORK_API)


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIFrameworkTextBase(UUIFrameworkTextBase&&) = delete; \
	UUIFrameworkTextBase(const UUIFrameworkTextBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UIFRAMEWORK_API, UUIFrameworkTextBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkTextBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UUIFrameworkTextBase) \
	UIFRAMEWORK_API virtual ~UUIFrameworkTextBase();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_21_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIFrameworkTextBase;

// ********** End Class UUIFrameworkTextBase *******************************************************

// ********** Begin Class UUIFrameworkTextBlock ****************************************************
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_136_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_ShadowColor); \
	DECLARE_FUNCTION(execOnRep_ShadowOffset); \
	DECLARE_FUNCTION(execGetShadowColor); \
	DECLARE_FUNCTION(execSetShadowColor); \
	DECLARE_FUNCTION(execGetShadowOffset); \
	DECLARE_FUNCTION(execSetShadowOffset);


struct Z_Construct_UClass_UUIFrameworkTextBlock_Statics;
UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkTextBlock_NoRegister();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_136_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkTextBlock(); \
	friend struct ::Z_Construct_UClass_UUIFrameworkTextBlock_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIFRAMEWORK_API UClass* ::Z_Construct_UClass_UUIFrameworkTextBlock_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIFrameworkTextBlock, UUIFrameworkTextBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), Z_Construct_UClass_UUIFrameworkTextBlock_NoRegister) \
	DECLARE_SERIALIZER(UUIFrameworkTextBlock) \
	UIFRAMEWORK_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ShadowOffset=NETFIELD_REP_START, \
		ShadowColor, \
		NETFIELD_REP_END=ShadowColor	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(UIFRAMEWORK_API)


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_136_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIFrameworkTextBlock(UUIFrameworkTextBlock&&) = delete; \
	UUIFrameworkTextBlock(const UUIFrameworkTextBlock&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UIFRAMEWORK_API, UUIFrameworkTextBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkTextBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIFrameworkTextBlock) \
	UIFRAMEWORK_API virtual ~UUIFrameworkTextBlock();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_133_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_136_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_136_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_136_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_136_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIFrameworkTextBlock;

// ********** End Class UUIFrameworkTextBlock ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
