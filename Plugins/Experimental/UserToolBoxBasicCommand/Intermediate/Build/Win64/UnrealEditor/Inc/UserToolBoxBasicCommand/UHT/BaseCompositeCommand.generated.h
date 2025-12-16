// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseCompositeCommand.h"

#ifdef USERTOOLBOXBASICCOMMAND_BaseCompositeCommand_generated_h
#error "BaseCompositeCommand.generated.h already included, missing '#pragma once' in BaseCompositeCommand.h"
#endif
#define USERTOOLBOXBASICCOMMAND_BaseCompositeCommand_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBaseCompositeCommand ****************************************************
struct Z_Construct_UClass_UBaseCompositeCommand_Statics;
USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UBaseCompositeCommand_NoRegister();

#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_BaseCompositeCommand_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseCompositeCommand(); \
	friend struct ::Z_Construct_UClass_UBaseCompositeCommand_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERTOOLBOXBASICCOMMAND_API UClass* ::Z_Construct_UClass_UBaseCompositeCommand_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseCompositeCommand, UUTBBaseCommand, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UserToolBoxBasicCommand"), Z_Construct_UClass_UBaseCompositeCommand_NoRegister) \
	DECLARE_SERIALIZER(UBaseCompositeCommand)


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_BaseCompositeCommand_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseCompositeCommand(UBaseCompositeCommand&&) = delete; \
	UBaseCompositeCommand(const UBaseCompositeCommand&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseCompositeCommand); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseCompositeCommand); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UBaseCompositeCommand) \
	NO_API virtual ~UBaseCompositeCommand();


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_BaseCompositeCommand_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_BaseCompositeCommand_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_BaseCompositeCommand_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_BaseCompositeCommand_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseCompositeCommand;

// ********** End Class UBaseCompositeCommand ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_BaseCompositeCommand_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
