// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UTBBaseCommand.h"

#ifdef USERTOOLBOXCORE_UTBBaseCommand_generated_h
#error "UTBBaseCommand.generated.h already included, missing '#pragma once' in UTBBaseCommand.h"
#endif
#define USERTOOLBOXCORE_UTBBaseCommand_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;

// ********** Begin Class UUTBBaseCommand **********************************************************
#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddObjectsToTransaction); \
	DECLARE_FUNCTION(execAddObjectToTransaction); \
	DECLARE_FUNCTION(execExecuteCommand);


struct Z_Construct_UClass_UUTBBaseCommand_Statics;
USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBBaseCommand_NoRegister();

#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUTBBaseCommand(); \
	friend struct ::Z_Construct_UClass_UUTBBaseCommand_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERTOOLBOXCORE_API UClass* ::Z_Construct_UClass_UUTBBaseCommand_NoRegister(); \
public: \
	DECLARE_CLASS2(UUTBBaseCommand, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UserToolBoxCore"), Z_Construct_UClass_UUTBBaseCommand_NoRegister) \
	DECLARE_SERIALIZER(UUTBBaseCommand)


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUTBBaseCommand(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUTBBaseCommand(UUTBBaseCommand&&) = delete; \
	UUTBBaseCommand(const UUTBBaseCommand&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUTBBaseCommand); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUTBBaseCommand); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUTBBaseCommand) \
	NO_API virtual ~UUTBBaseCommand();


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUTBBaseCommand;

// ********** End Class UUTBBaseCommand ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
