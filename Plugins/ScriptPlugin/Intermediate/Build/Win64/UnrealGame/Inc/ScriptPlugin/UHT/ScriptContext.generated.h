// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScriptContext.h"

#ifdef SCRIPTPLUGIN_ScriptContext_generated_h
#error "ScriptContext.generated.h already included, missing '#pragma once' in ScriptContext.h"
#endif
#define SCRIPTPLUGIN_ScriptContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UScriptContext ***********************************************************
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_17_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCallScriptFunction);


struct Z_Construct_UClass_UScriptContext_Statics;
SCRIPTPLUGIN_API UClass* Z_Construct_UClass_UScriptContext_NoRegister();

#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUScriptContext(); \
	friend struct ::Z_Construct_UClass_UScriptContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTPLUGIN_API UClass* ::Z_Construct_UClass_UScriptContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UScriptContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScriptPlugin"), Z_Construct_UClass_UScriptContext_NoRegister) \
	DECLARE_SERIALIZER(UScriptContext)


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptContext) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptContext); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScriptContext(UScriptContext&&) = delete; \
	UScriptContext(const UScriptContext&) = delete; \
	NO_API virtual ~UScriptContext();


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_14_PROLOG
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_17_INCLASS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScriptContext;

// ********** End Class UScriptContext *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
