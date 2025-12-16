// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseCompositeInlineCommand.h"

#ifdef USERTOOLBOXBASICCOMMAND_BaseCompositeInlineCommand_generated_h
#error "BaseCompositeInlineCommand.generated.h already included, missing '#pragma once' in BaseCompositeInlineCommand.h"
#endif
#define USERTOOLBOXBASICCOMMAND_BaseCompositeInlineCommand_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBaseCompositeInlineCommand **********************************************
struct Z_Construct_UClass_UBaseCompositeInlineCommand_Statics;
USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UBaseCompositeInlineCommand_NoRegister();

#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_BaseCompositeInlineCommand_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseCompositeInlineCommand(); \
	friend struct ::Z_Construct_UClass_UBaseCompositeInlineCommand_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERTOOLBOXBASICCOMMAND_API UClass* ::Z_Construct_UClass_UBaseCompositeInlineCommand_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseCompositeInlineCommand, UUTBBaseCommand, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UserToolBoxBasicCommand"), Z_Construct_UClass_UBaseCompositeInlineCommand_NoRegister) \
	DECLARE_SERIALIZER(UBaseCompositeInlineCommand)


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_BaseCompositeInlineCommand_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseCompositeInlineCommand(UBaseCompositeInlineCommand&&) = delete; \
	UBaseCompositeInlineCommand(const UBaseCompositeInlineCommand&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseCompositeInlineCommand); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseCompositeInlineCommand); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UBaseCompositeInlineCommand) \
	NO_API virtual ~UBaseCompositeInlineCommand();


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_BaseCompositeInlineCommand_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_BaseCompositeInlineCommand_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_BaseCompositeInlineCommand_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_BaseCompositeInlineCommand_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseCompositeInlineCommand;

// ********** End Class UBaseCompositeInlineCommand ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_BaseCompositeInlineCommand_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
