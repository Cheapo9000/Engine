// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScriptBlueprint.h"

#ifdef SCRIPTPLUGIN_ScriptBlueprint_generated_h
#error "ScriptBlueprint.generated.h already included, missing '#pragma once' in ScriptBlueprint.h"
#endif
#define SCRIPTPLUGIN_ScriptBlueprint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UScriptBlueprint *********************************************************
struct Z_Construct_UClass_UScriptBlueprint_Statics;
SCRIPTPLUGIN_API UClass* Z_Construct_UClass_UScriptBlueprint_NoRegister();

#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUScriptBlueprint(); \
	friend struct ::Z_Construct_UClass_UScriptBlueprint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTPLUGIN_API UClass* ::Z_Construct_UClass_UScriptBlueprint_NoRegister(); \
public: \
	DECLARE_CLASS2(UScriptBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ScriptPlugin"), Z_Construct_UClass_UScriptBlueprint_NoRegister) \
	DECLARE_SERIALIZER(UScriptBlueprint)


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptBlueprint); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScriptBlueprint(UScriptBlueprint&&) = delete; \
	UScriptBlueprint(const UScriptBlueprint&) = delete; \
	NO_API virtual ~UScriptBlueprint();


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_12_PROLOG
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_15_INCLASS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScriptBlueprint;

// ********** End Class UScriptBlueprint ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
