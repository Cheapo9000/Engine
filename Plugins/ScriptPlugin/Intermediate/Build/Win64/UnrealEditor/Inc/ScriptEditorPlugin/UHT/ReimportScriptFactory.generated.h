// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReimportScriptFactory.h"

#ifdef SCRIPTEDITORPLUGIN_ReimportScriptFactory_generated_h
#error "ReimportScriptFactory.generated.h already included, missing '#pragma once' in ReimportScriptFactory.h"
#endif
#define SCRIPTEDITORPLUGIN_ReimportScriptFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UReimportScriptFactory ***************************************************
struct Z_Construct_UClass_UReimportScriptFactory_Statics;
SCRIPTEDITORPLUGIN_API UClass* Z_Construct_UClass_UReimportScriptFactory_NoRegister();

#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptEditorPlugin_Classes_ReimportScriptFactory_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUReimportScriptFactory(); \
	friend struct ::Z_Construct_UClass_UReimportScriptFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTEDITORPLUGIN_API UClass* ::Z_Construct_UClass_UReimportScriptFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UReimportScriptFactory, UScriptFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScriptEditorPlugin"), Z_Construct_UClass_UReimportScriptFactory_NoRegister) \
	DECLARE_SERIALIZER(UReimportScriptFactory)


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptEditorPlugin_Classes_ReimportScriptFactory_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTEDITORPLUGIN_API UReimportScriptFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReimportScriptFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTEDITORPLUGIN_API, UReimportScriptFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReimportScriptFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReimportScriptFactory(UReimportScriptFactory&&) = delete; \
	UReimportScriptFactory(const UReimportScriptFactory&) = delete; \
	SCRIPTEDITORPLUGIN_API virtual ~UReimportScriptFactory();


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptEditorPlugin_Classes_ReimportScriptFactory_h_17_PROLOG
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptEditorPlugin_Classes_ReimportScriptFactory_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptEditorPlugin_Classes_ReimportScriptFactory_h_20_INCLASS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptEditorPlugin_Classes_ReimportScriptFactory_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReimportScriptFactory;

// ********** End Class UReimportScriptFactory *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ScriptPlugin_Source_ScriptEditorPlugin_Classes_ReimportScriptFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
