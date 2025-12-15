// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMenuWidgetStyle.h"

#ifdef GAMEMENUBUILDER_GameMenuWidgetStyle_generated_h
#error "GameMenuWidgetStyle.generated.h already included, missing '#pragma once' in GameMenuWidgetStyle.h"
#endif
#define GAMEMENUBUILDER_GameMenuWidgetStyle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameMenuStyle ****************************************************
struct Z_Construct_UScriptStruct_FGameMenuStyle_Statics;
#define FID_Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameMenuStyle_Statics; \
	GAMEMENUBUILDER_API static class UScriptStruct* StaticStruct(); \
	typedef FSlateWidgetStyle Super;


struct FGameMenuStyle;
// ********** End ScriptStruct FGameMenuStyle ******************************************************

// ********** Begin Class UGameMenuWidgetStyle *****************************************************
struct Z_Construct_UClass_UGameMenuWidgetStyle_Statics;
GAMEMENUBUILDER_API UClass* Z_Construct_UClass_UGameMenuWidgetStyle_NoRegister();

#define FID_Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_189_INCLASS \
private: \
	static void StaticRegisterNativesUGameMenuWidgetStyle(); \
	friend struct ::Z_Construct_UClass_UGameMenuWidgetStyle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEMENUBUILDER_API UClass* ::Z_Construct_UClass_UGameMenuWidgetStyle_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameMenuWidgetStyle, USlateWidgetStyleContainerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameMenuBuilder"), Z_Construct_UClass_UGameMenuWidgetStyle_NoRegister) \
	DECLARE_SERIALIZER(UGameMenuWidgetStyle)


#define FID_Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_189_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEMENUBUILDER_API UGameMenuWidgetStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameMenuWidgetStyle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEMENUBUILDER_API, UGameMenuWidgetStyle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameMenuWidgetStyle); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameMenuWidgetStyle(UGameMenuWidgetStyle&&) = delete; \
	UGameMenuWidgetStyle(const UGameMenuWidgetStyle&) = delete; \
	GAMEMENUBUILDER_API virtual ~UGameMenuWidgetStyle();


#define FID_Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_186_PROLOG
#define FID_Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_189_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_189_INCLASS \
	FID_Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_189_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameMenuWidgetStyle;

// ********** End Class UGameMenuWidgetStyle *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h

// ********** Begin Enum GameMenuLayoutType ********************************************************
#define FOREACH_ENUM_GAMEMENULAYOUTTYPE(op) \
	op(GameMenuLayoutType::Single) \
	op(GameMenuLayoutType::SideBySide) 

namespace GameMenuLayoutType { enum Type : int; }
template<> GAMEMENUBUILDER_NON_ATTRIBUTED_API UEnum* StaticEnum<GameMenuLayoutType::Type>();
// ********** End Enum GameMenuLayoutType **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
