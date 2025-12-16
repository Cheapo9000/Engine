// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SlateIMInGameWindow.h"

#ifdef SLATEIMINGAME_SlateIMInGameWindow_generated_h
#error "SlateIMInGameWindow.generated.h already included, missing '#pragma once' in SlateIMInGameWindow.h"
#endif
#define SLATEIMINGAME_SlateIMInGameWindow_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASlateIMInGameWindow *****************************************************
struct Z_Construct_UClass_ASlateIMInGameWindow_Statics;
SLATEIMINGAME_API UClass* Z_Construct_UClass_ASlateIMInGameWindow_NoRegister();

#define FID_Engine_Plugins_Experimental_SlateIM_Source_SlateIMInGame_Public_SlateIMInGameWindow_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASlateIMInGameWindow(); \
	friend struct ::Z_Construct_UClass_ASlateIMInGameWindow_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SLATEIMINGAME_API UClass* ::Z_Construct_UClass_ASlateIMInGameWindow_NoRegister(); \
public: \
	DECLARE_CLASS2(ASlateIMInGameWindow, ASlateIMInGameWidgetBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SlateIMInGame"), Z_Construct_UClass_ASlateIMInGameWindow_NoRegister) \
	DECLARE_SERIALIZER(ASlateIMInGameWindow)


#define FID_Engine_Plugins_Experimental_SlateIM_Source_SlateIMInGame_Public_SlateIMInGameWindow_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASlateIMInGameWindow(ASlateIMInGameWindow&&) = delete; \
	ASlateIMInGameWindow(const ASlateIMInGameWindow&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLATEIMINGAME_API, ASlateIMInGameWindow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASlateIMInGameWindow); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASlateIMInGameWindow) \
	SLATEIMINGAME_API virtual ~ASlateIMInGameWindow();


#define FID_Engine_Plugins_Experimental_SlateIM_Source_SlateIMInGame_Public_SlateIMInGameWindow_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_SlateIM_Source_SlateIMInGame_Public_SlateIMInGameWindow_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_SlateIM_Source_SlateIMInGame_Public_SlateIMInGameWindow_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_SlateIM_Source_SlateIMInGame_Public_SlateIMInGameWindow_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASlateIMInGameWindow;

// ********** End Class ASlateIMInGameWindow *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_SlateIM_Source_SlateIMInGame_Public_SlateIMInGameWindow_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
