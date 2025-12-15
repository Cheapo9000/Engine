// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StatusBarSubsystem.h"

#ifdef STATUSBAR_StatusBarSubsystem_generated_h
#error "StatusBarSubsystem.generated.h already included, missing '#pragma once' in StatusBarSubsystem.h"
#endif
#define STATUSBAR_StatusBarSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStatusBarSubsystem ******************************************************
struct Z_Construct_UClass_UStatusBarSubsystem_Statics;
STATUSBAR_API UClass* Z_Construct_UClass_UStatusBarSubsystem_NoRegister();

#define FID_Engine_Source_Editor_StatusBar_Public_StatusBarSubsystem_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatusBarSubsystem(); \
	friend struct ::Z_Construct_UClass_UStatusBarSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATUSBAR_API UClass* ::Z_Construct_UClass_UStatusBarSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UStatusBarSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatusBar"), Z_Construct_UClass_UStatusBarSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UStatusBarSubsystem)


#define FID_Engine_Source_Editor_StatusBar_Public_StatusBarSubsystem_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATUSBAR_API UStatusBarSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStatusBarSubsystem(UStatusBarSubsystem&&) = delete; \
	UStatusBarSubsystem(const UStatusBarSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATUSBAR_API, UStatusBarSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatusBarSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStatusBarSubsystem) \
	STATUSBAR_API virtual ~UStatusBarSubsystem();


#define FID_Engine_Source_Editor_StatusBar_Public_StatusBarSubsystem_h_77_PROLOG
#define FID_Engine_Source_Editor_StatusBar_Public_StatusBarSubsystem_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_StatusBar_Public_StatusBarSubsystem_h_80_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_StatusBar_Public_StatusBarSubsystem_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStatusBarSubsystem;

// ********** End Class UStatusBarSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_StatusBar_Public_StatusBarSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
