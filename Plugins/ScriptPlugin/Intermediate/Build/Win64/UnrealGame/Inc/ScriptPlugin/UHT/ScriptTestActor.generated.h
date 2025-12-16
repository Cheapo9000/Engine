// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScriptTestActor.h"

#ifdef SCRIPTPLUGIN_ScriptTestActor_generated_h
#error "ScriptTestActor.generated.h already included, missing '#pragma once' in ScriptTestActor.h"
#endif
#define SCRIPTPLUGIN_ScriptTestActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AScriptTestActor *********************************************************
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_13_RPC_WRAPPERS \
	DECLARE_FUNCTION(execTestFunction);


struct Z_Construct_UClass_AScriptTestActor_Statics;
SCRIPTPLUGIN_API UClass* Z_Construct_UClass_AScriptTestActor_NoRegister();

#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAScriptTestActor(); \
	friend struct ::Z_Construct_UClass_AScriptTestActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTPLUGIN_API UClass* ::Z_Construct_UClass_AScriptTestActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AScriptTestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ScriptPlugin"), Z_Construct_UClass_AScriptTestActor_NoRegister) \
	DECLARE_SERIALIZER(AScriptTestActor)


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTPLUGIN_API AScriptTestActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AScriptTestActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTPLUGIN_API, AScriptTestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScriptTestActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AScriptTestActor(AScriptTestActor&&) = delete; \
	AScriptTestActor(const AScriptTestActor&) = delete; \
	SCRIPTPLUGIN_API virtual ~AScriptTestActor();


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_10_PROLOG
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_13_RPC_WRAPPERS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_13_INCLASS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AScriptTestActor;

// ********** End Class AScriptTestActor ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
