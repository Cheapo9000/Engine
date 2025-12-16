// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CompositeCommand.h"

#ifdef USERTOOLBOXBASICCOMMAND_CompositeCommand_generated_h
#error "CompositeCommand.generated.h already included, missing '#pragma once' in CompositeCommand.h"
#endif
#define USERTOOLBOXBASICCOMMAND_CompositeCommand_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCompositeCommand ********************************************************
struct Z_Construct_UClass_UCompositeCommand_Statics;
USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UCompositeCommand_NoRegister();

#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_CompositeCommand_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositeCommand(); \
	friend struct ::Z_Construct_UClass_UCompositeCommand_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERTOOLBOXBASICCOMMAND_API UClass* ::Z_Construct_UClass_UCompositeCommand_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositeCommand, UBaseCompositeCommand, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserToolBoxBasicCommand"), Z_Construct_UClass_UCompositeCommand_NoRegister) \
	DECLARE_SERIALIZER(UCompositeCommand)


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_CompositeCommand_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositeCommand(UCompositeCommand&&) = delete; \
	UCompositeCommand(const UCompositeCommand&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositeCommand); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeCommand); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCompositeCommand) \
	NO_API virtual ~UCompositeCommand();


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_CompositeCommand_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_CompositeCommand_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_CompositeCommand_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_CompositeCommand_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositeCommand;

// ********** End Class UCompositeCommand **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_CompositeCommand_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
