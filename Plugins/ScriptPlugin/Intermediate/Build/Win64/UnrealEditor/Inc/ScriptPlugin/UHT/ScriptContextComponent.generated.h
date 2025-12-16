// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScriptContextComponent.h"

#ifdef SCRIPTPLUGIN_ScriptContextComponent_generated_h
#error "ScriptContextComponent.generated.h already included, missing '#pragma once' in ScriptContextComponent.h"
#endif
#define SCRIPTPLUGIN_ScriptContextComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UScriptContextComponent **************************************************
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCallScriptFunction);


struct Z_Construct_UClass_UScriptContextComponent_Statics;
SCRIPTPLUGIN_API UClass* Z_Construct_UClass_UScriptContextComponent_NoRegister();

#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUScriptContextComponent(); \
	friend struct ::Z_Construct_UClass_UScriptContextComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTPLUGIN_API UClass* ::Z_Construct_UClass_UScriptContextComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UScriptContextComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ScriptPlugin"), Z_Construct_UClass_UScriptContextComponent_NoRegister) \
	DECLARE_SERIALIZER(UScriptContextComponent)


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptContextComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptContextComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptContextComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptContextComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScriptContextComponent(UScriptContextComponent&&) = delete; \
	UScriptContextComponent(const UScriptContextComponent&) = delete; \
	NO_API virtual ~UScriptContextComponent();


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_13_PROLOG
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_16_INCLASS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScriptContextComponent;

// ********** End Class UScriptContextComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
