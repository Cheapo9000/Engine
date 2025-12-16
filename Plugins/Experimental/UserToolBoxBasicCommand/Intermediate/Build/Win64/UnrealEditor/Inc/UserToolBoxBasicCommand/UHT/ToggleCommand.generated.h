// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToggleCommand.h"

#ifdef USERTOOLBOXBASICCOMMAND_ToggleCommand_generated_h
#error "ToggleCommand.generated.h already included, missing '#pragma once' in ToggleCommand.h"
#endif
#define USERTOOLBOXBASICCOMMAND_ToggleCommand_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UToggleCommand ***********************************************************
struct Z_Construct_UClass_UToggleCommand_Statics;
USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UToggleCommand_NoRegister();

#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ToggleCommand_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToggleCommand(); \
	friend struct ::Z_Construct_UClass_UToggleCommand_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERTOOLBOXBASICCOMMAND_API UClass* ::Z_Construct_UClass_UToggleCommand_NoRegister(); \
public: \
	DECLARE_CLASS2(UToggleCommand, UBaseCompositeCommand, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserToolBoxBasicCommand"), Z_Construct_UClass_UToggleCommand_NoRegister) \
	DECLARE_SERIALIZER(UToggleCommand)


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ToggleCommand_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UToggleCommand(UToggleCommand&&) = delete; \
	UToggleCommand(const UToggleCommand&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToggleCommand); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToggleCommand); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UToggleCommand) \
	NO_API virtual ~UToggleCommand();


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ToggleCommand_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ToggleCommand_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ToggleCommand_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ToggleCommand_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UToggleCommand;

// ********** End Class UToggleCommand *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ToggleCommand_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
