// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UICommandsScriptingSubsystem.h"

#ifdef SLATESCRIPTINGCOMMANDS_UICommandsScriptingSubsystem_generated_h
#error "UICommandsScriptingSubsystem.generated.h already included, missing '#pragma once' in UICommandsScriptingSubsystem.h"
#endif
#define SLATESCRIPTINGCOMMANDS_UICommandsScriptingSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputChord;
struct FScriptingCommandInfo;

// ********** Begin ScriptStruct FScriptingCommandInfo *********************************************
struct Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics;
#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics; \
	SLATESCRIPTINGCOMMANDS_API static class UScriptStruct* StaticStruct();


struct FScriptingCommandInfo;
// ********** End ScriptStruct FScriptingCommandInfo ***********************************************

// ********** Begin Delegate FExecuteCommand *******************************************************
#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_65_DELEGATE \
SLATESCRIPTINGCOMMANDS_API void FExecuteCommand_DelegateWrapper(const FScriptDelegate& ExecuteCommand, FScriptingCommandInfo CommandInfo);


// ********** End Delegate FExecuteCommand *********************************************************

// ********** Begin Delegate FCanExecuteCommand ****************************************************
#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_68_DELEGATE \
SLATESCRIPTINGCOMMANDS_API bool FCanExecuteCommand_DelegateWrapper(const FScriptDelegate& CanExecuteCommand, FScriptingCommandInfo CommandInfo);


// ********** End Delegate FCanExecuteCommand ******************************************************

// ********** Begin ScriptStruct FScriptingCommand *************************************************
struct Z_Construct_UScriptStruct_FScriptingCommand_Statics;
#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_76_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FScriptingCommand_Statics; \
	SLATESCRIPTINGCOMMANDS_API static class UScriptStruct* StaticStruct();


struct FScriptingCommand;
// ********** End ScriptStruct FScriptingCommand ***************************************************

// ********** Begin ScriptStruct FScriptingCommandsContext *****************************************
struct Z_Construct_UScriptStruct_FScriptingCommandsContext_Statics;
#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_124_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FScriptingCommandsContext_Statics; \
	SLATESCRIPTINGCOMMANDS_API static class UScriptStruct* StaticStruct();


struct FScriptingCommandsContext;
// ********** End ScriptStruct FScriptingCommandsContext *******************************************

// ********** Begin ScriptStruct FScriptingCommandSet **********************************************
struct Z_Construct_UScriptStruct_FScriptingCommandSet_Statics;
#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_166_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FScriptingCommandSet_Statics; \
	SLATESCRIPTINGCOMMANDS_API static class UScriptStruct* StaticStruct();


struct FScriptingCommandSet;
// ********** End ScriptStruct FScriptingCommandSet ************************************************

// ********** Begin Class UUICommandsScriptingSubsystem ********************************************
#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDefaultCanExecuteAction); \
	DECLARE_FUNCTION(execHandleCanExecuteAction); \
	DECLARE_FUNCTION(execHandleExecuteAction); \
	DECLARE_FUNCTION(execIsInputChordMapped); \
	DECLARE_FUNCTION(execGetBindingCountForContext); \
	DECLARE_FUNCTION(execIsContextRegistered); \
	DECLARE_FUNCTION(execGetAvailableContexts); \
	DECLARE_FUNCTION(execCanSetExecuteCommands); \
	DECLARE_FUNCTION(execSetCanSetExecuteCommands); \
	DECLARE_FUNCTION(execUnregisterCommandSet); \
	DECLARE_FUNCTION(execIsCommandSetRegistered); \
	DECLARE_FUNCTION(execRegisterCommandSet); \
	DECLARE_FUNCTION(execUnregisterAllSets); \
	DECLARE_FUNCTION(execSetCanExecuteCommands); \
	DECLARE_FUNCTION(execCanExecuteCommands); \
	DECLARE_FUNCTION(execGetRegisteredCommands); \
	DECLARE_FUNCTION(execIsCommandRegistered); \
	DECLARE_FUNCTION(execUnregisterCommand); \
	DECLARE_FUNCTION(execRegisterCommandChecked); \
	DECLARE_FUNCTION(execRegisterCommand);


struct Z_Construct_UClass_UUICommandsScriptingSubsystem_Statics;
SLATESCRIPTINGCOMMANDS_API UClass* Z_Construct_UClass_UUICommandsScriptingSubsystem_NoRegister();

#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_182_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUICommandsScriptingSubsystem(); \
	friend struct ::Z_Construct_UClass_UUICommandsScriptingSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SLATESCRIPTINGCOMMANDS_API UClass* ::Z_Construct_UClass_UUICommandsScriptingSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UUICommandsScriptingSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SlateScriptingCommands"), Z_Construct_UClass_UUICommandsScriptingSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UUICommandsScriptingSubsystem)


#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_182_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SLATESCRIPTINGCOMMANDS_API UUICommandsScriptingSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUICommandsScriptingSubsystem(UUICommandsScriptingSubsystem&&) = delete; \
	UUICommandsScriptingSubsystem(const UUICommandsScriptingSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLATESCRIPTINGCOMMANDS_API, UUICommandsScriptingSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUICommandsScriptingSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUICommandsScriptingSubsystem) \
	SLATESCRIPTINGCOMMANDS_API virtual ~UUICommandsScriptingSubsystem();


#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_179_PROLOG
#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_182_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_182_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_182_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUICommandsScriptingSubsystem;

// ********** End Class UUICommandsScriptingSubsystem **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
