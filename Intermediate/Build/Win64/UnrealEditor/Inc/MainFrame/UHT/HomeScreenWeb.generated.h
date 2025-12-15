// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HomeScreen/HomeScreenWeb.h"

#ifdef MAINFRAME_HomeScreenWeb_generated_h
#error "HomeScreenWeb.generated.h already included, missing '#pragma once' in HomeScreenWeb.h"
#endif
#define MAINFRAME_HomeScreenWeb_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMainSectionMenu : uint8;

// ********** Begin Class UHomeScreenWeb ***********************************************************
#define FID_Engine_Source_Editor_MainFrame_Private_HomeScreen_HomeScreenWeb_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOpenWebPage); \
	DECLARE_FUNCTION(execOpenGettingStartedProject); \
	DECLARE_FUNCTION(execNavigateTo);


struct Z_Construct_UClass_UHomeScreenWeb_Statics;
MAINFRAME_API UClass* Z_Construct_UClass_UHomeScreenWeb_NoRegister();

#define FID_Engine_Source_Editor_MainFrame_Private_HomeScreen_HomeScreenWeb_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHomeScreenWeb(); \
	friend struct ::Z_Construct_UClass_UHomeScreenWeb_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MAINFRAME_API UClass* ::Z_Construct_UClass_UHomeScreenWeb_NoRegister(); \
public: \
	DECLARE_CLASS2(UHomeScreenWeb, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MainFrame"), Z_Construct_UClass_UHomeScreenWeb_NoRegister) \
	DECLARE_SERIALIZER(UHomeScreenWeb)


#define FID_Engine_Source_Editor_MainFrame_Private_HomeScreen_HomeScreenWeb_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHomeScreenWeb(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHomeScreenWeb(UHomeScreenWeb&&) = delete; \
	UHomeScreenWeb(const UHomeScreenWeb&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHomeScreenWeb); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHomeScreenWeb); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHomeScreenWeb) \
	NO_API virtual ~UHomeScreenWeb();


#define FID_Engine_Source_Editor_MainFrame_Private_HomeScreen_HomeScreenWeb_h_11_PROLOG
#define FID_Engine_Source_Editor_MainFrame_Private_HomeScreen_HomeScreenWeb_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MainFrame_Private_HomeScreen_HomeScreenWeb_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MainFrame_Private_HomeScreen_HomeScreenWeb_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MainFrame_Private_HomeScreen_HomeScreenWeb_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHomeScreenWeb;

// ********** End Class UHomeScreenWeb *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MainFrame_Private_HomeScreen_HomeScreenWeb_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
