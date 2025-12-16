// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScriptFactory.h"

#ifdef SCRIPTEDITORPLUGIN_ScriptFactory_generated_h
#error "ScriptFactory.generated.h already included, missing '#pragma once' in ScriptFactory.h"
#endif
#define SCRIPTEDITORPLUGIN_ScriptFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UScriptFactory ***********************************************************
struct Z_Construct_UClass_UScriptFactory_Statics;
SCRIPTEDITORPLUGIN_API UClass* Z_Construct_UClass_UScriptFactory_NoRegister();

#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptEditorPlugin_Classes_ScriptFactory_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUScriptFactory(); \
	friend struct ::Z_Construct_UClass_UScriptFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTEDITORPLUGIN_API UClass* ::Z_Construct_UClass_UScriptFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UScriptFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScriptEditorPlugin"), Z_Construct_UClass_UScriptFactory_NoRegister) \
	DECLARE_SERIALIZER(UScriptFactory)


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptEditorPlugin_Classes_ScriptFactory_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScriptFactory(UScriptFactory&&) = delete; \
	UScriptFactory(const UScriptFactory&) = delete; \
	NO_API virtual ~UScriptFactory();


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptEditorPlugin_Classes_ScriptFactory_h_13_PROLOG
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptEditorPlugin_Classes_ScriptFactory_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptEditorPlugin_Classes_ScriptFactory_h_16_INCLASS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptEditorPlugin_Classes_ScriptFactory_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScriptFactory;

// ********** End Class UScriptFactory *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ScriptPlugin_Source_ScriptEditorPlugin_Classes_ScriptFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
