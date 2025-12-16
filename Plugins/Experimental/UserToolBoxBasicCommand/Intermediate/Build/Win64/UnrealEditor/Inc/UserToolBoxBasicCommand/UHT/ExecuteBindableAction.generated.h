// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExecuteBindableAction.h"

#ifdef USERTOOLBOXBASICCOMMAND_ExecuteBindableAction_generated_h
#error "ExecuteBindableAction.generated.h already included, missing '#pragma once' in ExecuteBindableAction.h"
#endif
#define USERTOOLBOXBASICCOMMAND_ExecuteBindableAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBindableActionInfo ***********************************************
struct Z_Construct_UScriptStruct_FBindableActionInfo_Statics;
#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ExecuteBindableAction_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBindableActionInfo_Statics; \
	static class UScriptStruct* StaticStruct();


struct FBindableActionInfo;
// ********** End ScriptStruct FBindableActionInfo *************************************************

// ********** Begin Class UExecuteBindableAction ***************************************************
struct Z_Construct_UClass_UExecuteBindableAction_Statics;
USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UExecuteBindableAction_NoRegister();

#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ExecuteBindableAction_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExecuteBindableAction(); \
	friend struct ::Z_Construct_UClass_UExecuteBindableAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERTOOLBOXBASICCOMMAND_API UClass* ::Z_Construct_UClass_UExecuteBindableAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UExecuteBindableAction, UUTBBaseCommand, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserToolBoxBasicCommand"), Z_Construct_UClass_UExecuteBindableAction_NoRegister) \
	DECLARE_SERIALIZER(UExecuteBindableAction)


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ExecuteBindableAction_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UExecuteBindableAction(UExecuteBindableAction&&) = delete; \
	UExecuteBindableAction(const UExecuteBindableAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExecuteBindableAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExecuteBindableAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UExecuteBindableAction) \
	NO_API virtual ~UExecuteBindableAction();


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ExecuteBindableAction_h_23_PROLOG
#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ExecuteBindableAction_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ExecuteBindableAction_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ExecuteBindableAction_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UExecuteBindableAction;

// ********** End Class UExecuteBindableAction *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ExecuteBindableAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
