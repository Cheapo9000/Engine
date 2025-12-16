// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScriptPluginComponent.h"

#ifdef SCRIPTPLUGIN_ScriptPluginComponent_generated_h
#error "ScriptPluginComponent.generated.h already included, missing '#pragma once' in ScriptPluginComponent.h"
#endif
#define SCRIPTPLUGIN_ScriptPluginComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UScriptPluginComponent ***************************************************
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_17_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCallScriptFunction);


struct Z_Construct_UClass_UScriptPluginComponent_Statics;
SCRIPTPLUGIN_API UClass* Z_Construct_UClass_UScriptPluginComponent_NoRegister();

#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUScriptPluginComponent(); \
	friend struct ::Z_Construct_UClass_UScriptPluginComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTPLUGIN_API UClass* ::Z_Construct_UClass_UScriptPluginComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UScriptPluginComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ScriptPlugin"), Z_Construct_UClass_UScriptPluginComponent_NoRegister) \
	DECLARE_SERIALIZER(UScriptPluginComponent)


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptPluginComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptPluginComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptPluginComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptPluginComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScriptPluginComponent(UScriptPluginComponent&&) = delete; \
	UScriptPluginComponent(const UScriptPluginComponent&) = delete; \
	NO_API virtual ~UScriptPluginComponent();


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_14_PROLOG
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_17_INCLASS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScriptPluginComponent;

// ********** End Class UScriptPluginComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
