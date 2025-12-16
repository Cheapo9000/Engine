// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UTBBaseUICommand.h"

#ifdef USERTOOLBOXCORE_UTBBaseUICommand_generated_h
#error "UTBBaseUICommand.generated.h already included, missing '#pragma once' in UTBBaseUICommand.h"
#endif
#define USERTOOLBOXCORE_UTBBaseUICommand_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UUTBBaseCommand;

// ********** Begin Class UBaseCommandNativeUI *****************************************************
struct Z_Construct_UClass_UBaseCommandNativeUI_Statics;
USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UBaseCommandNativeUI_NoRegister();

#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommand_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseCommandNativeUI(); \
	friend struct ::Z_Construct_UClass_UBaseCommandNativeUI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERTOOLBOXCORE_API UClass* ::Z_Construct_UClass_UBaseCommandNativeUI_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseCommandNativeUI, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserToolBoxCore"), Z_Construct_UClass_UBaseCommandNativeUI_NoRegister) \
	DECLARE_SERIALIZER(UBaseCommandNativeUI) \
	virtual UObject* _getUObject() const override { return const_cast<UBaseCommandNativeUI*>(this); }


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommand_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseCommandNativeUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseCommandNativeUI(UBaseCommandNativeUI&&) = delete; \
	UBaseCommandNativeUI(const UBaseCommandNativeUI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseCommandNativeUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseCommandNativeUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseCommandNativeUI) \
	NO_API virtual ~UBaseCommandNativeUI();


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommand_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommand_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommand_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommand_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseCommandNativeUI;

// ********** End Class UBaseCommandNativeUI *******************************************************

// ********** Begin Class UUTBCommandUMGUI *********************************************************
#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommand_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExecuteCommand);


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommand_h_37_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UUTBCommandUMGUI_Statics;
USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBCommandUMGUI_NoRegister();

#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommand_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUTBCommandUMGUI(); \
	friend struct ::Z_Construct_UClass_UUTBCommandUMGUI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERTOOLBOXCORE_API UClass* ::Z_Construct_UClass_UUTBCommandUMGUI_NoRegister(); \
public: \
	DECLARE_CLASS2(UUTBCommandUMGUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserToolBoxCore"), Z_Construct_UClass_UUTBCommandUMGUI_NoRegister) \
	DECLARE_SERIALIZER(UUTBCommandUMGUI) \
	virtual UObject* _getUObject() const override { return const_cast<UUTBCommandUMGUI*>(this); }


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommand_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUTBCommandUMGUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUTBCommandUMGUI(UUTBCommandUMGUI&&) = delete; \
	UUTBCommandUMGUI(const UUTBCommandUMGUI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUTBCommandUMGUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUTBCommandUMGUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUTBCommandUMGUI) \
	NO_API virtual ~UUTBCommandUMGUI();


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommand_h_34_PROLOG
#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommand_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommand_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommand_h_37_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommand_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommand_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUTBCommandUMGUI;

// ********** End Class UUTBCommandUMGUI ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommand_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
